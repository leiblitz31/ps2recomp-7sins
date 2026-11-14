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

// Function: sub_0022F9A0
// Address: 0x22f9a0 - 0x22fa50
void sub_0022F9A0_0x22f9a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0022F9A0_0x22f9a0");
#endif

    switch (ctx->pc) {
        case 0x22f9d8u: goto label_22f9d8;
        case 0x22f9e8u: goto label_22f9e8;
        case 0x22f9f8u: goto label_22f9f8;
        case 0x22fa1cu: goto label_22fa1c;
        case 0x22fa30u: goto label_22fa30;
        default: break;
    }

    ctx->pc = 0x22f9a0u;

    // 0x22f9a0: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x22f9a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x22f9a4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x22f9a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x22f9a8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x22f9a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x22f9ac: 0xafa40040  sw          $a0, 0x40($sp)
    ctx->pc = 0x22f9acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 4));
    // 0x22f9b0: 0xafa50050  sw          $a1, 0x50($sp)
    ctx->pc = 0x22f9b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 5));
    // 0x22f9b4: 0xafa60060  sw          $a2, 0x60($sp)
    ctx->pc = 0x22f9b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 6));
    // 0x22f9b8: 0xe7ac0070  swc1        $f12, 0x70($sp)
    ctx->pc = 0x22f9b8u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x22f9bc: 0xafa70080  sw          $a3, 0x80($sp)
    ctx->pc = 0x22f9bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 7));
    // 0x22f9c0: 0xafa80090  sw          $t0, 0x90($sp)
    ctx->pc = 0x22f9c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 8));
    // 0x22f9c4: 0xafa900a0  sw          $t1, 0xA0($sp)
    ctx->pc = 0x22f9c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 9));
    // 0x22f9c8: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x22f9c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x22f9cc: 0x8fa50060  lw          $a1, 0x60($sp)
    ctx->pc = 0x22f9ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x22f9d0: 0xc040304  jal         func_100C10
    ctx->pc = 0x22F9D0u;
    SET_GPR_U32(ctx, 31, 0x22F9D8u);
    ctx->pc = 0x100C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100C10u, 0x22F9D0u, 0x22F9D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22F9D8u;
label_22f9d8:
    // 0x22f9d8: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x22f9d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x22f9dc: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x22f9dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x22f9e0: 0xc119568  jal         func_4655A0
    ctx->pc = 0x22F9E0u;
    SET_GPR_U32(ctx, 31, 0x22F9E8u);
    ctx->pc = 0x4655A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4655A0u, 0x22F9E0u, 0x22F9E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22F9E8u;
label_22f9e8:
    // 0x22f9e8: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x22f9e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x22f9ec: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x22f9ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x22f9f0: 0xc0402d4  jal         func_100B50
    ctx->pc = 0x22F9F0u;
    SET_GPR_U32(ctx, 31, 0x22F9F8u);
    ctx->pc = 0x100B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100B50u, 0x22F9F0u, 0x22F9F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22F9F8u;
label_22f9f8:
    // 0x22f9f8: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x22f9f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x22f9fc: 0x8fa50050  lw          $a1, 0x50($sp)
    ctx->pc = 0x22f9fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x22fa00: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x22fa00u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x22fa04: 0xc7ac0070  lwc1        $f12, 0x70($sp)
    ctx->pc = 0x22fa04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x22fa08: 0x8fa70080  lw          $a3, 0x80($sp)
    ctx->pc = 0x22fa08u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x22fa0c: 0x8fa80090  lw          $t0, 0x90($sp)
    ctx->pc = 0x22fa0cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x22fa10: 0x8fa900a0  lw          $t1, 0xA0($sp)
    ctx->pc = 0x22fa10u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x22fa14: 0xc08be94  jal         func_22FA50
    ctx->pc = 0x22FA14u;
    SET_GPR_U32(ctx, 31, 0x22FA1Cu);
    ctx->pc = 0x22FA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22FA50u, 0x22FA14u, 0x22FA1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22FA1Cu;
label_22fa1c:
    // 0x22fa1c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x22fa1cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22fa20: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x22fa20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x22fa24: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x22fa24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x22fa28: 0xc0406a0  jal         func_101A80
    ctx->pc = 0x22FA28u;
    SET_GPR_U32(ctx, 31, 0x22FA30u);
    ctx->pc = 0x101A80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101A80u, 0x22FA28u, 0x22FA30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22FA30u;
label_22fa30:
    // 0x22fa30: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x22fa30u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22fa34: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x22fa34u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22fa38: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x22fa38u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22fa3c: 0x27bd00b0  addiu       $sp, $sp, 0xB0
    ctx->pc = 0x22fa3cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x22fa40: 0x3e00008  jr          $ra
    ctx->pc = 0x22FA40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22FA40u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22FA48u;
    // 0x22fa48: 0x0  nop
    ctx->pc = 0x22fa48u;
    // NOP
    // 0x22fa4c: 0x0  nop
    ctx->pc = 0x22fa4cu;
    // NOP
    ctx->pc = 0x22fa50u;
}
