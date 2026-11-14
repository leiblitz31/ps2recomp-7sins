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

// Function: sub_00309150
// Address: 0x309150 - 0x3091a0
void sub_00309150_0x309150(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00309150_0x309150");
#endif

    switch (ctx->pc) {
        case 0x309168u: goto label_309168;
        case 0x309174u: goto label_309174;
        case 0x309184u: goto label_309184;
        default: break;
    }

    ctx->pc = 0x309150u;

    // 0x309150: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x309150u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x309154: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x309154u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x309158: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x309158u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x30915c: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x30915cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x309160: 0xc0c1f08  jal         func_307C20
    ctx->pc = 0x309160u;
    SET_GPR_U32(ctx, 31, 0x309168u);
    ctx->pc = 0x309164u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x309160u;
    // 0x309164: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x307C20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x307C20u, 0x309160u, 0x309168u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x309168u;
label_309168:
    // 0x309168: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x309168u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30916c: 0xc0c2428  jal         func_3090A0
    ctx->pc = 0x30916Cu;
    SET_GPR_U32(ctx, 31, 0x309174u);
    ctx->pc = 0x309170u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30916Cu;
    // 0x309170: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3090A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3090A0u, 0x30916Cu, 0x309174u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x309174u;
label_309174:
    // 0x309174: 0x12200003  beqz        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x309174u;
    {
        const bool branch_taken_0x309174 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x309178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x309174u;
        // 0x309178: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x309174) {
            ctx->pc = 0x309184u;
            goto label_309184;
        }
    }
    ctx->pc = 0x30917Cu;
    // 0x30917c: 0xc0c1f1c  jal         func_307C70
    ctx->pc = 0x30917Cu;
    SET_GPR_U32(ctx, 31, 0x309184u);
    ctx->pc = 0x307C70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x307C70u, 0x30917Cu, 0x309184u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x309184u;
label_309184:
    // 0x309184: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x309184u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x309188: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x309188u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x30918c: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x30918cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x309190: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x309190u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x309194: 0x3e00008  jr          $ra
    ctx->pc = 0x309194u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x309198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x309194u;
        // 0x309198: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x309194u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x30919Cu;
    // 0x30919c: 0x0  nop
    ctx->pc = 0x30919cu;
    // NOP
    ctx->pc = 0x3091a0u;
}
