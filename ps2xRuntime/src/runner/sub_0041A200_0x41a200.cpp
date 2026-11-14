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

// Function: sub_0041A200
// Address: 0x41a200 - 0x41a290
void sub_0041A200_0x41a200(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0041A200_0x41a200");
#endif

    switch (ctx->pc) {
        case 0x41a238u: goto label_41a238;
        case 0x41a240u: goto label_41a240;
        case 0x41a260u: goto label_41a260;
        case 0x41a268u: goto label_41a268;
        default: break;
    }

    ctx->pc = 0x41a200u;

    // 0x41a200: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x41a200u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x41a204: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x41a204u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x41a208: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x41a208u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x41a20c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x41a20cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x41a210: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x41a210u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x41a214: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x41a214u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x41a218: 0x8e250004  lw          $a1, 0x4($s1)
    ctx->pc = 0x41a218u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x41a21c: 0x10a0000d  beqz        $a1, . + 4 + (0xD << 2)
    ctx->pc = 0x41A21Cu;
    {
        const bool branch_taken_0x41a21c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x41A220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41A21Cu;
        // 0x41a220: 0x8e300098  lw          $s0, 0x98($s1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 152)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41a21c) {
            ctx->pc = 0x41A254u;
            goto label_41a254;
        }
    }
    ctx->pc = 0x41A224u;
    // 0x41a224: 0x8cb200a0  lw          $s2, 0xA0($a1)
    ctx->pc = 0x41a224u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 160)));
    // 0x41a228: 0x12000012  beqz        $s0, . + 4 + (0x12 << 2)
    ctx->pc = 0x41A228u;
    {
        const bool branch_taken_0x41a228 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x41A22Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41A228u;
        // 0x41a22c: 0xae3200a0  sw          $s2, 0xA0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 160), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41a228) {
            ctx->pc = 0x41A274u;
            goto label_41a274;
        }
    }
    ctx->pc = 0x41A230u;
    // 0x41a230: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x41a230u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x41a234: 0x0  nop
    ctx->pc = 0x41a234u;
    // NOP
label_41a238:
    // 0x41a238: 0xc1068e0  jal         func_41A380
    ctx->pc = 0x41A238u;
    SET_GPR_U32(ctx, 31, 0x41A240u);
    ctx->pc = 0x41A23Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41A238u;
    // 0x41a23c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41A380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41A380u, 0x41A238u, 0x41A240u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41A240u;
label_41a240:
    // 0x41a240: 0x8e10009c  lw          $s0, 0x9C($s0)
    ctx->pc = 0x41a240u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 156)));
    // 0x41a244: 0x1600fffc  bnez        $s0, . + 4 + (-0x4 << 2)
    ctx->pc = 0x41A244u;
    {
        const bool branch_taken_0x41a244 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x41A248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41A244u;
        // 0x41a248: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41a244) {
            ctx->pc = 0x41A238u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_41a238;
        }
    }
    ctx->pc = 0x41A24Cu;
    // 0x41a24c: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x41A24Cu;
    {
        const bool branch_taken_0x41a24c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x41A250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41A24Cu;
        // 0x41a250: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41a24c) {
            ctx->pc = 0x41A278u;
            goto label_41a278;
        }
    }
    ctx->pc = 0x41A254u;
label_41a254:
    // 0x41a254: 0x12000007  beqz        $s0, . + 4 + (0x7 << 2)
    ctx->pc = 0x41A254u;
    {
        const bool branch_taken_0x41a254 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x41A258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41A254u;
        // 0x41a258: 0xae3100a0  sw          $s1, 0xA0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 160), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41a254) {
            ctx->pc = 0x41A274u;
            goto label_41a274;
        }
    }
    ctx->pc = 0x41A25Cu;
    // 0x41a25c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x41a25cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_41a260:
    // 0x41a260: 0xc1068e0  jal         func_41A380
    ctx->pc = 0x41A260u;
    SET_GPR_U32(ctx, 31, 0x41A268u);
    ctx->pc = 0x41A264u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41A260u;
    // 0x41a264: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41A380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41A380u, 0x41A260u, 0x41A268u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41A268u;
label_41a268:
    // 0x41a268: 0x8e10009c  lw          $s0, 0x9C($s0)
    ctx->pc = 0x41a268u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 156)));
    // 0x41a26c: 0x1600fffc  bnez        $s0, . + 4 + (-0x4 << 2)
    ctx->pc = 0x41A26Cu;
    {
        const bool branch_taken_0x41a26c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x41A270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41A26Cu;
        // 0x41a270: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41a26c) {
            ctx->pc = 0x41A260u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_41a260;
        }
    }
    ctx->pc = 0x41A274u;
label_41a274:
    // 0x41a274: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x41a274u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_41a278:
    // 0x41a278: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x41a278u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x41a27c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x41a27cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x41a280: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x41a280u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x41a284: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x41a284u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x41a288: 0x3e00008  jr          $ra
    ctx->pc = 0x41A288u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x41A28Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41A288u;
        // 0x41a28c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x41A288u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x41A290u;
}
