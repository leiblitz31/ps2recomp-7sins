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

// Function: sub_002C98E0
// Address: 0x2c98e0 - 0x2c99a0
void sub_002C98E0_0x2c98e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C98E0_0x2c98e0");
#endif

    switch (ctx->pc) {
        case 0x2c9914u: goto label_2c9914;
        case 0x2c9930u: goto label_2c9930;
        case 0x2c9944u: goto label_2c9944;
        case 0x2c9954u: goto label_2c9954;
        case 0x2c9964u: goto label_2c9964;
        default: break;
    }

    ctx->pc = 0x2c98e0u;

    // 0x2c98e0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2c98e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x2c98e4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x2c98e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x2c98e8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2c98e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2c98ec: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2c98ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2c98f0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2c98f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2c98f4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2c98f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2c98f8: 0xafa40050  sw          $a0, 0x50($sp)
    ctx->pc = 0x2c98f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 4));
    // 0x2c98fc: 0x8fa30050  lw          $v1, 0x50($sp)
    ctx->pc = 0x2c98fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2c9900: 0x8f82bcc4  lw          $v0, -0x433C($gp)
    ctx->pc = 0x2c9900u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950084)));
    // 0x2c9904: 0x8c640094  lw          $a0, 0x94($v1)
    ctx->pc = 0x2c9904u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 148)));
    // 0x2c9908: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x2c9908u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2c990c: 0xc0b4d8c  jal         func_2D3630
    ctx->pc = 0x2C990Cu;
    SET_GPR_U32(ctx, 31, 0x2C9914u);
    ctx->pc = 0x2D3630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D3630u, 0x2C990Cu, 0x2C9914u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C9914u;
label_2c9914:
    // 0x2c9914: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2c9914u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c9918: 0x12000015  beqz        $s0, . + 4 + (0x15 << 2)
    ctx->pc = 0x2C9918u;
    {
        const bool branch_taken_0x2c9918 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c9918) {
            ctx->pc = 0x2C9970u;
            goto label_2c9970;
        }
    }
    ctx->pc = 0x2C9920u;
    // 0x2c9920: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2c9920u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c9924: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x2c9924u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x2c9928: 0xc085538  jal         func_2154E0
    ctx->pc = 0x2C9928u;
    SET_GPR_U32(ctx, 31, 0x2C9930u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x2C9928u, 0x2C9930u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C9930u;
label_2c9930:
    // 0x2c9930: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2c9930u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c9934: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2c9934u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c9938: 0x24050013  addiu       $a1, $zero, 0x13
    ctx->pc = 0x2c9938u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x2c993c: 0xc085538  jal         func_2154E0
    ctx->pc = 0x2C993Cu;
    SET_GPR_U32(ctx, 31, 0x2C9944u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x2C993Cu, 0x2C9944u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C9944u;
label_2c9944:
    // 0x2c9944: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2c9944u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c9948: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2c9948u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c994c: 0xc096ff4  jal         func_25BFD0
    ctx->pc = 0x2C994Cu;
    SET_GPR_U32(ctx, 31, 0x2C9954u);
    ctx->pc = 0x25BFD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25BFD0u, 0x2C994Cu, 0x2C9954u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C9954u;
label_2c9954:
    // 0x2c9954: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x2c9954u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c9958: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2c9958u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c995c: 0xc0984a4  jal         func_261290
    ctx->pc = 0x2C995Cu;
    SET_GPR_U32(ctx, 31, 0x2C9964u);
    ctx->pc = 0x261290u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x261290u, 0x2C995Cu, 0x2C9964u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C9964u;
label_2c9964:
    // 0x2c9964: 0x53102b  sltu        $v0, $v0, $s3
    ctx->pc = 0x2c9964u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
    // 0x2c9968: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2C9968u;
    {
        const bool branch_taken_0x2c9968 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c9968) {
            ctx->pc = 0x2C9974u;
            goto label_2c9974;
        }
    }
    ctx->pc = 0x2C9970u;
label_2c9970:
    // 0x2c9970: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2c9970u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2c9974:
    // 0x2c9974: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x2c9974u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2c9978: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2c9978u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2c997c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2c997cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2c9980: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2c9980u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2c9984: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2c9984u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c9988: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x2c9988u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2c998c: 0x3e00008  jr          $ra
    ctx->pc = 0x2C998Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C998Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C9994u;
    // 0x2c9994: 0x0  nop
    ctx->pc = 0x2c9994u;
    // NOP
    // 0x2c9998: 0x0  nop
    ctx->pc = 0x2c9998u;
    // NOP
    // 0x2c999c: 0x0  nop
    ctx->pc = 0x2c999cu;
    // NOP
    ctx->pc = 0x2c99a0u;
}
