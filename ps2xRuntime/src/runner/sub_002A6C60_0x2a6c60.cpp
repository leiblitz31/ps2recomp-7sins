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

// Function: sub_002A6C60
// Address: 0x2a6c60 - 0x2a71d0
void sub_002A6C60_0x2a6c60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A6C60_0x2a6c60");
#endif

    switch (ctx->pc) {
        case 0x2a6c80u: goto label_2a6c80;
        case 0x2a6cd0u: goto label_2a6cd0;
        case 0x2a6ce0u: goto label_2a6ce0;
        case 0x2a6cf8u: goto label_2a6cf8;
        case 0x2a6d24u: goto label_2a6d24;
        case 0x2a6d54u: goto label_2a6d54;
        case 0x2a6d6cu: goto label_2a6d6c;
        case 0x2a6d8cu: goto label_2a6d8c;
        case 0x2a6da4u: goto label_2a6da4;
        case 0x2a6dc4u: goto label_2a6dc4;
        case 0x2a6ddcu: goto label_2a6ddc;
        case 0x2a6df8u: goto label_2a6df8;
        case 0x2a6e04u: goto label_2a6e04;
        case 0x2a6e28u: goto label_2a6e28;
        case 0x2a6e34u: goto label_2a6e34;
        case 0x2a6e74u: goto label_2a6e74;
        case 0x2a6f5cu: goto label_2a6f5c;
        case 0x2a7008u: goto label_2a7008;
        case 0x2a711cu: goto label_2a711c;
        case 0x2a7138u: goto label_2a7138;
        case 0x2a7188u: goto label_2a7188;
        case 0x2a71a4u: goto label_2a71a4;
        default: break;
    }

    ctx->pc = 0x2a6c60u;

    // 0x2a6c60: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2a6c60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2a6c64: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2a6c64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2a6c68: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x2a6c68u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x2a6c6c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x2a6c6cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x2a6c70: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x2a6c70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2a6c74: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x2a6c74u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2a6c78: 0xc0a9dd4  jal         func_2A7750
    ctx->pc = 0x2A6C78u;
    SET_GPR_U32(ctx, 31, 0x2A6C80u);
    ctx->pc = 0x2A7750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A7750u, 0x2A6C78u, 0x2A6C80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A6C80u;
label_2a6c80:
    // 0x2a6c80: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2a6c80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2a6c84: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2a6c84u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2a6c88: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x2a6c88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2a6c8c: 0x3e00008  jr          $ra
    ctx->pc = 0x2A6C8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A6C8Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A6C94u;
    // 0x2a6c94: 0x0  nop
    ctx->pc = 0x2a6c94u;
    // NOP
    // 0x2a6c98: 0x0  nop
    ctx->pc = 0x2a6c98u;
    // NOP
    // 0x2a6c9c: 0x0  nop
    ctx->pc = 0x2a6c9cu;
    // NOP
    // 0x2a6ca0: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x2a6ca0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x2a6ca4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x2a6ca4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x2a6ca8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2a6ca8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2a6cac: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2a6cacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2a6cb0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2a6cb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2a6cb4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2a6cb4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2a6cb8: 0xafa400b0  sw          $a0, 0xB0($sp)
    ctx->pc = 0x2a6cb8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 4));
    // 0x2a6cbc: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x2a6cbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x2a6cc0: 0x8c44003c  lw          $a0, 0x3C($v0)
    ctx->pc = 0x2a6cc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
    // 0x2a6cc4: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x2a6cc4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2a6cc8: 0xc085538  jal         func_2154E0
    ctx->pc = 0x2A6CC8u;
    SET_GPR_U32(ctx, 31, 0x2A6CD0u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x2A6CC8u, 0x2A6CD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A6CD0u;
label_2a6cd0:
    // 0x2a6cd0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2a6cd0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a6cd4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2a6cd4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a6cd8: 0xc0a82cc  jal         func_2A0B30
    ctx->pc = 0x2A6CD8u;
    SET_GPR_U32(ctx, 31, 0x2A6CE0u);
    ctx->pc = 0x2A0B30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A0B30u, 0x2A6CD8u, 0x2A6CE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A6CE0u;
label_2a6ce0:
    // 0x2a6ce0: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2a6ce0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a6ce4: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x2a6ce4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x2a6ce8: 0x8c44003c  lw          $a0, 0x3C($v0)
    ctx->pc = 0x2a6ce8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
    // 0x2a6cec: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x2a6cecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x2a6cf0: 0xc085538  jal         func_2154E0
    ctx->pc = 0x2A6CF0u;
    SET_GPR_U32(ctx, 31, 0x2A6CF8u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x2A6CF0u, 0x2A6CF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A6CF8u;
label_2a6cf8:
    // 0x2a6cf8: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x2a6cf8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a6cfc: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x2a6cfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x2a6d00: 0x8c4201dc  lw          $v0, 0x1DC($v0)
    ctx->pc = 0x2a6d00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 476)));
    // 0x2a6d04: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2A6D04u;
    {
        const bool branch_taken_0x2a6d04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a6d04) {
            ctx->pc = 0x2A6D2Cu;
            goto label_2a6d2c;
        }
    }
    ctx->pc = 0x2A6D0Cu;
    // 0x2a6d0c: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x2a6d0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x2a6d10: 0x8f84bbec  lw          $a0, -0x4414($gp)
    ctx->pc = 0x2a6d10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949868)));
    // 0x2a6d14: 0x8c4501dc  lw          $a1, 0x1DC($v0)
    ctx->pc = 0x2a6d14u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 476)));
    // 0x2a6d18: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x2a6d18u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a6d1c: 0xc08f71c  jal         func_23DC70
    ctx->pc = 0x2A6D1Cu;
    SET_GPR_U32(ctx, 31, 0x2A6D24u);
    ctx->pc = 0x23DC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23DC70u, 0x2A6D1Cu, 0x2A6D24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A6D24u;
label_2a6d24:
    // 0x2a6d24: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x2a6d24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x2a6d28: 0xac4001dc  sw          $zero, 0x1DC($v0)
    ctx->pc = 0x2a6d28u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 476), GPR_U32(ctx, 0));
label_2a6d2c:
    // 0x2a6d2c: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x2a6d2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x2a6d30: 0x8c4201e0  lw          $v0, 0x1E0($v0)
    ctx->pc = 0x2a6d30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 480)));
    // 0x2a6d34: 0x1040002b  beqz        $v0, . + 4 + (0x2B << 2)
    ctx->pc = 0x2A6D34u;
    {
        const bool branch_taken_0x2a6d34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a6d34) {
            ctx->pc = 0x2A6DE4u;
            goto label_2a6de4;
        }
    }
    ctx->pc = 0x2A6D3Cu;
    // 0x2a6d3c: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x2a6d3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x2a6d40: 0x24440055  addiu       $a0, $v0, 0x55
    ctx->pc = 0x2a6d40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 85));
    // 0x2a6d44: 0x3c05004f  lui         $a1, 0x4F
    ctx->pc = 0x2a6d44u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)79 << 16));
    // 0x2a6d48: 0x24a5db70  addiu       $a1, $a1, -0x2490
    ctx->pc = 0x2a6d48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294957936));
    // 0x2a6d4c: 0xc0bc824  jal         func_2F2090
    ctx->pc = 0x2A6D4Cu;
    SET_GPR_U32(ctx, 31, 0x2A6D54u);
    ctx->pc = 0x2F2090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F2090u, 0x2A6D4Cu, 0x2A6D54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A6D54u;
label_2a6d54:
    // 0x2a6d54: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2A6D54u;
    {
        const bool branch_taken_0x2a6d54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a6d54) {
            ctx->pc = 0x2A6D74u;
            goto label_2a6d74;
        }
    }
    ctx->pc = 0x2A6D5Cu;
    // 0x2a6d5c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2a6d5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a6d60: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2a6d60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a6d64: 0xc0a8438  jal         func_2A10E0
    ctx->pc = 0x2A6D64u;
    SET_GPR_U32(ctx, 31, 0x2A6D6Cu);
    ctx->pc = 0x2A10E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A10E0u, 0x2A6D64u, 0x2A6D6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A6D6Cu;
label_2a6d6c:
    // 0x2a6d6c: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x2A6D6Cu;
    {
        const bool branch_taken_0x2a6d6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a6d6c) {
            ctx->pc = 0x2A6DDCu;
            goto label_2a6ddc;
        }
    }
    ctx->pc = 0x2A6D74u;
label_2a6d74:
    // 0x2a6d74: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x2a6d74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x2a6d78: 0x24440055  addiu       $a0, $v0, 0x55
    ctx->pc = 0x2a6d78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 85));
    // 0x2a6d7c: 0x3c05004f  lui         $a1, 0x4F
    ctx->pc = 0x2a6d7cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)79 << 16));
    // 0x2a6d80: 0x24a5db90  addiu       $a1, $a1, -0x2470
    ctx->pc = 0x2a6d80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294957968));
    // 0x2a6d84: 0xc0bc824  jal         func_2F2090
    ctx->pc = 0x2A6D84u;
    SET_GPR_U32(ctx, 31, 0x2A6D8Cu);
    ctx->pc = 0x2F2090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F2090u, 0x2A6D84u, 0x2A6D8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A6D8Cu;
label_2a6d8c:
    // 0x2a6d8c: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2A6D8Cu;
    {
        const bool branch_taken_0x2a6d8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a6d8c) {
            ctx->pc = 0x2A6DACu;
            goto label_2a6dac;
        }
    }
    ctx->pc = 0x2A6D94u;
    // 0x2a6d94: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2a6d94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a6d98: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2a6d98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a6d9c: 0xc0a8438  jal         func_2A10E0
    ctx->pc = 0x2A6D9Cu;
    SET_GPR_U32(ctx, 31, 0x2A6DA4u);
    ctx->pc = 0x2A10E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A10E0u, 0x2A6D9Cu, 0x2A6DA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A6DA4u;
label_2a6da4:
    // 0x2a6da4: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x2A6DA4u;
    {
        const bool branch_taken_0x2a6da4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a6da4) {
            ctx->pc = 0x2A6DDCu;
            goto label_2a6ddc;
        }
    }
    ctx->pc = 0x2A6DACu;
label_2a6dac:
    // 0x2a6dac: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x2a6dacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x2a6db0: 0x24440055  addiu       $a0, $v0, 0x55
    ctx->pc = 0x2a6db0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 85));
    // 0x2a6db4: 0x3c05004f  lui         $a1, 0x4F
    ctx->pc = 0x2a6db4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)79 << 16));
    // 0x2a6db8: 0x24a5dbb0  addiu       $a1, $a1, -0x2450
    ctx->pc = 0x2a6db8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294958000));
    // 0x2a6dbc: 0xc0bc824  jal         func_2F2090
    ctx->pc = 0x2A6DBCu;
    SET_GPR_U32(ctx, 31, 0x2A6DC4u);
    ctx->pc = 0x2F2090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F2090u, 0x2A6DBCu, 0x2A6DC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A6DC4u;
label_2a6dc4:
    // 0x2a6dc4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2A6DC4u;
    {
        const bool branch_taken_0x2a6dc4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a6dc4) {
            ctx->pc = 0x2A6DDCu;
            goto label_2a6ddc;
        }
    }
    ctx->pc = 0x2A6DCCu;
    // 0x2a6dcc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2a6dccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a6dd0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2a6dd0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a6dd4: 0xc0a8438  jal         func_2A10E0
    ctx->pc = 0x2A6DD4u;
    SET_GPR_U32(ctx, 31, 0x2A6DDCu);
    ctx->pc = 0x2A10E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A10E0u, 0x2A6DD4u, 0x2A6DDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A6DDCu;
label_2a6ddc:
    // 0x2a6ddc: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x2a6ddcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x2a6de0: 0xac4001e0  sw          $zero, 0x1E0($v0)
    ctx->pc = 0x2a6de0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 480), GPR_U32(ctx, 0));
label_2a6de4:
    // 0x2a6de4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2a6de4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a6de8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2a6de8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a6dec: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2a6decu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a6df0: 0xc121ce4  jal         func_487390
    ctx->pc = 0x2A6DF0u;
    SET_GPR_U32(ctx, 31, 0x2A6DF8u);
    ctx->pc = 0x487390u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x487390u, 0x2A6DF0u, 0x2A6DF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A6DF8u;
label_2a6df8:
    // 0x2a6df8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2a6df8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a6dfc: 0xc121cf4  jal         func_4873D0
    ctx->pc = 0x2A6DFCu;
    SET_GPR_U32(ctx, 31, 0x2A6E04u);
    ctx->pc = 0x4873D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4873D0u, 0x2A6DFCu, 0x2A6E04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A6E04u;
label_2a6e04:
    // 0x2a6e04: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x2a6e04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x2a6e08: 0x8c430180  lw          $v1, 0x180($v0)
    ctx->pc = 0x2a6e08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 384)));
    // 0x2a6e0c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2a6e0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2a6e10: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2A6E10u;
    {
        const bool branch_taken_0x2a6e10 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2a6e10) {
            ctx->pc = 0x2A6E28u;
            goto label_2a6e28;
        }
    }
    ctx->pc = 0x2A6E18u;
    // 0x2a6e18: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x2a6e18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x2a6e1c: 0x8c440118  lw          $a0, 0x118($v0)
    ctx->pc = 0x2a6e1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 280)));
    // 0x2a6e20: 0xc1030e6  jal         func_40C398
    ctx->pc = 0x2A6E20u;
    SET_GPR_U32(ctx, 31, 0x2A6E28u);
    ctx->pc = 0x40C398u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40C398u, 0x2A6E20u, 0x2A6E28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A6E28u;
label_2a6e28:
    // 0x2a6e28: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2a6e28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a6e2c: 0xc096880  jal         func_25A200
    ctx->pc = 0x2A6E2Cu;
    SET_GPR_U32(ctx, 31, 0x2A6E34u);
    ctx->pc = 0x25A200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A200u, 0x2A6E2Cu, 0x2A6E34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A6E34u;
label_2a6e34:
    // 0x2a6e34: 0x144000b9  bnez        $v0, . + 4 + (0xB9 << 2)
    ctx->pc = 0x2A6E34u;
    {
        const bool branch_taken_0x2a6e34 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2a6e34) {
            ctx->pc = 0x2A711Cu;
            goto label_2a711c;
        }
    }
    ctx->pc = 0x2A6E3Cu;
    // 0x2a6e3c: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x2a6e3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x2a6e40: 0x8c420110  lw          $v0, 0x110($v0)
    ctx->pc = 0x2a6e40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 272)));
    // 0x2a6e44: 0x24430030  addiu       $v1, $v0, 0x30
    ctx->pc = 0x2a6e44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x2a6e48: 0x27a20098  addiu       $v0, $sp, 0x98
    ctx->pc = 0x2a6e48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 152));
    // 0x2a6e4c: 0xc4620000  lwc1        $f2, 0x0($v1)
    ctx->pc = 0x2a6e4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2a6e50: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x2a6e50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a6e54: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x2a6e54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a6e58: 0xe4420000  swc1        $f2, 0x0($v0)
    ctx->pc = 0x2a6e58u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x2a6e5c: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x2a6e5cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x2a6e60: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x2a6e60u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x2a6e64: 0x27a40098  addiu       $a0, $sp, 0x98
    ctx->pc = 0x2a6e64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 152));
    // 0x2a6e68: 0x27a50098  addiu       $a1, $sp, 0x98
    ctx->pc = 0x2a6e68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 152));
    // 0x2a6e6c: 0xc104cf2  jal         func_4133C8
    ctx->pc = 0x2A6E6Cu;
    SET_GPR_U32(ctx, 31, 0x2A6E74u);
    ctx->pc = 0x4133C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4133C8u, 0x2A6E6Cu, 0x2A6E74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A6E74u;
label_2a6e74:
    // 0x2a6e74: 0x3c04004f  lui         $a0, 0x4F
    ctx->pc = 0x2a6e74u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)79 << 16));
    // 0x2a6e78: 0x2484dc00  addiu       $a0, $a0, -0x2400
    ctx->pc = 0x2a6e78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294958080));
    // 0x2a6e7c: 0x27a30088  addiu       $v1, $sp, 0x88
    ctx->pc = 0x2a6e7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 136));
    // 0x2a6e80: 0xdc820000  ld          $v0, 0x0($a0)
    ctx->pc = 0x2a6e80u;
    SET_GPR_U64(ctx, 2, FAST_READ64(0x4EDC00u));
    // 0x2a6e84: 0xc4800008  lwc1        $f0, 0x8($a0)
    ctx->pc = 0x2a6e84u;
    { uint32_t bits = FAST_READ32(0x4EDC08u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a6e88: 0xfc620000  sd          $v0, 0x0($v1)
    ctx->pc = 0x2a6e88u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 2));
    // 0x2a6e8c: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x2a6e8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x2a6e90: 0x3c04004f  lui         $a0, 0x4F
    ctx->pc = 0x2a6e90u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)79 << 16));
    // 0x2a6e94: 0x2484dc10  addiu       $a0, $a0, -0x23F0
    ctx->pc = 0x2a6e94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294958096));
    // 0x2a6e98: 0x27a30078  addiu       $v1, $sp, 0x78
    ctx->pc = 0x2a6e98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 120));
    // 0x2a6e9c: 0xdc820000  ld          $v0, 0x0($a0)
    ctx->pc = 0x2a6e9cu;
    SET_GPR_U64(ctx, 2, FAST_READ64(0x4EDC10u));
    // 0x2a6ea0: 0xc4800008  lwc1        $f0, 0x8($a0)
    ctx->pc = 0x2a6ea0u;
    { uint32_t bits = FAST_READ32(0x4EDC18u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a6ea4: 0xfc620000  sd          $v0, 0x0($v1)
    ctx->pc = 0x2a6ea4u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 2));
    // 0x2a6ea8: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x2a6ea8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x2a6eac: 0xc7a10078  lwc1        $f1, 0x78($sp)
    ctx->pc = 0x2a6eacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a6eb0: 0xc7a0009c  lwc1        $f0, 0x9C($sp)
    ctx->pc = 0x2a6eb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a6eb4: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2a6eb4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2a6eb8: 0xe7a00068  swc1        $f0, 0x68($sp)
    ctx->pc = 0x2a6eb8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x2a6ebc: 0xc7a1007c  lwc1        $f1, 0x7C($sp)
    ctx->pc = 0x2a6ebcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a6ec0: 0xc7a0009c  lwc1        $f0, 0x9C($sp)
    ctx->pc = 0x2a6ec0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a6ec4: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2a6ec4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2a6ec8: 0xe7a0006c  swc1        $f0, 0x6C($sp)
    ctx->pc = 0x2a6ec8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 108), bits); }
    // 0x2a6ecc: 0xc7a10080  lwc1        $f1, 0x80($sp)
    ctx->pc = 0x2a6eccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a6ed0: 0xc7a0009c  lwc1        $f0, 0x9C($sp)
    ctx->pc = 0x2a6ed0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a6ed4: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2a6ed4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2a6ed8: 0xe7a00070  swc1        $f0, 0x70($sp)
    ctx->pc = 0x2a6ed8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x2a6edc: 0xc7a10098  lwc1        $f1, 0x98($sp)
    ctx->pc = 0x2a6edcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a6ee0: 0xc7a00068  lwc1        $f0, 0x68($sp)
    ctx->pc = 0x2a6ee0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a6ee4: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x2a6ee4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2a6ee8: 0xe7a00068  swc1        $f0, 0x68($sp)
    ctx->pc = 0x2a6ee8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x2a6eec: 0xc7a1009c  lwc1        $f1, 0x9C($sp)
    ctx->pc = 0x2a6eecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a6ef0: 0xc7a0006c  lwc1        $f0, 0x6C($sp)
    ctx->pc = 0x2a6ef0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a6ef4: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x2a6ef4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2a6ef8: 0xe7a0006c  swc1        $f0, 0x6C($sp)
    ctx->pc = 0x2a6ef8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 108), bits); }
    // 0x2a6efc: 0xc7a100a0  lwc1        $f1, 0xA0($sp)
    ctx->pc = 0x2a6efcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a6f00: 0xc7a00070  lwc1        $f0, 0x70($sp)
    ctx->pc = 0x2a6f00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a6f04: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x2a6f04u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2a6f08: 0xe7a00070  swc1        $f0, 0x70($sp)
    ctx->pc = 0x2a6f08u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x2a6f0c: 0xc7a50090  lwc1        $f5, 0x90($sp)
    ctx->pc = 0x2a6f0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x2a6f10: 0xc7a40080  lwc1        $f4, 0x80($sp)
    ctx->pc = 0x2a6f10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2a6f14: 0xc7a30088  lwc1        $f3, 0x88($sp)
    ctx->pc = 0x2a6f14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2a6f18: 0xc7a20078  lwc1        $f2, 0x78($sp)
    ctx->pc = 0x2a6f18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2a6f1c: 0xc7a1008c  lwc1        $f1, 0x8C($sp)
    ctx->pc = 0x2a6f1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a6f20: 0xc7a0007c  lwc1        $f0, 0x7C($sp)
    ctx->pc = 0x2a6f20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a6f24: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2a6f24u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2a6f28: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2a6f28u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a6f2c: 0x0  nop
    ctx->pc = 0x2a6f2cu;
    // NOP
    // 0x2a6f30: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x2a6f30u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[1]));
    // 0x2a6f34: 0x4602185c  madd.s      $f1, $f3, $f2
    ctx->pc = 0x2a6f34u;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[2]));
    // 0x2a6f38: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2a6f38u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a6f3c: 0x0  nop
    ctx->pc = 0x2a6f3cu;
    // NOP
    // 0x2a6f40: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x2a6f40u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[1]));
    // 0x2a6f44: 0x4604281c  madd.s      $f0, $f5, $f4
    ctx->pc = 0x2a6f44u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[5], ctx->f[4]));
    // 0x2a6f48: 0xe7a000ac  swc1        $f0, 0xAC($sp)
    ctx->pc = 0x2a6f48u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 172), bits); }
    // 0x2a6f4c: 0x27a40068  addiu       $a0, $sp, 0x68
    ctx->pc = 0x2a6f4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 104));
    // 0x2a6f50: 0x27a50068  addiu       $a1, $sp, 0x68
    ctx->pc = 0x2a6f50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 104));
    // 0x2a6f54: 0xc104cf2  jal         func_4133C8
    ctx->pc = 0x2A6F54u;
    SET_GPR_U32(ctx, 31, 0x2A6F5Cu);
    ctx->pc = 0x4133C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4133C8u, 0x2A6F54u, 0x2A6F5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A6F5Cu;
label_2a6f5c:
    // 0x2a6f5c: 0xc7a50070  lwc1        $f5, 0x70($sp)
    ctx->pc = 0x2a6f5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x2a6f60: 0xc7a40090  lwc1        $f4, 0x90($sp)
    ctx->pc = 0x2a6f60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2a6f64: 0xc7a30068  lwc1        $f3, 0x68($sp)
    ctx->pc = 0x2a6f64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2a6f68: 0xc7a20088  lwc1        $f2, 0x88($sp)
    ctx->pc = 0x2a6f68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2a6f6c: 0xc7a1006c  lwc1        $f1, 0x6C($sp)
    ctx->pc = 0x2a6f6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a6f70: 0xc7a0008c  lwc1        $f0, 0x8C($sp)
    ctx->pc = 0x2a6f70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a6f74: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2a6f74u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2a6f78: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2a6f78u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a6f7c: 0x0  nop
    ctx->pc = 0x2a6f7cu;
    // NOP
    // 0x2a6f80: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x2a6f80u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[1]));
    // 0x2a6f84: 0x4602185c  madd.s      $f1, $f3, $f2
    ctx->pc = 0x2a6f84u;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[2]));
    // 0x2a6f88: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2a6f88u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a6f8c: 0x0  nop
    ctx->pc = 0x2a6f8cu;
    // NOP
    // 0x2a6f90: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x2a6f90u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[1]));
    // 0x2a6f94: 0x4604281c  madd.s      $f0, $f5, $f4
    ctx->pc = 0x2a6f94u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[5], ctx->f[4]));
    // 0x2a6f98: 0xe7a000ac  swc1        $f0, 0xAC($sp)
    ctx->pc = 0x2a6f98u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 172), bits); }
    // 0x2a6f9c: 0xc7a100ac  lwc1        $f1, 0xAC($sp)
    ctx->pc = 0x2a6f9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a6fa0: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2a6fa0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2a6fa4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2a6fa4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a6fa8: 0x0  nop
    ctx->pc = 0x2a6fa8u;
    // NOP
    // 0x2a6fac: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2a6facu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2a6fb0: 0x45010007  bc1t        . + 4 + (0x7 << 2)
    ctx->pc = 0x2A6FB0u;
    {
        const bool branch_taken_0x2a6fb0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2a6fb0) {
            ctx->pc = 0x2A6FD0u;
            goto label_2a6fd0;
        }
    }
    ctx->pc = 0x2A6FB8u;
    // 0x2a6fb8: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2a6fb8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2a6fbc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2a6fbcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a6fc0: 0x0  nop
    ctx->pc = 0x2a6fc0u;
    // NOP
    // 0x2a6fc4: 0xe7a000ac  swc1        $f0, 0xAC($sp)
    ctx->pc = 0x2a6fc4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 172), bits); }
    // 0x2a6fc8: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x2A6FC8u;
    {
        const bool branch_taken_0x2a6fc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a6fc8) {
            ctx->pc = 0x2A6FFCu;
            goto label_2a6ffc;
        }
    }
    ctx->pc = 0x2A6FD0u;
label_2a6fd0:
    // 0x2a6fd0: 0xc7a100ac  lwc1        $f1, 0xAC($sp)
    ctx->pc = 0x2a6fd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a6fd4: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x2a6fd4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
    // 0x2a6fd8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2a6fd8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a6fdc: 0x0  nop
    ctx->pc = 0x2a6fdcu;
    // NOP
    // 0x2a6fe0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2a6fe0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2a6fe4: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x2A6FE4u;
    {
        const bool branch_taken_0x2a6fe4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2a6fe4) {
            ctx->pc = 0x2A6FFCu;
            goto label_2a6ffc;
        }
    }
    ctx->pc = 0x2A6FECu;
    // 0x2a6fec: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x2a6fecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
    // 0x2a6ff0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2a6ff0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a6ff4: 0x0  nop
    ctx->pc = 0x2a6ff4u;
    // NOP
    // 0x2a6ff8: 0xe7a000ac  swc1        $f0, 0xAC($sp)
    ctx->pc = 0x2a6ff8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 172), bits); }
label_2a6ffc:
    // 0x2a6ffc: 0xc7ac00ac  lwc1        $f12, 0xAC($sp)
    ctx->pc = 0x2a6ffcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2a7000: 0xc0c39ca  jal         func_30E728
    ctx->pc = 0x2A7000u;
    SET_GPR_U32(ctx, 31, 0x2A7008u);
    ctx->pc = 0x30E728u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30E728u, 0x2A7000u, 0x2A7008u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A7008u;
label_2a7008:
    // 0x2a7008: 0xe7a000a8  swc1        $f0, 0xA8($sp)
    ctx->pc = 0x2a7008u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
    // 0x2a700c: 0xc7a300a0  lwc1        $f3, 0xA0($sp)
    ctx->pc = 0x2a700cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2a7010: 0xc7a2008c  lwc1        $f2, 0x8C($sp)
    ctx->pc = 0x2a7010u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2a7014: 0xc7a1009c  lwc1        $f1, 0x9C($sp)
    ctx->pc = 0x2a7014u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a7018: 0xc7a00090  lwc1        $f0, 0x90($sp)
    ctx->pc = 0x2a7018u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a701c: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2a701cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2a7020: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2a7020u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a7024: 0x0  nop
    ctx->pc = 0x2a7024u;
    // NOP
    // 0x2a7028: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x2a7028u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[1]));
    // 0x2a702c: 0x4602181d  msub.s      $f0, $f3, $f2
    ctx->pc = 0x2a702cu;
    ctx->f[0] = FPU_SUB_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[2]));
    // 0x2a7030: 0xe7a00058  swc1        $f0, 0x58($sp)
    ctx->pc = 0x2a7030u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x2a7034: 0xc7a30098  lwc1        $f3, 0x98($sp)
    ctx->pc = 0x2a7034u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2a7038: 0xc7a20090  lwc1        $f2, 0x90($sp)
    ctx->pc = 0x2a7038u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2a703c: 0xc7a100a0  lwc1        $f1, 0xA0($sp)
    ctx->pc = 0x2a703cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a7040: 0xc7a00088  lwc1        $f0, 0x88($sp)
    ctx->pc = 0x2a7040u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a7044: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2a7044u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2a7048: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2a7048u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a704c: 0x0  nop
    ctx->pc = 0x2a704cu;
    // NOP
    // 0x2a7050: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x2a7050u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[1]));
    // 0x2a7054: 0x4602181d  msub.s      $f0, $f3, $f2
    ctx->pc = 0x2a7054u;
    ctx->f[0] = FPU_SUB_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[2]));
    // 0x2a7058: 0xe7a0005c  swc1        $f0, 0x5C($sp)
    ctx->pc = 0x2a7058u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
    // 0x2a705c: 0xc7a3009c  lwc1        $f3, 0x9C($sp)
    ctx->pc = 0x2a705cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2a7060: 0xc7a20088  lwc1        $f2, 0x88($sp)
    ctx->pc = 0x2a7060u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2a7064: 0xc7a10098  lwc1        $f1, 0x98($sp)
    ctx->pc = 0x2a7064u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a7068: 0xc7a0008c  lwc1        $f0, 0x8C($sp)
    ctx->pc = 0x2a7068u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a706c: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2a706cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2a7070: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2a7070u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a7074: 0x0  nop
    ctx->pc = 0x2a7074u;
    // NOP
    // 0x2a7078: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x2a7078u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[1]));
    // 0x2a707c: 0x4602181d  msub.s      $f0, $f3, $f2
    ctx->pc = 0x2a707cu;
    ctx->f[0] = FPU_SUB_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[2]));
    // 0x2a7080: 0xe7a00060  swc1        $f0, 0x60($sp)
    ctx->pc = 0x2a7080u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x2a7084: 0xc7a50060  lwc1        $f5, 0x60($sp)
    ctx->pc = 0x2a7084u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x2a7088: 0xc7a40080  lwc1        $f4, 0x80($sp)
    ctx->pc = 0x2a7088u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2a708c: 0xc7a30058  lwc1        $f3, 0x58($sp)
    ctx->pc = 0x2a708cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2a7090: 0xc7a20078  lwc1        $f2, 0x78($sp)
    ctx->pc = 0x2a7090u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2a7094: 0xc7a1005c  lwc1        $f1, 0x5C($sp)
    ctx->pc = 0x2a7094u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a7098: 0xc7a0007c  lwc1        $f0, 0x7C($sp)
    ctx->pc = 0x2a7098u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a709c: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2a709cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2a70a0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2a70a0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a70a4: 0x0  nop
    ctx->pc = 0x2a70a4u;
    // NOP
    // 0x2a70a8: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x2a70a8u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[1]));
    // 0x2a70ac: 0x4602185c  madd.s      $f1, $f3, $f2
    ctx->pc = 0x2a70acu;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[2]));
    // 0x2a70b0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2a70b0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a70b4: 0x0  nop
    ctx->pc = 0x2a70b4u;
    // NOP
    // 0x2a70b8: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x2a70b8u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[1]));
    // 0x2a70bc: 0x4604285c  madd.s      $f1, $f5, $f4
    ctx->pc = 0x2a70bcu;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[5], ctx->f[4]));
    // 0x2a70c0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2a70c0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a70c4: 0x0  nop
    ctx->pc = 0x2a70c4u;
    // NOP
    // 0x2a70c8: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2a70c8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2a70cc: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x2A70CCu;
    {
        const bool branch_taken_0x2a70cc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2a70cc) {
            ctx->pc = 0x2A70E0u;
            goto label_2a70e0;
        }
    }
    ctx->pc = 0x2A70D4u;
    // 0x2a70d4: 0xc7a000a8  lwc1        $f0, 0xA8($sp)
    ctx->pc = 0x2a70d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a70d8: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x2a70d8u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x2a70dc: 0xe7a000a8  swc1        $f0, 0xA8($sp)
    ctx->pc = 0x2a70dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
label_2a70e0:
    // 0x2a70e0: 0x3c024334  lui         $v0, 0x4334
    ctx->pc = 0x2a70e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17204 << 16));
    // 0x2a70e4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2a70e4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2a70e8: 0xc7a000a8  lwc1        $f0, 0xA8($sp)
    ctx->pc = 0x2a70e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a70ec: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2a70ecu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2a70f0: 0xc78080b0  lwc1        $f0, -0x7F50($gp)
    ctx->pc = 0x2a70f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934704)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a70f4: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x2a70f4u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x2a70f8: 0xe7a000a8  swc1        $f0, 0xA8($sp)
    ctx->pc = 0x2a70f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
    // 0x2a70fc: 0x8fa300b0  lw          $v1, 0xB0($sp)
    ctx->pc = 0x2a70fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x2a7100: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x2a7100u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x2a7104: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x2a7104u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2a7108: 0x8c64012c  lw          $a0, 0x12C($v1)
    ctx->pc = 0x2a7108u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 300)));
    // 0x2a710c: 0xc7ac00a8  lwc1        $f12, 0xA8($sp)
    ctx->pc = 0x2a710cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2a7110: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2a7110u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a7114: 0xc090fe0  jal         func_243F80
    ctx->pc = 0x2A7114u;
    SET_GPR_U32(ctx, 31, 0x2A711Cu);
    ctx->pc = 0x243F80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x243F80u, 0x2A7114u, 0x2A711Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A711Cu;
label_2a711c:
    // 0x2a711c: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x2a711cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x2a7120: 0x8c4201b0  lw          $v0, 0x1B0($v0)
    ctx->pc = 0x2a7120u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 432)));
    // 0x2a7124: 0x1040001c  beqz        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x2A7124u;
    {
        const bool branch_taken_0x2a7124 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a7124) {
            ctx->pc = 0x2A7198u;
            goto label_2a7198;
        }
    }
    ctx->pc = 0x2A712Cu;
    // 0x2a712c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2a712cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a7130: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x2A7130u;
    {
        const bool branch_taken_0x2a7130 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a7130) {
            ctx->pc = 0x2A718Cu;
            goto label_2a718c;
        }
    }
    ctx->pc = 0x2A7138u;
label_2a7138:
    // 0x2a7138: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x2a7138u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x2a713c: 0x8c4201b0  lw          $v0, 0x1B0($v0)
    ctx->pc = 0x2a713cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 432)));
    // 0x2a7140: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x2a7140u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x2a7144: 0x9042007c  lbu         $v0, 0x7C($v0)
    ctx->pc = 0x2a7144u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 124)));
    // 0x2a7148: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x2A7148u;
    {
        const bool branch_taken_0x2a7148 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a7148) {
            ctx->pc = 0x2A7188u;
            goto label_2a7188;
        }
    }
    ctx->pc = 0x2A7150u;
    // 0x2a7150: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x2a7150u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x2a7154: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x2a7154u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x2a7158: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2a7158u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2a715c: 0x8c4201b8  lw          $v0, 0x1B8($v0)
    ctx->pc = 0x2a715cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 440)));
    // 0x2a7160: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2A7160u;
    {
        const bool branch_taken_0x2a7160 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a7160) {
            ctx->pc = 0x2A7188u;
            goto label_2a7188;
        }
    }
    ctx->pc = 0x2A7168u;
    // 0x2a7168: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x2a7168u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x2a716c: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x2a716cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x2a7170: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2a7170u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2a7174: 0x8f84bbec  lw          $a0, -0x4414($gp)
    ctx->pc = 0x2a7174u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949868)));
    // 0x2a7178: 0x8c4501b8  lw          $a1, 0x1B8($v0)
    ctx->pc = 0x2a7178u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 440)));
    // 0x2a717c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2a717cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a7180: 0xc08f71c  jal         func_23DC70
    ctx->pc = 0x2A7180u;
    SET_GPR_U32(ctx, 31, 0x2A7188u);
    ctx->pc = 0x23DC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23DC70u, 0x2A7180u, 0x2A7188u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A7188u;
label_2a7188:
    // 0x2a7188: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x2a7188u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_2a718c:
    // 0x2a718c: 0x2e020004  sltiu       $v0, $s0, 0x4
    ctx->pc = 0x2a718cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x2a7190: 0x1440ffe9  bnez        $v0, . + 4 + (-0x17 << 2)
    ctx->pc = 0x2A7190u;
    {
        const bool branch_taken_0x2a7190 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2a7190) {
            ctx->pc = 0x2A7138u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2a7138;
        }
    }
    ctx->pc = 0x2A7198u;
label_2a7198:
    // 0x2a7198: 0x8fa400b0  lw          $a0, 0xB0($sp)
    ctx->pc = 0x2a7198u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x2a719c: 0xc09d220  jal         func_274880
    ctx->pc = 0x2A719Cu;
    SET_GPR_U32(ctx, 31, 0x2A71A4u);
    ctx->pc = 0x274880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x274880u, 0x2A719Cu, 0x2A71A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A71A4u;
label_2a71a4:
    // 0x2a71a4: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x2a71a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2a71a8: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2a71a8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2a71ac: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2a71acu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2a71b0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2a71b0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2a71b4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2a71b4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2a71b8: 0x27bd00c0  addiu       $sp, $sp, 0xC0
    ctx->pc = 0x2a71b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x2a71bc: 0x3e00008  jr          $ra
    ctx->pc = 0x2A71BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A71BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A71C4u;
    // 0x2a71c4: 0x0  nop
    ctx->pc = 0x2a71c4u;
    // NOP
    // 0x2a71c8: 0x0  nop
    ctx->pc = 0x2a71c8u;
    // NOP
    // 0x2a71cc: 0x0  nop
    ctx->pc = 0x2a71ccu;
    // NOP
    ctx->pc = 0x2a71d0u;
}
