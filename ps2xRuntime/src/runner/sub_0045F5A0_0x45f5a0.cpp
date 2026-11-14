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

// Function: sub_0045F5A0
// Address: 0x45f5a0 - 0x45f620
void sub_0045F5A0_0x45f5a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0045F5A0_0x45f5a0");
#endif

    switch (ctx->pc) {
        case 0x45f5e0u: goto label_45f5e0;
        case 0x45f5f8u: goto label_45f5f8;
        default: break;
    }

    ctx->pc = 0x45f5a0u;

    // 0x45f5a0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x45f5a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x45f5a4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x45f5a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x45f5a8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x45f5a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x45f5ac: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x45f5acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x45f5b0: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x45f5b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
    // 0x45f5b4: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x45f5b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
    // 0x45f5b8: 0xafa60050  sw          $a2, 0x50($sp)
    ctx->pc = 0x45f5b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 6));
    // 0x45f5bc: 0x8fb10030  lw          $s1, 0x30($sp)
    ctx->pc = 0x45f5bcu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x45f5c0: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x45f5c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x45f5c4: 0xafa20030  sw          $v0, 0x30($sp)
    ctx->pc = 0x45f5c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 2));
    // 0x45f5c8: 0xafb10040  sw          $s1, 0x40($sp)
    ctx->pc = 0x45f5c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 17));
    // 0x45f5cc: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x45f5ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x45f5d0: 0x8fa50040  lw          $a1, 0x40($sp)
    ctx->pc = 0x45f5d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x45f5d4: 0x24060006  addiu       $a2, $zero, 0x6
    ctx->pc = 0x45f5d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x45f5d8: 0xc11818c  jal         func_460630
    ctx->pc = 0x45F5D8u;
    SET_GPR_U32(ctx, 31, 0x45F5E0u);
    ctx->pc = 0x460630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x460630u, 0x45F5D8u, 0x45F5E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x45F5E0u;
label_45f5e0:
    // 0x45f5e0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x45f5e0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x45f5e4: 0x3c040062  lui         $a0, 0x62
    ctx->pc = 0x45f5e4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)98 << 16));
    // 0x45f5e8: 0x24844e3c  addiu       $a0, $a0, 0x4E3C
    ctx->pc = 0x45f5e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20028));
    // 0x45f5ec: 0x8fa50050  lw          $a1, 0x50($sp)
    ctx->pc = 0x45f5ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x45f5f0: 0xc0bc5c6  jal         func_2F1718
    ctx->pc = 0x45F5F0u;
    SET_GPR_U32(ctx, 31, 0x45F5F8u);
    ctx->pc = 0x2F1718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1718u, 0x45F5F0u, 0x45F5F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x45F5F8u;
label_45f5f8:
    // 0x45f5f8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x45f5f8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x45f5fc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x45f5fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x45f600: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x45f600u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x45f604: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x45f604u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x45f608: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x45f608u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x45f60c: 0x3e00008  jr          $ra
    ctx->pc = 0x45F60Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x45F60Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x45F614u;
    // 0x45f614: 0x0  nop
    ctx->pc = 0x45f614u;
    // NOP
    // 0x45f618: 0x0  nop
    ctx->pc = 0x45f618u;
    // NOP
    // 0x45f61c: 0x0  nop
    ctx->pc = 0x45f61cu;
    // NOP
    ctx->pc = 0x45f620u;
}
