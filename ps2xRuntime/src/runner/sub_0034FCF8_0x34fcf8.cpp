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

// Function: sub_0034FCF8
// Address: 0x34fcf8 - 0x34fd58
void sub_0034FCF8_0x34fcf8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0034FCF8_0x34fcf8");
#endif

    switch (ctx->pc) {
        case 0x34fd40u: goto label_34fd40;
        default: break;
    }

    ctx->pc = 0x34fcf8u;

    // 0x34fcf8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x34fcf8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x34fcfc: 0x3c030035  lui         $v1, 0x35
    ctx->pc = 0x34fcfcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)53 << 16));
    // 0x34fd00: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x34fd00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x34fd04: 0x27a20018  addiu       $v0, $sp, 0x18
    ctx->pc = 0x34fd04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 24));
    // 0x34fd08: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x34fd08u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34fd0c: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x34fd0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x34fd10: 0xafa00018  sw          $zero, 0x18($sp)
    ctx->pc = 0x34fd10u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
    // 0x34fd14: 0xac40ffe8  sw          $zero, -0x18($v0)
    ctx->pc = 0x34fd14u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294967272), GPR_U32(ctx, 0));
    // 0x34fd18: 0xac40fffc  sw          $zero, -0x4($v0)
    ctx->pc = 0x34fd18u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294967292), GPR_U32(ctx, 0));
    // 0x34fd1c: 0xac40fff8  sw          $zero, -0x8($v0)
    ctx->pc = 0x34fd1cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294967288), GPR_U32(ctx, 0));
    // 0x34fd20: 0xac40fff4  sw          $zero, -0xC($v0)
    ctx->pc = 0x34fd20u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294967284), GPR_U32(ctx, 0));
    // 0x34fd24: 0xac40fff0  sw          $zero, -0x10($v0)
    ctx->pc = 0x34fd24u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294967280), GPR_U32(ctx, 0));
    // 0x34fd28: 0xac40ffec  sw          $zero, -0x14($v0)
    ctx->pc = 0x34fd28u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294967276), GPR_U32(ctx, 0));
    // 0x34fd2c: 0x2463fc00  addiu       $v1, $v1, -0x400
    ctx->pc = 0x34fd2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294966272));
    // 0x34fd30: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x34fd30u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x34fd34: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x34fd34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x34fd38: 0xc0d0dd0  jal         func_343740
    ctx->pc = 0x34FD38u;
    SET_GPR_U32(ctx, 31, 0x34FD40u);
    ctx->pc = 0x34FD3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34FD38u;
    // 0x34fd3c: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x343740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x343740u, 0x34FD38u, 0x34FD40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34FD40u;
label_34fd40:
    // 0x34fd40: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x34fd40u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34fd44: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x34fd44u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x34fd48: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x34fd48u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x34fd4c: 0x3e00008  jr          $ra
    ctx->pc = 0x34FD4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x34FD50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34FD4Cu;
        // 0x34fd50: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34FD4Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x34FD54u;
    // 0x34fd54: 0x0  nop
    ctx->pc = 0x34fd54u;
    // NOP
    ctx->pc = 0x34fd58u;
}
