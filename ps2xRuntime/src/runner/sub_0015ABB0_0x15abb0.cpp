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

// Function: sub_0015ABB0
// Address: 0x15abb0 - 0x15acd0
void sub_0015ABB0_0x15abb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0015ABB0_0x15abb0");
#endif

    switch (ctx->pc) {
        case 0x15abd8u: goto label_15abd8;
        case 0x15abecu: goto label_15abec;
        case 0x15ac1cu: goto label_15ac1c;
        case 0x15ac74u: goto label_15ac74;
        case 0x15aca4u: goto label_15aca4;
        default: break;
    }

    ctx->pc = 0x15abb0u;

    // 0x15abb0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x15abb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x15abb4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x15abb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x15abb8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x15abb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x15abbc: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x15abbcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
    // 0x15abc0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x15abc0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15abc4: 0x0  nop
    ctx->pc = 0x15abc4u;
    // NOP
    // 0x15abc8: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x15abc8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x15abcc: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x15abccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15abd0: 0x10000035  b           . + 4 + (0x35 << 2)
    ctx->pc = 0x15ABD0u;
    {
        const bool branch_taken_0x15abd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15abd0) {
            ctx->pc = 0x15ACA8u;
            goto label_15aca8;
        }
    }
    ctx->pc = 0x15ABD8u;
label_15abd8:
    // 0x15abd8: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x15abd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x15abdc: 0x24440098  addiu       $a0, $v0, 0x98
    ctx->pc = 0x15abdcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 152));
    // 0x15abe0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x15abe0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15abe4: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x15ABE4u;
    SET_GPR_U32(ctx, 31, 0x15ABECu);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x15ABE4u, 0x15ABECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15ABECu;
label_15abec:
    // 0x15abec: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x15abecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x15abf0: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x15abf0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x15abf4: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x15abf4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x15abf8: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x15abf8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x15abfc: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x15abfcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x15ac00: 0x8c640034  lw          $a0, 0x34($v1)
    ctx->pc = 0x15ac00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
    // 0x15ac04: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x15ac04u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x15ac08: 0x27a7002c  addiu       $a3, $sp, 0x2C
    ctx->pc = 0x15ac08u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
    // 0x15ac0c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x15ac0cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15ac10: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x15ac10u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15ac14: 0xc08b9fc  jal         func_22E7F0
    ctx->pc = 0x15AC14u;
    SET_GPR_U32(ctx, 31, 0x15AC1Cu);
    ctx->pc = 0x22E7F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22E7F0u, 0x15AC14u, 0x15AC1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15AC1Cu;
label_15ac1c:
    // 0x15ac1c: 0x1018c0  sll         $v1, $s0, 3
    ctx->pc = 0x15ac1cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x15ac20: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x15ac20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
    // 0x15ac24: 0x2442be00  addiu       $v0, $v0, -0x4200
    ctx->pc = 0x15ac24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950400));
    // 0x15ac28: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x15ac28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x15ac2c: 0x27a20020  addiu       $v0, $sp, 0x20
    ctx->pc = 0x15ac2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x15ac30: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x15ac30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x15ac34: 0xc4600004  lwc1        $f0, 0x4($v1)
    ctx->pc = 0x15ac34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15ac38: 0xe4410000  swc1        $f1, 0x0($v0)
    ctx->pc = 0x15ac38u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x15ac3c: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x15ac3cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x15ac40: 0x1018c0  sll         $v1, $s0, 3
    ctx->pc = 0x15ac40u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x15ac44: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x15ac44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
    // 0x15ac48: 0x2442be10  addiu       $v0, $v0, -0x41F0
    ctx->pc = 0x15ac48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950416));
    // 0x15ac4c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x15ac4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x15ac50: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x15ac50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x15ac54: 0xc7a00020  lwc1        $f0, 0x20($sp)
    ctx->pc = 0x15ac54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15ac58: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x15ac58u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x15ac5c: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x15ac5cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x15ac60: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x15ac60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x15ac64: 0x24440098  addiu       $a0, $v0, 0x98
    ctx->pc = 0x15ac64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 152));
    // 0x15ac68: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x15ac68u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15ac6c: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x15AC6Cu;
    SET_GPR_U32(ctx, 31, 0x15AC74u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x15AC6Cu, 0x15AC74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15AC74u;
label_15ac74:
    // 0x15ac74: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x15ac74u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x15ac78: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x15ac78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x15ac7c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x15ac7cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x15ac80: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x15ac80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x15ac84: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x15ac84u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x15ac88: 0x8c640034  lw          $a0, 0x34($v1)
    ctx->pc = 0x15ac88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
    // 0x15ac8c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x15ac8cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15ac90: 0x27a70020  addiu       $a3, $sp, 0x20
    ctx->pc = 0x15ac90u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x15ac94: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x15ac94u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15ac98: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x15ac98u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15ac9c: 0xc08b9fc  jal         func_22E7F0
    ctx->pc = 0x15AC9Cu;
    SET_GPR_U32(ctx, 31, 0x15ACA4u);
    ctx->pc = 0x22E7F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22E7F0u, 0x15AC9Cu, 0x15ACA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15ACA4u;
label_15aca4:
    // 0x15aca4: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x15aca4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_15aca8:
    // 0x15aca8: 0x2a030002  slti        $v1, $s0, 0x2
    ctx->pc = 0x15aca8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x15acac: 0x1460ffca  bnez        $v1, . + 4 + (-0x36 << 2)
    ctx->pc = 0x15ACACu;
    {
        const bool branch_taken_0x15acac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x15acac) {
            ctx->pc = 0x15ABD8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_15abd8;
        }
    }
    ctx->pc = 0x15ACB4u;
    // 0x15acb4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x15acb4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x15acb8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x15acb8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15acbc: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x15acbcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x15acc0: 0x3e00008  jr          $ra
    ctx->pc = 0x15ACC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15ACC0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15ACC8u;
    // 0x15acc8: 0x0  nop
    ctx->pc = 0x15acc8u;
    // NOP
    // 0x15accc: 0x0  nop
    ctx->pc = 0x15acccu;
    // NOP
    ctx->pc = 0x15acd0u;
}
