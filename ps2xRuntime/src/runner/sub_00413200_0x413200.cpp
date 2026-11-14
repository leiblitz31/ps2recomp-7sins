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

// Function: sub_00413200
// Address: 0x413200 - 0x413298
void sub_00413200_0x413200(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00413200_0x413200");
#endif

    switch (ctx->pc) {
        case 0x413200u: goto label_413200;
        case 0x413204u: goto label_413204;
        case 0x413208u: goto label_413208;
        case 0x41320cu: goto label_41320c;
        case 0x413210u: goto label_413210;
        case 0x413214u: goto label_413214;
        case 0x413218u: goto label_413218;
        case 0x41321cu: goto label_41321c;
        case 0x413220u: goto label_413220;
        case 0x413224u: goto label_413224;
        case 0x413228u: goto label_413228;
        case 0x41322cu: goto label_41322c;
        case 0x413230u: goto label_413230;
        case 0x413234u: goto label_413234;
        case 0x413238u: goto label_413238;
        case 0x41323cu: goto label_41323c;
        case 0x413240u: goto label_413240;
        case 0x413244u: goto label_413244;
        case 0x413248u: goto label_413248;
        case 0x41324cu: goto label_41324c;
        case 0x413250u: goto label_413250;
        case 0x413254u: goto label_413254;
        case 0x413258u: goto label_413258;
        case 0x41325cu: goto label_41325c;
        case 0x413260u: goto label_413260;
        case 0x413264u: goto label_413264;
        case 0x413268u: goto label_413268;
        case 0x41326cu: goto label_41326c;
        case 0x413270u: goto label_413270;
        case 0x413274u: goto label_413274;
        case 0x413278u: goto label_413278;
        case 0x41327cu: goto label_41327c;
        case 0x413280u: goto label_413280;
        case 0x413284u: goto label_413284;
        case 0x413288u: goto label_413288;
        case 0x41328cu: goto label_41328c;
        case 0x413290u: goto label_413290;
        case 0x413294u: goto label_413294;
        default: break;
    }

    ctx->pc = 0x413200u;

label_413200:
    // 0x413200: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x413200u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_413204:
    // 0x413204: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x413204u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_413208:
    // 0x413208: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x413208u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
label_41320c:
    // 0x41320c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x41320cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_413210:
    // 0x413210: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x413210u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_413214:
    // 0x413214: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x413214u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_413218:
    // 0x413218: 0x8e500010  lw          $s0, 0x10($s2)
    ctx->pc = 0x413218u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
label_41321c:
    // 0x41321c: 0x12000017  beqz        $s0, . + 4 + (0x17 << 2)
label_413220:
    if (ctx->pc == 0x413220u) {
        ctx->pc = 0x413220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41321Cu;
        // 0x413220: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x413224u;
        goto label_413224;
    }
    ctx->pc = 0x41321Cu;
    {
        const bool branch_taken_0x41321c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x413220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41321Cu;
        // 0x413220: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41321c) {
            ctx->pc = 0x41327Cu;
            goto label_41327c;
        }
    }
    ctx->pc = 0x413224u;
label_413224:
    // 0x413224: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x413224u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_413228:
    // 0x413228: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x413228u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_41322c:
    // 0x41322c: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x41322cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_413230:
    // 0x413230: 0x40f809  jalr        $v0
label_413234:
    if (ctx->pc == 0x413234u) {
        ctx->pc = 0x413234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x413230u;
        // 0x413234: 0x8e060004  lw          $a2, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x413238u;
        goto label_413238;
    }
    ctx->pc = 0x413230u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x413238u);
        ctx->pc = 0x413234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x413230u;
        // 0x413234: 0x8e060004  lw          $a2, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x413230u, 0x413238u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x413238u;
label_413238:
    // 0x413238: 0x5440000e  bnel        $v0, $zero, . + 4 + (0xE << 2)
label_41323c:
    if (ctx->pc == 0x41323Cu) {
        ctx->pc = 0x41323Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x413238u;
        // 0x41323c: 0x8e100030  lw          $s0, 0x30($s0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x413240u;
        goto label_413240;
    }
    ctx->pc = 0x413238u;
    {
        const bool branch_taken_0x413238 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x413238) {
            ctx->pc = 0x41323Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x413238u;
            // 0x41323c: 0x8e100030  lw          $s0, 0x30($s0) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x413274u;
            goto label_413274;
        }
    }
    ctx->pc = 0x413240u;
label_413240:
    // 0x413240: 0x8e100034  lw          $s0, 0x34($s0)
    ctx->pc = 0x413240u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
label_413244:
    // 0x413244: 0x1200000e  beqz        $s0, . + 4 + (0xE << 2)
label_413248:
    if (ctx->pc == 0x413248u) {
        ctx->pc = 0x413248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x413244u;
        // 0x413248: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41324Cu;
        goto label_41324c;
    }
    ctx->pc = 0x413244u;
    {
        const bool branch_taken_0x413244 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x413248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x413244u;
        // 0x413248: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x413244) {
            ctx->pc = 0x413280u;
            goto label_413280;
        }
    }
    ctx->pc = 0x41324Cu;
label_41324c:
    // 0x41324c: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x41324cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_413250:
    // 0x413250: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x413250u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_413254:
    // 0x413254: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x413254u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_413258:
    // 0x413258: 0x40f809  jalr        $v0
label_41325c:
    if (ctx->pc == 0x41325Cu) {
        ctx->pc = 0x41325Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x413258u;
        // 0x41325c: 0x8e060004  lw          $a2, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x413260u;
        goto label_413260;
    }
    ctx->pc = 0x413258u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x413260u);
        ctx->pc = 0x41325Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x413258u;
        // 0x41325c: 0x8e060004  lw          $a2, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x413258u, 0x413260u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x413260u;
label_413260:
    // 0x413260: 0x8e100034  lw          $s0, 0x34($s0)
    ctx->pc = 0x413260u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
label_413264:
    // 0x413264: 0x5600fffa  bnel        $s0, $zero, . + 4 + (-0x6 << 2)
label_413268:
    if (ctx->pc == 0x413268u) {
        ctx->pc = 0x413268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x413264u;
        // 0x413268: 0x8e020024  lw          $v0, 0x24($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41326Cu;
        goto label_41326c;
    }
    ctx->pc = 0x413264u;
    {
        const bool branch_taken_0x413264 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x413264) {
            ctx->pc = 0x413268u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x413264u;
            // 0x413268: 0x8e020024  lw          $v0, 0x24($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x413250u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_413250;
        }
    }
    ctx->pc = 0x41326Cu;
label_41326c:
    // 0x41326c: 0x10000004  b           . + 4 + (0x4 << 2)
label_413270:
    if (ctx->pc == 0x413270u) {
        ctx->pc = 0x413270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41326Cu;
        // 0x413270: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x413274u;
        goto label_413274;
    }
    ctx->pc = 0x41326Cu;
    {
        const bool branch_taken_0x41326c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x413270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41326Cu;
        // 0x413270: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41326c) {
            ctx->pc = 0x413280u;
            goto label_413280;
        }
    }
    ctx->pc = 0x413274u;
label_413274:
    // 0x413274: 0x5600ffec  bnel        $s0, $zero, . + 4 + (-0x14 << 2)
label_413278:
    if (ctx->pc == 0x413278u) {
        ctx->pc = 0x413278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x413274u;
        // 0x413278: 0x8e020020  lw          $v0, 0x20($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41327Cu;
        goto label_41327c;
    }
    ctx->pc = 0x413274u;
    {
        const bool branch_taken_0x413274 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x413274) {
            ctx->pc = 0x413278u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x413274u;
            // 0x413278: 0x8e020020  lw          $v0, 0x20($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x413228u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_413228;
        }
    }
    ctx->pc = 0x41327Cu;
label_41327c:
    // 0x41327c: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x41327cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_413280:
    // 0x413280: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x413280u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_413284:
    // 0x413284: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x413284u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_413288:
    // 0x413288: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x413288u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_41328c:
    // 0x41328c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x41328cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_413290:
    // 0x413290: 0x3e00008  jr          $ra
label_413294:
    if (ctx->pc == 0x413294u) {
        ctx->pc = 0x413294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x413290u;
        // 0x413294: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x413298u;
        goto label_fallthrough_0x413290;
    }
    ctx->pc = 0x413290u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x413294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x413290u;
        // 0x413294: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x413290u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x413290:
    ctx->pc = 0x413298u;
}
