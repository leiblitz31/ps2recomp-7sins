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

// Function: sub_00180160
// Address: 0x180160 - 0x1801d0
void sub_00180160_0x180160(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00180160_0x180160");
#endif

    switch (ctx->pc) {
        case 0x180194u: goto label_180194;
        case 0x1801b4u: goto label_1801b4;
        default: break;
    }

    ctx->pc = 0x180160u;

    // 0x180160: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x180160u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x180164: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x180164u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x180168: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x180168u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x18016c: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x18016cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
    // 0x180170: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x180170u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
    // 0x180174: 0xafa60050  sw          $a2, 0x50($sp)
    ctx->pc = 0x180174u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 6));
    // 0x180178: 0xafa70060  sw          $a3, 0x60($sp)
    ctx->pc = 0x180178u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 7));
    // 0x18017c: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x18017cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x180180: 0x24440008  addiu       $a0, $v0, 0x8
    ctx->pc = 0x180180u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x180184: 0x8fa50040  lw          $a1, 0x40($sp)
    ctx->pc = 0x180184u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x180188: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x180188u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18018c: 0xc0562b8  jal         func_158AE0
    ctx->pc = 0x18018Cu;
    SET_GPR_U32(ctx, 31, 0x180194u);
    ctx->pc = 0x158AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158AE0u, 0x18018Cu, 0x180194u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x180194u;
label_180194:
    // 0x180194: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x180194u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x180198: 0xa3a0002c  sb          $zero, 0x2C($sp)
    ctx->pc = 0x180198u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 44), (uint8_t)GPR_U32(ctx, 0));
    // 0x18019c: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x18019cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1801a0: 0x8fa50060  lw          $a1, 0x60($sp)
    ctx->pc = 0x1801a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1801a4: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1801a4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1801a8: 0x27a7002c  addiu       $a3, $sp, 0x2C
    ctx->pc = 0x1801a8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
    // 0x1801ac: 0xc06000c  jal         func_180030
    ctx->pc = 0x1801ACu;
    SET_GPR_U32(ctx, 31, 0x1801B4u);
    ctx->pc = 0x180030u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x180030u, 0x1801ACu, 0x1801B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1801B4u;
label_1801b4:
    // 0x1801b4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1801b4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1801b8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1801b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1801bc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1801bcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1801c0: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x1801c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x1801c4: 0x3e00008  jr          $ra
    ctx->pc = 0x1801C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1801C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1801CCu;
    // 0x1801cc: 0x0  nop
    ctx->pc = 0x1801ccu;
    // NOP
    ctx->pc = 0x1801d0u;
}
