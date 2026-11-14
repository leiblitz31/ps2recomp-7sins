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

// Function: sub_00378230
// Address: 0x378230 - 0x378288
void sub_00378230_0x378230(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00378230_0x378230");
#endif

    switch (ctx->pc) {
        case 0x378230u: goto label_378230;
        case 0x378234u: goto label_378234;
        case 0x378238u: goto label_378238;
        case 0x37823cu: goto label_37823c;
        case 0x378240u: goto label_378240;
        case 0x378244u: goto label_378244;
        case 0x378248u: goto label_378248;
        case 0x37824cu: goto label_37824c;
        case 0x378250u: goto label_378250;
        case 0x378254u: goto label_378254;
        case 0x378258u: goto label_378258;
        case 0x37825cu: goto label_37825c;
        case 0x378260u: goto label_378260;
        case 0x378264u: goto label_378264;
        case 0x378268u: goto label_378268;
        case 0x37826cu: goto label_37826c;
        case 0x378270u: goto label_378270;
        case 0x378274u: goto label_378274;
        case 0x378278u: goto label_378278;
        case 0x37827cu: goto label_37827c;
        case 0x378280u: goto label_378280;
        case 0x378284u: goto label_378284;
        default: break;
    }

    ctx->pc = 0x378230u;

label_378230:
    // 0x378230: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x378230u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_378234:
    // 0x378234: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x378234u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_378238:
    // 0x378238: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x378238u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_37823c:
    // 0x37823c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x37823cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_378240:
    // 0x378240: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x378240u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_378244:
    // 0x378244: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x378244u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_378248:
    // 0x378248: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
label_37824c:
    if (ctx->pc == 0x37824Cu) {
        ctx->pc = 0x37824Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x378248u;
        // 0x37824c: 0x3c020062  lui         $v0, 0x62 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x378250u;
        goto label_378250;
    }
    ctx->pc = 0x378248u;
    {
        const bool branch_taken_0x378248 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x37824Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x378248u;
        // 0x37824c: 0x3c020062  lui         $v0, 0x62 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x378248) {
            ctx->pc = 0x378274u;
            goto label_378274;
        }
    }
    ctx->pc = 0x378250u;
label_378250:
    // 0x378250: 0x2451e880  addiu       $s1, $v0, -0x1780
    ctx->pc = 0x378250u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961280));
label_378254:
    // 0x378254: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x378254u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_378258:
    // 0x378258: 0x8e23010c  lw          $v1, 0x10C($s1)
    ctx->pc = 0x378258u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 268)));
label_37825c:
    // 0x37825c: 0x8c820058  lw          $v0, 0x58($a0)
    ctx->pc = 0x37825cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 88)));
label_378260:
    // 0x378260: 0x60f809  jalr        $v1
label_378264:
    if (ctx->pc == 0x378264u) {
        ctx->pc = 0x378264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x378260u;
        // 0x378264: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x378268u;
        goto label_378268;
    }
    ctx->pc = 0x378260u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x378268u);
        ctx->pc = 0x378264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x378260u;
        // 0x378264: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x378260u, 0x378268u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x378268u;
label_378268:
    // 0x378268: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x378268u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_37826c:
    // 0x37826c: 0x5440fffa  bnel        $v0, $zero, . + 4 + (-0x6 << 2)
label_378270:
    if (ctx->pc == 0x378270u) {
        ctx->pc = 0x378270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37826Cu;
        // 0x378270: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x378274u;
        goto label_378274;
    }
    ctx->pc = 0x37826Cu;
    {
        const bool branch_taken_0x37826c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x37826c) {
            ctx->pc = 0x378270u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x37826Cu;
            // 0x378270: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x378258u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_378258;
        }
    }
    ctx->pc = 0x378274u;
label_378274:
    // 0x378274: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x378274u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_378278:
    // 0x378278: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x378278u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_37827c:
    // 0x37827c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x37827cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_378280:
    // 0x378280: 0x3e00008  jr          $ra
label_378284:
    if (ctx->pc == 0x378284u) {
        ctx->pc = 0x378284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x378280u;
        // 0x378284: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x378288u;
        goto label_fallthrough_0x378280;
    }
    ctx->pc = 0x378280u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x378284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x378280u;
        // 0x378284: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x378280u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x378280:
    ctx->pc = 0x378288u;
}
