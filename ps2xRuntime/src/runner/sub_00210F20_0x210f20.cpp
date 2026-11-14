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

// Function: sub_00210F20
// Address: 0x210f20 - 0x210fc0
void sub_00210F20_0x210f20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00210F20_0x210f20");
#endif

    switch (ctx->pc) {
        case 0x210f68u: goto label_210f68;
        case 0x210f78u: goto label_210f78;
        case 0x210f8cu: goto label_210f8c;
        case 0x210f98u: goto label_210f98;
        default: break;
    }

    ctx->pc = 0x210f20u;

    // 0x210f20: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x210f20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x210f24: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x210f24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x210f28: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x210f28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x210f2c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x210f2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x210f30: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x210f30u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
    // 0x210f34: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x210f34u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x210f38: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x210f38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x210f3c: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x210f3cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x210f40: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x210f40u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x210f44: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x210f44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x210f48: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x210f48u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x210f4c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x210f4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x210f50: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x210f50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x210f54: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x210f54u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x210f58: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x210f58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x210f5c: 0x24440084  addiu       $a0, $v0, 0x84
    ctx->pc = 0x210f5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 132));
    // 0x210f60: 0xc060260  jal         func_180980
    ctx->pc = 0x210F60u;
    SET_GPR_U32(ctx, 31, 0x210F68u);
    ctx->pc = 0x180980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x180980u, 0x210F60u, 0x210F68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x210F68u;
label_210f68:
    // 0x210f68: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x210f68u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x210f6c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x210f6cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x210f70: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x210F70u;
    {
        const bool branch_taken_0x210f70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x210f70) {
            ctx->pc = 0x210F9Cu;
            goto label_210f9c;
        }
    }
    ctx->pc = 0x210F78u;
label_210f78:
    // 0x210f78: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x210f78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x210f7c: 0x24440084  addiu       $a0, $v0, 0x84
    ctx->pc = 0x210f7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 132));
    // 0x210f80: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x210f80u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x210f84: 0xc084300  jal         func_210C00
    ctx->pc = 0x210F84u;
    SET_GPR_U32(ctx, 31, 0x210F8Cu);
    ctx->pc = 0x210C00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x210C00u, 0x210F84u, 0x210F8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x210F8Cu;
label_210f8c:
    // 0x210f8c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x210f8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x210f90: 0xc08472c  jal         func_211CB0
    ctx->pc = 0x210F90u;
    SET_GPR_U32(ctx, 31, 0x210F98u);
    ctx->pc = 0x211CB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211CB0u, 0x210F90u, 0x210F98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x210F98u;
label_210f98:
    // 0x210f98: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x210f98u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_210f9c:
    // 0x210f9c: 0x211182b  sltu        $v1, $s0, $s1
    ctx->pc = 0x210f9cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x210fa0: 0x1460fff5  bnez        $v1, . + 4 + (-0xB << 2)
    ctx->pc = 0x210FA0u;
    {
        const bool branch_taken_0x210fa0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x210fa0) {
            ctx->pc = 0x210F78u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_210f78;
        }
    }
    ctx->pc = 0x210FA8u;
    // 0x210fa8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x210fa8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x210fac: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x210facu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x210fb0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x210fb0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x210fb4: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x210fb4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x210fb8: 0x3e00008  jr          $ra
    ctx->pc = 0x210FB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x210FB8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x210FC0u;
}
