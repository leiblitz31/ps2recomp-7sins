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

// Function: sub_0040D1F0
// Address: 0x40d1f0 - 0x40d240
void sub_0040D1F0_0x40d1f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0040D1F0_0x40d1f0");
#endif

    switch (ctx->pc) {
        case 0x40d204u: goto label_40d204;
        case 0x40d220u: goto label_40d220;
        case 0x40d22cu: goto label_40d22c;
        default: break;
    }

    ctx->pc = 0x40d1f0u;

    // 0x40d1f0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x40d1f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x40d1f4: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x40d1f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x40d1f8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x40d1f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x40d1fc: 0xc10480a  jal         func_412028
    ctx->pc = 0x40D1FCu;
    SET_GPR_U32(ctx, 31, 0x40D204u);
    ctx->pc = 0x40D200u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40D1FCu;
    // 0x40d200: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x412028u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x412028u, 0x40D1FCu, 0x40D204u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40D204u;
label_40d204:
    // 0x40d204: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x40D204u;
    {
        const bool branch_taken_0x40d204 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x40D208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40D204u;
        // 0x40d208: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40d204) {
            ctx->pc = 0x40D230u;
            goto label_40d230;
        }
    }
    ctx->pc = 0x40D20Cu;
    // 0x40d20c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x40d20cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x40d210: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x40d210u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x40d214: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x40d214u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x40d218: 0xc1035f6  jal         func_40D7D8
    ctx->pc = 0x40D218u;
    SET_GPR_U32(ctx, 31, 0x40D220u);
    ctx->pc = 0x40D21Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40D218u;
    // 0x40d21c: 0x3484001a  ori         $a0, $a0, 0x1A (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)26);
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D7D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D7D8u, 0x40D218u, 0x40D220u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40D220u;
label_40d220:
    // 0x40d220: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x40d220u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40d224: 0xc103628  jal         func_40D8A0
    ctx->pc = 0x40D224u;
    SET_GPR_U32(ctx, 31, 0x40D22Cu);
    ctx->pc = 0x40D228u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40D224u;
    // 0x40d228: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D8A0u, 0x40D224u, 0x40D22Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40D22Cu;
label_40d22c:
    // 0x40d22c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x40d22cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_40d230:
    // 0x40d230: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x40d230u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x40d234: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x40d234u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x40d238: 0x3e00008  jr          $ra
    ctx->pc = 0x40D238u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x40D23Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40D238u;
        // 0x40d23c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x40D238u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x40D240u;
}
