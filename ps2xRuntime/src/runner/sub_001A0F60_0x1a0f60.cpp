#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001A0F60
// Address: 0x1a0f60 - 0x1a1150
void sub_001A0F60_0x1a0f60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A0F60_0x1a0f60");
#endif

    switch (ctx->pc) {
        case 0x1a0fe4u: goto label_1a0fe4;
        case 0x1a1000u: goto label_1a1000;
        case 0x1a1014u: goto label_1a1014;
        case 0x1a1028u: goto label_1a1028;
        case 0x1a103cu: goto label_1a103c;
        case 0x1a1050u: goto label_1a1050;
        case 0x1a1064u: goto label_1a1064;
        case 0x1a1074u: goto label_1a1074;
        case 0x1a1088u: goto label_1a1088;
        case 0x1a1090u: goto label_1a1090;
        case 0x1a109cu: goto label_1a109c;
        case 0x1a10acu: goto label_1a10ac;
        case 0x1a10c0u: goto label_1a10c0;
        case 0x1a10d4u: goto label_1a10d4;
        case 0x1a10f4u: goto label_1a10f4;
        case 0x1a1108u: goto label_1a1108;
        case 0x1a111cu: goto label_1a111c;
        case 0x1a1128u: goto label_1a1128;
        default: break;
    }

    ctx->pc = 0x1a0f60u;

    // 0x1a0f60: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1a0f60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1a0f64: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x1a0f64u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x1a0f68: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1a0f68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a0f6c: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x1a0f6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1a0f70: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1a0f70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a0f74: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1a0f74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1a0f78: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x1a0f78u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1a0f7c: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1a0f7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1a0f80: 0x31083  sra         $v0, $v1, 2
    ctx->pc = 0x1a0f80u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 2));
    // 0x1a0f84: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1A0F84u;
    {
        const bool branch_taken_0x1a0f84 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x1a0f84) {
            ctx->pc = 0x1A0F94u;
            goto label_1a0f94;
        }
    }
    ctx->pc = 0x1A0F8Cu;
    // 0x1a0f8c: 0x24620003  addiu       $v0, $v1, 0x3
    ctx->pc = 0x1a0f8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 3));
    // 0x1a0f90: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x1a0f90u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
label_1a0f94:
    // 0x1a0f94: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x1a0f94u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1a0f98: 0x3e00008  jr          $ra
    ctx->pc = 0x1A0F98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A0F98u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A0FA0u;
    // 0x1a0fa0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x1a0fa0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x1a0fa4: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x1a0fa4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x1a0fa8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1a0fa8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x1a0fac: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1a0facu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1a0fb0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1a0fb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1a0fb4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1a0fb4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1a0fb8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1a0fb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1a0fbc: 0xafa40060  sw          $a0, 0x60($sp)
    ctx->pc = 0x1a0fbcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 4));
    // 0x1a0fc0: 0x8f82bcc4  lw          $v0, -0x433C($gp)
    ctx->pc = 0x1a0fc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950084)));
    // 0x1a0fc4: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1a0fc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1a0fc8: 0x1002002f  beq         $zero, $v0, . + 4 + (0x2F << 2)
    ctx->pc = 0x1A0FC8u;
    {
        const bool branch_taken_0x1a0fc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 2));
        if (branch_taken_0x1a0fc8) {
            ctx->pc = 0x1A1088u;
            goto label_1a1088;
        }
    }
    ctx->pc = 0x1A0FD0u;
    // 0x1a0fd0: 0x8f82bcc4  lw          $v0, -0x433C($gp)
    ctx->pc = 0x1a0fd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950084)));
    // 0x1a0fd4: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1a0fd4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1a0fd8: 0x24050016  addiu       $a1, $zero, 0x16
    ctx->pc = 0x1a0fd8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    // 0x1a0fdc: 0xc085538  jal         func_2154E0
    ctx->pc = 0x1A0FDCu;
    SET_GPR_U32(ctx, 31, 0x1A0FE4u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x1A0FDCu, 0x1A0FE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A0FE4u;
label_1a0fe4:
    // 0x1a0fe4: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1a0fe4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a0fe8: 0x10120005  beq         $zero, $s2, . + 4 + (0x5 << 2)
    ctx->pc = 0x1A0FE8u;
    {
        const bool branch_taken_0x1a0fe8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 18));
        if (branch_taken_0x1a0fe8) {
            ctx->pc = 0x1A1000u;
            goto label_1a1000;
        }
    }
    ctx->pc = 0x1A0FF0u;
    // 0x1a0ff0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1a0ff0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a0ff4: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1a0ff4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1a0ff8: 0xc0ae044  jal         func_2B8110
    ctx->pc = 0x1A0FF8u;
    SET_GPR_U32(ctx, 31, 0x1A1000u);
    ctx->pc = 0x2B8110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B8110u, 0x1A0FF8u, 0x1A1000u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A1000u;
label_1a1000:
    // 0x1a1000: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x1a1000u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1a1004: 0x8c4400fc  lw          $a0, 0xFC($v0)
    ctx->pc = 0x1a1004u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 252)));
    // 0x1a1008: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1a1008u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a100c: 0xc0a631c  jal         func_298C70
    ctx->pc = 0x1A100Cu;
    SET_GPR_U32(ctx, 31, 0x1A1014u);
    ctx->pc = 0x298C70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x298C70u, 0x1A100Cu, 0x1A1014u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A1014u;
label_1a1014:
    // 0x1a1014: 0x8f82bcc4  lw          $v0, -0x433C($gp)
    ctx->pc = 0x1a1014u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950084)));
    // 0x1a1018: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1a1018u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1a101c: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x1a101cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x1a1020: 0xc085538  jal         func_2154E0
    ctx->pc = 0x1A1020u;
    SET_GPR_U32(ctx, 31, 0x1A1028u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x1A1020u, 0x1A1028u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A1028u;
label_1a1028:
    // 0x1a1028: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1a1028u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a102c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1a102cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a1030: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1a1030u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a1034: 0xc096af0  jal         func_25ABC0
    ctx->pc = 0x1A1034u;
    SET_GPR_U32(ctx, 31, 0x1A103Cu);
    ctx->pc = 0x25ABC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25ABC0u, 0x1A1034u, 0x1A103Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A103Cu;
label_1a103c:
    // 0x1a103c: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x1a103cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1a1040: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1a1040u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a1044: 0x8c4500f8  lw          $a1, 0xF8($v0)
    ctx->pc = 0x1a1044u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 248)));
    // 0x1a1048: 0xc096a9c  jal         func_25AA70
    ctx->pc = 0x1A1048u;
    SET_GPR_U32(ctx, 31, 0x1A1050u);
    ctx->pc = 0x25AA70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AA70u, 0x1A1048u, 0x1A1050u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A1050u;
label_1a1050:
    // 0x1a1050: 0x8f82bcc4  lw          $v0, -0x433C($gp)
    ctx->pc = 0x1a1050u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950084)));
    // 0x1a1054: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1a1054u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1a1058: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x1a1058u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1a105c: 0xc085538  jal         func_2154E0
    ctx->pc = 0x1A105Cu;
    SET_GPR_U32(ctx, 31, 0x1A1064u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x1A105Cu, 0x1A1064u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A1064u;
label_1a1064:
    // 0x1a1064: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x1a1064u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a1068: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1a1068u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a106c: 0xc0a8388  jal         func_2A0E20
    ctx->pc = 0x1A106Cu;
    SET_GPR_U32(ctx, 31, 0x1A1074u);
    ctx->pc = 0x2A0E20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A0E20u, 0x1A106Cu, 0x1A1074u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A1074u;
label_1a1074:
    // 0x1a1074: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x1a1074u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1a1078: 0x8f84baa8  lw          $a0, -0x4558($gp)
    ctx->pc = 0x1a1078u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949544)));
    // 0x1a107c: 0x8c4500f8  lw          $a1, 0xF8($v0)
    ctx->pc = 0x1a107cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 248)));
    // 0x1a1080: 0xc041018  jal         func_104060
    ctx->pc = 0x1A1080u;
    SET_GPR_U32(ctx, 31, 0x1A1088u);
    ctx->pc = 0x104060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104060u, 0x1A1080u, 0x1A1088u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A1088u;
label_1a1088:
    // 0x1a1088: 0xc090864  jal         func_242190
    ctx->pc = 0x1A1088u;
    SET_GPR_U32(ctx, 31, 0x1A1090u);
    ctx->pc = 0x242190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x242190u, 0x1A1088u, 0x1A1090u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A1090u;
label_1a1090:
    // 0x1a1090: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1a1090u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a1094: 0xc0905a0  jal         func_241680
    ctx->pc = 0x1A1094u;
    SET_GPR_U32(ctx, 31, 0x1A109Cu);
    ctx->pc = 0x241680u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x241680u, 0x1A1094u, 0x1A109Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A109Cu;
label_1a109c:
    // 0x1a109c: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x1a109cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a10a0: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1a10a0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a10a4: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x1A10A4u;
    {
        const bool branch_taken_0x1a10a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a10a4) {
            ctx->pc = 0x1A10D8u;
            goto label_1a10d8;
        }
    }
    ctx->pc = 0x1A10ACu;
label_1a10ac:
    // 0x1a10ac: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x1a10acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1a10b0: 0x244400d8  addiu       $a0, $v0, 0xD8
    ctx->pc = 0x1a10b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 216));
    // 0x1a10b4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1a10b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a10b8: 0xc068170  jal         func_1A05C0
    ctx->pc = 0x1A10B8u;
    SET_GPR_U32(ctx, 31, 0x1A10C0u);
    ctx->pc = 0x1A05C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A05C0u, 0x1A10B8u, 0x1A10C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A10C0u;
label_1a10c0:
    // 0x1a10c0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1a10c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a10c4: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1a10c4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1a10c8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1a10c8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a10cc: 0xc09a5a8  jal         func_2696A0
    ctx->pc = 0x1A10CCu;
    SET_GPR_U32(ctx, 31, 0x1A10D4u);
    ctx->pc = 0x2696A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2696A0u, 0x1A10CCu, 0x1A10D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A10D4u;
label_1a10d4:
    // 0x1a10d4: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1a10d4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_1a10d8:
    // 0x1a10d8: 0x2e020006  sltiu       $v0, $s0, 0x6
    ctx->pc = 0x1a10d8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
    // 0x1a10dc: 0x1440fff3  bnez        $v0, . + 4 + (-0xD << 2)
    ctx->pc = 0x1A10DCu;
    {
        const bool branch_taken_0x1a10dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a10dc) {
            ctx->pc = 0x1A10ACu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a10ac;
        }
    }
    ctx->pc = 0x1A10E4u;
    // 0x1a10e4: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x1a10e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1a10e8: 0x244400d8  addiu       $a0, $v0, 0xD8
    ctx->pc = 0x1a10e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 216));
    // 0x1a10ec: 0xc068454  jal         func_1A1150
    ctx->pc = 0x1A10ECu;
    SET_GPR_U32(ctx, 31, 0x1A10F4u);
    ctx->pc = 0x1A1150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1150u, 0x1A10ECu, 0x1A10F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A10F4u;
label_1a10f4:
    // 0x1a10f4: 0x8f84bbec  lw          $a0, -0x4414($gp)
    ctx->pc = 0x1a10f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949868)));
    // 0x1a10f8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1a10f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a10fc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1a10fcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a1100: 0xc08f740  jal         func_23DD00
    ctx->pc = 0x1A1100u;
    SET_GPR_U32(ctx, 31, 0x1A1108u);
    ctx->pc = 0x23DD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23DD00u, 0x1A1100u, 0x1A1108u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A1108u;
label_1a1108:
    // 0x1a1108: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x1a1108u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1a110c: 0x8c440060  lw          $a0, 0x60($v0)
    ctx->pc = 0x1a110cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 96)));
    // 0x1a1110: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1a1110u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a1114: 0xc0ac13c  jal         func_2B04F0
    ctx->pc = 0x1A1114u;
    SET_GPR_U32(ctx, 31, 0x1A111Cu);
    ctx->pc = 0x2B04F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B04F0u, 0x1A1114u, 0x1A111Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A111Cu;
label_1a111c:
    // 0x1a111c: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x1a111cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1a1120: 0xc064adc  jal         func_192B70
    ctx->pc = 0x1A1120u;
    SET_GPR_U32(ctx, 31, 0x1A1128u);
    ctx->pc = 0x192B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x192B70u, 0x1A1120u, 0x1A1128u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A1128u;
label_1a1128:
    // 0x1a1128: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x1a1128u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1a112c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1a112cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1a1130: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1a1130u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1a1134: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1a1134u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a1138: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1a1138u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a113c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1a113cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a1140: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x1a1140u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x1a1144: 0x3e00008  jr          $ra
    ctx->pc = 0x1A1144u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A1144u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A114Cu;
    // 0x1a114c: 0x0  nop
    ctx->pc = 0x1a114cu;
    // NOP
    ctx->pc = 0x1a1150u;
}
