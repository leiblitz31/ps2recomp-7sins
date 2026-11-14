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

// Function: sub_0015B370
// Address: 0x15b370 - 0x15b400
void sub_0015B370_0x15b370(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0015B370_0x15b370");
#endif

    switch (ctx->pc) {
        case 0x15b390u: goto label_15b390;
        case 0x15b3a4u: goto label_15b3a4;
        default: break;
    }

    ctx->pc = 0x15b370u;

    // 0x15b370: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x15b370u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x15b374: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x15b374u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x15b378: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x15b378u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x15b37c: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x15b37cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x15b380: 0xa7a50030  sh          $a1, 0x30($sp)
    ctx->pc = 0x15b380u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 48), (uint16_t)GPR_U32(ctx, 5));
    // 0x15b384: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x15b384u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x15b388: 0xc04ddfc  jal         func_1377F0
    ctx->pc = 0x15B388u;
    SET_GPR_U32(ctx, 31, 0x15B390u);
    ctx->pc = 0x1377F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1377F0u, 0x15B388u, 0x15B390u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15B390u;
label_15b390:
    // 0x15b390: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x15b390u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15b394: 0x26050002  addiu       $a1, $s0, 0x2
    ctx->pc = 0x15b394u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
    // 0x15b398: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x15b398u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x15b39c: 0xc11939c  jal         func_464E70
    ctx->pc = 0x15B39Cu;
    SET_GPR_U32(ctx, 31, 0x15B3A4u);
    ctx->pc = 0x464E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x464E70u, 0x15B39Cu, 0x15B3A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15B3A4u;
label_15b3a4:
    // 0x15b3a4: 0x97a50030  lhu         $a1, 0x30($sp)
    ctx->pc = 0x15b3a4u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x15b3a8: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x15b3a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x15b3ac: 0x102040  sll         $a0, $s0, 1
    ctx->pc = 0x15b3acu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x15b3b0: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x15b3b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x15b3b4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x15b3b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x15b3b8: 0xa4650000  sh          $a1, 0x0($v1)
    ctx->pc = 0x15b3b8u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 5));
    // 0x15b3bc: 0x26030001  addiu       $v1, $s0, 0x1
    ctx->pc = 0x15b3bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x15b3c0: 0x32040  sll         $a0, $v1, 1
    ctx->pc = 0x15b3c0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x15b3c4: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x15b3c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x15b3c8: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x15b3c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x15b3cc: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x15b3ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x15b3d0: 0xa4600000  sh          $zero, 0x0($v1)
    ctx->pc = 0x15b3d0u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 0));
    // 0x15b3d4: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x15b3d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x15b3d8: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x15b3d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x15b3dc: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x15b3dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x15b3e0: 0xac830008  sw          $v1, 0x8($a0)
    ctx->pc = 0x15b3e0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 3));
    // 0x15b3e4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x15b3e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x15b3e8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x15b3e8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15b3ec: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x15b3ecu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x15b3f0: 0x3e00008  jr          $ra
    ctx->pc = 0x15B3F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15B3F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15B3F8u;
    // 0x15b3f8: 0x0  nop
    ctx->pc = 0x15b3f8u;
    // NOP
    // 0x15b3fc: 0x0  nop
    ctx->pc = 0x15b3fcu;
    // NOP
    ctx->pc = 0x15b400u;
}
