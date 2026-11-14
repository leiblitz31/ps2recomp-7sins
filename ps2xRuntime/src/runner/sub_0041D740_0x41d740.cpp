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

// Function: sub_0041D740
// Address: 0x41d740 - 0x41d780
void sub_0041D740_0x41d740(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0041D740_0x41d740");
#endif

    switch (ctx->pc) {
        case 0x41d740u: goto label_41d740;
        case 0x41d744u: goto label_41d744;
        case 0x41d748u: goto label_41d748;
        case 0x41d74cu: goto label_41d74c;
        case 0x41d750u: goto label_41d750;
        case 0x41d754u: goto label_41d754;
        case 0x41d758u: goto label_41d758;
        case 0x41d75cu: goto label_41d75c;
        case 0x41d760u: goto label_41d760;
        case 0x41d764u: goto label_41d764;
        case 0x41d768u: goto label_41d768;
        case 0x41d76cu: goto label_41d76c;
        case 0x41d770u: goto label_41d770;
        case 0x41d774u: goto label_41d774;
        case 0x41d778u: goto label_41d778;
        case 0x41d77cu: goto label_41d77c;
        default: break;
    }

    ctx->pc = 0x41d740u;

label_41d740:
    // 0x41d740: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x41d740u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_41d744:
    // 0x41d744: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x41d744u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
label_41d748:
    // 0x41d748: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x41d748u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_41d74c:
    // 0x41d74c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x41d74cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_41d750:
    // 0x41d750: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x41d750u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_41d754:
    // 0x41d754: 0x8c62e908  lw          $v0, -0x16F8($v1)
    ctx->pc = 0x41d754u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961416)));
label_41d758:
    // 0x41d758: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x41d758u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_41d75c:
    // 0x41d75c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x41d75cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_41d760:
    // 0x41d760: 0x40f809  jalr        $v0
label_41d764:
    if (ctx->pc == 0x41D764u) {
        ctx->pc = 0x41D764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41D760u;
        // 0x41d764: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41D768u;
        goto label_41d768;
    }
    ctx->pc = 0x41D760u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x41D768u);
        ctx->pc = 0x41D764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41D760u;
        // 0x41d764: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x41D760u, 0x41D768u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x41D768u;
label_41d768:
    // 0x41d768: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x41d768u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_41d76c:
    // 0x41d76c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x41d76cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_41d770:
    // 0x41d770: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x41d770u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_41d774:
    // 0x41d774: 0x3e00008  jr          $ra
label_41d778:
    if (ctx->pc == 0x41D778u) {
        ctx->pc = 0x41D778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41D774u;
        // 0x41d778: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41D77Cu;
        goto label_41d77c;
    }
    ctx->pc = 0x41D774u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x41D778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41D774u;
        // 0x41d778: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x41D774u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x41D77Cu;
label_41d77c:
    // 0x41d77c: 0x0  nop
    ctx->pc = 0x41d77cu;
    // NOP
    ctx->pc = 0x41d780u;
}
