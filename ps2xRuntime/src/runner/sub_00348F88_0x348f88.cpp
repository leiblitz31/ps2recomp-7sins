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

// Function: sub_00348F88
// Address: 0x348f88 - 0x349260
void sub_00348F88_0x348f88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00348F88_0x348f88");
#endif

    switch (ctx->pc) {
        case 0x348fc0u: goto label_348fc0;
        case 0x348fdcu: goto label_348fdc;
        case 0x348ff0u: goto label_348ff0;
        case 0x349008u: goto label_349008;
        case 0x349020u: goto label_349020;
        case 0x349030u: goto label_349030;
        case 0x349044u: goto label_349044;
        case 0x34905cu: goto label_34905c;
        case 0x349074u: goto label_349074;
        case 0x349084u: goto label_349084;
        case 0x349184u: goto label_349184;
        case 0x3491e0u: goto label_3491e0;
        case 0x349220u: goto label_349220;
        case 0x349254u: goto label_349254;
        default: break;
    }

    ctx->pc = 0x348f88u;

    // 0x348f88: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x348f88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x348f8c: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x348f8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x348f90: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x348f90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x348f94: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x348f94u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x348f98: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x348f98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x348f9c: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x348f9cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x348fa0: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x348fa0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x348fa4: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x348fa4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x348fa8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x348fa8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x348fac: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x348facu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x348fb0: 0x8e42000c  lw          $v0, 0xC($s2)
    ctx->pc = 0x348fb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x348fb4: 0x8c510010  lw          $s1, 0x10($v0)
    ctx->pc = 0x348fb4u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x348fb8: 0xc0d120c  jal         func_344830
    ctx->pc = 0x348FB8u;
    SET_GPR_U32(ctx, 31, 0x348FC0u);
    ctx->pc = 0x348FBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x348FB8u;
    // 0x348fbc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x344830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x344830u, 0x348FB8u, 0x348FC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x348FC0u;
label_348fc0:
    // 0x348fc0: 0x4400008  bltz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x348FC0u;
    {
        const bool branch_taken_0x348fc0 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x348FC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x348FC0u;
        // 0x348fc4: 0x2421021  addu        $v0, $s2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x348fc0) {
            ctx->pc = 0x348FE4u;
            goto label_348fe4;
        }
    }
    ctx->pc = 0x348FC8u;
    // 0x348fc8: 0x8c4400a4  lw          $a0, 0xA4($v0)
    ctx->pc = 0x348fc8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 164)));
    // 0x348fcc: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x348FCCu;
    {
        const bool branch_taken_0x348fcc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x348FD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x348FCCu;
        // 0x348fd0: 0x24100098  addiu       $s0, $zero, 0x98 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 152));
        ctx->in_delay_slot = false;
        if (branch_taken_0x348fcc) {
            ctx->pc = 0x348FE0u;
            goto label_348fe0;
        }
    }
    ctx->pc = 0x348FD4u;
    // 0x348fd4: 0xc10598e  jal         func_416638
    ctx->pc = 0x348FD4u;
    SET_GPR_U32(ctx, 31, 0x348FDCu);
    ctx->pc = 0x416638u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x416638u, 0x348FD4u, 0x348FDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x348FDCu;
label_348fdc:
    // 0x348fdc: 0x245000a4  addiu       $s0, $v0, 0xA4
    ctx->pc = 0x348fdcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 164));
label_348fe0:
    // 0x348fe0: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x348fe0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_348fe4:
    // 0x348fe4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x348fe4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x348fe8: 0xc0d120c  jal         func_344830
    ctx->pc = 0x348FE8u;
    SET_GPR_U32(ctx, 31, 0x348FF0u);
    ctx->pc = 0x348FECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x348FE8u;
    // 0x348fec: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x344830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x344830u, 0x348FE8u, 0x348FF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x348FF0u;
label_348ff0:
    // 0x348ff0: 0x26030040  addiu       $v1, $s0, 0x40
    ctx->pc = 0x348ff0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
    // 0x348ff4: 0x28420000  slti        $v0, $v0, 0x0
    ctx->pc = 0x348ff4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x348ff8: 0x62800a  movz        $s0, $v1, $v0
    ctx->pc = 0x348ff8u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 3));
    // 0x348ffc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x348ffcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x349000: 0xc0d120c  jal         func_344830
    ctx->pc = 0x349000u;
    SET_GPR_U32(ctx, 31, 0x349008u);
    ctx->pc = 0x349004u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x349000u;
    // 0x349004: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x344830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x344830u, 0x349000u, 0x349008u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x349008u;
label_349008:
    // 0x349008: 0x28420000  slti        $v0, $v0, 0x0
    ctx->pc = 0x349008u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x34900c: 0x26030040  addiu       $v1, $s0, 0x40
    ctx->pc = 0x34900cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
    // 0x349010: 0x62800a  movz        $s0, $v1, $v0
    ctx->pc = 0x349010u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 3));
    // 0x349014: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x349014u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x349018: 0xc0d120c  jal         func_344830
    ctx->pc = 0x349018u;
    SET_GPR_U32(ctx, 31, 0x349020u);
    ctx->pc = 0x34901Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x349018u;
    // 0x34901c: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x344830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x344830u, 0x349018u, 0x349020u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x349020u;
label_349020:
    // 0x349020: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x349020u;
    {
        const bool branch_taken_0x349020 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x349024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x349020u;
        // 0x349024: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x349020) {
            ctx->pc = 0x34903Cu;
            goto label_34903c;
        }
    }
    ctx->pc = 0x349028u;
    // 0x349028: 0xc1035b0  jal         func_40D6C0
    ctx->pc = 0x349028u;
    SET_GPR_U32(ctx, 31, 0x349030u);
    ctx->pc = 0x34902Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x349028u;
    // 0x34902c: 0x2422021  addu        $a0, $s2, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D6C0u, 0x349028u, 0x349030u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x349030u;
label_349030:
    // 0x349030: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x349030u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x349034: 0x26100040  addiu       $s0, $s0, 0x40
    ctx->pc = 0x349034u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
    // 0x349038: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x349038u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_34903c:
    // 0x34903c: 0xc0d120c  jal         func_344830
    ctx->pc = 0x34903Cu;
    SET_GPR_U32(ctx, 31, 0x349044u);
    ctx->pc = 0x349040u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34903Cu;
    // 0x349040: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x344830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x344830u, 0x34903Cu, 0x349044u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x349044u;
label_349044:
    // 0x349044: 0x26030020  addiu       $v1, $s0, 0x20
    ctx->pc = 0x349044u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x349048: 0x28420000  slti        $v0, $v0, 0x0
    ctx->pc = 0x349048u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x34904c: 0x62800a  movz        $s0, $v1, $v0
    ctx->pc = 0x34904cu;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 3));
    // 0x349050: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x349050u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x349054: 0xc0d120c  jal         func_344830
    ctx->pc = 0x349054u;
    SET_GPR_U32(ctx, 31, 0x34905Cu);
    ctx->pc = 0x349058u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x349054u;
    // 0x349058: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x344830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x344830u, 0x349054u, 0x34905Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34905Cu;
label_34905c:
    // 0x34905c: 0x28420000  slti        $v0, $v0, 0x0
    ctx->pc = 0x34905cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x349060: 0x26030010  addiu       $v1, $s0, 0x10
    ctx->pc = 0x349060u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x349064: 0x62800a  movz        $s0, $v1, $v0
    ctx->pc = 0x349064u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 3));
    // 0x349068: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x349068u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34906c: 0xc0d120c  jal         func_344830
    ctx->pc = 0x34906Cu;
    SET_GPR_U32(ctx, 31, 0x349074u);
    ctx->pc = 0x349070u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34906Cu;
    // 0x349070: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x344830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x344830u, 0x34906Cu, 0x349074u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x349074u;
label_349074:
    // 0x349074: 0x4420005  bltzl       $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x349074u;
    {
        const bool branch_taken_0x349074 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x349074) {
            ctx->pc = 0x349078u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x349074u;
            // 0x349078: 0xae700000  sw          $s0, 0x0($s3) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x34908Cu;
            goto label_34908c;
        }
    }
    ctx->pc = 0x34907Cu;
    // 0x34907c: 0xc0d153e  jal         func_3454F8
    ctx->pc = 0x34907Cu;
    SET_GPR_U32(ctx, 31, 0x349084u);
    ctx->pc = 0x349080u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34907Cu;
    // 0x349080: 0x2422021  addu        $a0, $s2, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3454F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3454F8u, 0x34907Cu, 0x349084u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x349084u;
label_349084:
    // 0x349084: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x349084u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x349088: 0xae700000  sw          $s0, 0x0($s3)
    ctx->pc = 0x349088u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 16));
label_34908c:
    // 0x34908c: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x34908cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x349090: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x349090u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x349094: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x349094u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x349098: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x349098u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x34909c: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x34909cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3490a0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3490a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3490a4: 0x3e00008  jr          $ra
    ctx->pc = 0x3490A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3490A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3490A4u;
        // 0x3490a8: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3490A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3490ACu;
    // 0x3490ac: 0x0  nop
    ctx->pc = 0x3490acu;
    // NOP
    // 0x3490b0: 0x3e00008  jr          $ra
    ctx->pc = 0x3490B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3490B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3490B0u;
        // 0x3490b4: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3490B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3490B8u;
    // 0x3490b8: 0x3e00008  jr          $ra
    ctx->pc = 0x3490B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3490BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3490B8u;
        // 0x3490bc: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3490B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3490C0u;
    // 0x3490c0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x3490c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x3490c4: 0x3c030035  lui         $v1, 0x35
    ctx->pc = 0x3490c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)53 << 16));
    // 0x3490c8: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x3490c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x3490cc: 0x3c050034  lui         $a1, 0x34
    ctx->pc = 0x3490ccu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)52 << 16));
    // 0x3490d0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3490d0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3490d4: 0x3c060035  lui         $a2, 0x35
    ctx->pc = 0x3490d4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)53 << 16));
    // 0x3490d8: 0x3c040035  lui         $a0, 0x35
    ctx->pc = 0x3490d8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)53 << 16));
    // 0x3490dc: 0x3c070035  lui         $a3, 0x35
    ctx->pc = 0x3490dcu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)53 << 16));
    // 0x3490e0: 0x3c080035  lui         $t0, 0x35
    ctx->pc = 0x3490e0u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)53 << 16));
    // 0x3490e4: 0x3c090035  lui         $t1, 0x35
    ctx->pc = 0x3490e4u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)53 << 16));
    // 0x3490e8: 0x3c0a0035  lui         $t2, 0x35
    ctx->pc = 0x3490e8u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)53 << 16));
    // 0x3490ec: 0x3c0b0035  lui         $t3, 0x35
    ctx->pc = 0x3490ecu;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)53 << 16));
    // 0x3490f0: 0x3c0c0034  lui         $t4, 0x34
    ctx->pc = 0x3490f0u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)52 << 16));
    // 0x3490f4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x3490f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x3490f8: 0x27a20028  addiu       $v0, $sp, 0x28
    ctx->pc = 0x3490f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 40));
    // 0x3490fc: 0xac40fffc  sw          $zero, -0x4($v0)
    ctx->pc = 0x3490fcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294967292), GPR_U32(ctx, 0));
    // 0x349100: 0xac40ffd8  sw          $zero, -0x28($v0)
    ctx->pc = 0x349100u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294967256), GPR_U32(ctx, 0));
    // 0x349104: 0xac40fff8  sw          $zero, -0x8($v0)
    ctx->pc = 0x349104u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294967288), GPR_U32(ctx, 0));
    // 0x349108: 0xac40fff4  sw          $zero, -0xC($v0)
    ctx->pc = 0x349108u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294967284), GPR_U32(ctx, 0));
    // 0x34910c: 0xac40fff0  sw          $zero, -0x10($v0)
    ctx->pc = 0x34910cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294967280), GPR_U32(ctx, 0));
    // 0x349110: 0xac40ffec  sw          $zero, -0x14($v0)
    ctx->pc = 0x349110u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294967276), GPR_U32(ctx, 0));
    // 0x349114: 0xac40ffe8  sw          $zero, -0x18($v0)
    ctx->pc = 0x349114u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294967272), GPR_U32(ctx, 0));
    // 0x349118: 0xac40ffe4  sw          $zero, -0x1C($v0)
    ctx->pc = 0x349118u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294967268), GPR_U32(ctx, 0));
    // 0x34911c: 0xac40ffe0  sw          $zero, -0x20($v0)
    ctx->pc = 0x34911cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294967264), GPR_U32(ctx, 0));
    // 0x349120: 0xac40ffdc  sw          $zero, -0x24($v0)
    ctx->pc = 0x349120u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294967260), GPR_U32(ctx, 0));
    // 0x349124: 0x24638c58  addiu       $v1, $v1, -0x73A8
    ctx->pc = 0x349124u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294937688));
    // 0x349128: 0x24848cf8  addiu       $a0, $a0, -0x7308
    ctx->pc = 0x349128u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937848));
    // 0x34912c: 0x24a563c0  addiu       $a1, $a1, 0x63C0
    ctx->pc = 0x34912cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 25536));
    // 0x349130: 0x24c68d60  addiu       $a2, $a2, -0x72A0
    ctx->pc = 0x349130u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294937952));
    // 0x349134: 0x24e78e68  addiu       $a3, $a3, -0x7198
    ctx->pc = 0x349134u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294938216));
    // 0x349138: 0x25088f18  addiu       $t0, $t0, -0x70E8
    ctx->pc = 0x349138u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294938392));
    // 0x34913c: 0x252983b0  addiu       $t1, $t1, -0x7C50
    ctx->pc = 0x34913cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294935472));
    // 0x349140: 0x254a8810  addiu       $t2, $t2, -0x77F0
    ctx->pc = 0x349140u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294936592));
    // 0x349144: 0x256b8f88  addiu       $t3, $t3, -0x7078
    ctx->pc = 0x349144u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4294938504));
    // 0x349148: 0x258c7bc8  addiu       $t4, $t4, 0x7BC8
    ctx->pc = 0x349148u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 31688));
    // 0x34914c: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x34914cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
    // 0x349150: 0xafa50000  sw          $a1, 0x0($sp)
    ctx->pc = 0x349150u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 5));
    // 0x349154: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x349154u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x349158: 0xafa60004  sw          $a2, 0x4($sp)
    ctx->pc = 0x349158u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 6));
    // 0x34915c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x34915cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x349160: 0xafa30014  sw          $v1, 0x14($sp)
    ctx->pc = 0x349160u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 3));
    // 0x349164: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x349164u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x349168: 0xafa70008  sw          $a3, 0x8($sp)
    ctx->pc = 0x349168u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 7));
    // 0x34916c: 0xafa8000c  sw          $t0, 0xC($sp)
    ctx->pc = 0x34916cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 8));
    // 0x349170: 0xafa9001c  sw          $t1, 0x1C($sp)
    ctx->pc = 0x349170u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 9));
    // 0x349174: 0xafaa0020  sw          $t2, 0x20($sp)
    ctx->pc = 0x349174u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 10));
    // 0x349178: 0xafab0024  sw          $t3, 0x24($sp)
    ctx->pc = 0x349178u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 11));
    // 0x34917c: 0xc0d042c  jal         func_3410B0
    ctx->pc = 0x34917Cu;
    SET_GPR_U32(ctx, 31, 0x349184u);
    ctx->pc = 0x349180u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34917Cu;
    // 0x349180: 0xafac0028  sw          $t4, 0x28($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3410B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3410B0u, 0x34917Cu, 0x349184u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x349184u;
label_349184:
    // 0x349184: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x349184u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x349188: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x349188u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x34918c: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x34918cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x349190: 0x3e00008  jr          $ra
    ctx->pc = 0x349190u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x349194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x349190u;
        // 0x349194: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x349190u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x349198u;
    // 0x349198: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x349198u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x34919c: 0x3c030034  lui         $v1, 0x34
    ctx->pc = 0x34919cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)52 << 16));
    // 0x3491a0: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x3491a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x3491a4: 0x27a20018  addiu       $v0, $sp, 0x18
    ctx->pc = 0x3491a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 24));
    // 0x3491a8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3491a8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3491ac: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x3491acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x3491b0: 0xafa00018  sw          $zero, 0x18($sp)
    ctx->pc = 0x3491b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
    // 0x3491b4: 0xac40ffe8  sw          $zero, -0x18($v0)
    ctx->pc = 0x3491b4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294967272), GPR_U32(ctx, 0));
    // 0x3491b8: 0xac40fffc  sw          $zero, -0x4($v0)
    ctx->pc = 0x3491b8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294967292), GPR_U32(ctx, 0));
    // 0x3491bc: 0xac40fff8  sw          $zero, -0x8($v0)
    ctx->pc = 0x3491bcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294967288), GPR_U32(ctx, 0));
    // 0x3491c0: 0xac40fff4  sw          $zero, -0xC($v0)
    ctx->pc = 0x3491c0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294967284), GPR_U32(ctx, 0));
    // 0x3491c4: 0xac40fff0  sw          $zero, -0x10($v0)
    ctx->pc = 0x3491c4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294967280), GPR_U32(ctx, 0));
    // 0x3491c8: 0xac40ffec  sw          $zero, -0x14($v0)
    ctx->pc = 0x3491c8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294967276), GPR_U32(ctx, 0));
    // 0x3491cc: 0x246355a0  addiu       $v1, $v1, 0x55A0
    ctx->pc = 0x3491ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 21920));
    // 0x3491d0: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x3491d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x3491d4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x3491d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3491d8: 0xc0d0dd0  jal         func_343740
    ctx->pc = 0x3491D8u;
    SET_GPR_U32(ctx, 31, 0x3491E0u);
    ctx->pc = 0x3491DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3491D8u;
    // 0x3491dc: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x343740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x343740u, 0x3491D8u, 0x3491E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3491E0u;
label_3491e0:
    // 0x3491e0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x3491e0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3491e4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x3491e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3491e8: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x3491e8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3491ec: 0x3e00008  jr          $ra
    ctx->pc = 0x3491ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3491F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3491ECu;
        // 0x3491f0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3491ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3491F4u;
    // 0x3491f4: 0x0  nop
    ctx->pc = 0x3491f4u;
    // NOP
    // 0x3491f8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3491f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3491fc: 0x240300ac  addiu       $v1, $zero, 0xAC
    ctx->pc = 0x3491fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 172));
    // 0x349200: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x349200u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x349204: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x349204u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x349208: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x349208u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x34920c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x34920cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x349210: 0xafa30004  sw          $v1, 0x4($sp)
    ctx->pc = 0x349210u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
    // 0x349214: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x349214u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x349218: 0xc0d0f36  jal         func_343CD8
    ctx->pc = 0x349218u;
    SET_GPR_U32(ctx, 31, 0x349220u);
    ctx->pc = 0x34921Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x349218u;
    // 0x34921c: 0x37a60004  ori         $a2, $sp, 0x4 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)4);
    ctx->in_delay_slot = false;
    ctx->pc = 0x343CD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x343CD8u, 0x349218u, 0x349220u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x349220u;
label_349220:
    // 0x349220: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x349220u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x349224: 0x3e00008  jr          $ra
    ctx->pc = 0x349224u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x349228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x349224u;
        // 0x349228: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x349224u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x34922Cu;
    // 0x34922c: 0x0  nop
    ctx->pc = 0x34922cu;
    // NOP
    // 0x349230: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x349230u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x349234: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x349234u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x349238: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x349238u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x34923c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x34923cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x349240: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x349240u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x349244: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x349244u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x349248: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x349248u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    // 0x34924c: 0xc0d0f36  jal         func_343CD8
    ctx->pc = 0x34924Cu;
    SET_GPR_U32(ctx, 31, 0x349254u);
    ctx->pc = 0x349250u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34924Cu;
    // 0x349250: 0x37a60004  ori         $a2, $sp, 0x4 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)4);
    ctx->in_delay_slot = false;
    ctx->pc = 0x343CD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x343CD8u, 0x34924Cu, 0x349254u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x349254u;
label_349254:
    // 0x349254: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x349254u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x349258: 0x3e00008  jr          $ra
    ctx->pc = 0x349258u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x34925Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x349258u;
        // 0x34925c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x349258u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x349260u;
}
