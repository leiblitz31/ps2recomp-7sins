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

// Function: sub_004A91F8
// Address: 0x4a91f8 - 0x4a9248
void sub_004A91F8_0x4a91f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004A91F8_0x4a91f8");
#endif

    switch (ctx->pc) {
        case 0x4a9214u: goto label_4a9214;
        default: break;
    }

    ctx->pc = 0x4a91f8u;

    // 0x4a91f8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4a91f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x4a91fc: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x4a91fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x4a9200: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4a9200u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a9204: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4a9204u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x4a9208: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4a9208u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4a920c: 0xc12a4b6  jal         func_4A92D8
    ctx->pc = 0x4A920Cu;
    SET_GPR_U32(ctx, 31, 0x4A9214u);
    ctx->pc = 0x4A9210u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A920Cu;
    // 0x4a9210: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A92D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A92D8u, 0x4A920Cu, 0x4A9214u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A9214u;
label_4a9214:
    // 0x4a9214: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x4a9214u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x4a9218: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x4a9218u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x4a921c: 0x3442fffe  ori         $v0, $v0, 0xFFFE
    ctx->pc = 0x4a921cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65534);
    // 0x4a9220: 0xae110000  sw          $s1, 0x0($s0)
    ctx->pc = 0x4a9220u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 17));
    // 0x4a9224: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4a9224u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4a9228: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4a9228u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4a922c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x4a922cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a9230: 0xae030008  sw          $v1, 0x8($s0)
    ctx->pc = 0x4a9230u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
    // 0x4a9234: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x4a9234u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4a9238: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4a9238u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4a923c: 0x3e00008  jr          $ra
    ctx->pc = 0x4A923Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4A9240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A923Cu;
        // 0x4a9240: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4A923Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4A9244u;
    // 0x4a9244: 0x0  nop
    ctx->pc = 0x4a9244u;
    // NOP
    ctx->pc = 0x4a9248u;
}
