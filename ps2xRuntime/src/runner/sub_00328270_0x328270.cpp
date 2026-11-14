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

// Function: sub_00328270
// Address: 0x328270 - 0x3282f0
void sub_00328270_0x328270(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00328270_0x328270");
#endif

    switch (ctx->pc) {
        case 0x328270u: goto label_328270;
        case 0x328274u: goto label_328274;
        case 0x328278u: goto label_328278;
        case 0x32827cu: goto label_32827c;
        case 0x328280u: goto label_328280;
        case 0x328284u: goto label_328284;
        case 0x328288u: goto label_328288;
        case 0x32828cu: goto label_32828c;
        case 0x328290u: goto label_328290;
        case 0x328294u: goto label_328294;
        case 0x328298u: goto label_328298;
        case 0x32829cu: goto label_32829c;
        case 0x3282a0u: goto label_3282a0;
        case 0x3282a4u: goto label_3282a4;
        case 0x3282a8u: goto label_3282a8;
        case 0x3282acu: goto label_3282ac;
        case 0x3282b0u: goto label_3282b0;
        case 0x3282b4u: goto label_3282b4;
        case 0x3282b8u: goto label_3282b8;
        case 0x3282bcu: goto label_3282bc;
        case 0x3282c0u: goto label_3282c0;
        case 0x3282c4u: goto label_3282c4;
        case 0x3282c8u: goto label_3282c8;
        case 0x3282ccu: goto label_3282cc;
        case 0x3282d0u: goto label_3282d0;
        case 0x3282d4u: goto label_3282d4;
        case 0x3282d8u: goto label_3282d8;
        case 0x3282dcu: goto label_3282dc;
        case 0x3282e0u: goto label_3282e0;
        case 0x3282e4u: goto label_3282e4;
        case 0x3282e8u: goto label_3282e8;
        case 0x3282ecu: goto label_3282ec;
        default: break;
    }

    ctx->pc = 0x328270u;

label_328270:
    // 0x328270: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x328270u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_328274:
    // 0x328274: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x328274u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_328278:
    // 0x328278: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x328278u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_32827c:
    // 0x32827c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x32827cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_328280:
    // 0x328280: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x328280u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_328284:
    // 0x328284: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x328284u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_328288:
    // 0x328288: 0x8e020044  lw          $v0, 0x44($s0)
    ctx->pc = 0x328288u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
label_32828c:
    // 0x32828c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x32828cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_328290:
    // 0x328290: 0x14510008  bne         $v0, $s1, . + 4 + (0x8 << 2)
label_328294:
    if (ctx->pc == 0x328294u) {
        ctx->pc = 0x328294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328290u;
        // 0x328294: 0xae020044  sw          $v0, 0x44($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 68), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x328298u;
        goto label_328298;
    }
    ctx->pc = 0x328290u;
    {
        const bool branch_taken_0x328290 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        ctx->pc = 0x328294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328290u;
        // 0x328294: 0xae020044  sw          $v0, 0x44($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 68), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x328290) {
            ctx->pc = 0x3282B4u;
            goto label_3282b4;
        }
    }
    ctx->pc = 0x328298u;
label_328298:
    // 0x328298: 0x8e040054  lw          $a0, 0x54($s0)
    ctx->pc = 0x328298u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
label_32829c:
    // 0x32829c: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_3282a0:
    if (ctx->pc == 0x3282A0u) {
        ctx->pc = 0x3282A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32829Cu;
        // 0x3282a0: 0x8e020044  lw          $v0, 0x44($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3282A4u;
        goto label_3282a4;
    }
    ctx->pc = 0x32829Cu;
    {
        const bool branch_taken_0x32829c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x32829c) {
            ctx->pc = 0x3282A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x32829Cu;
            // 0x3282a0: 0x8e020044  lw          $v0, 0x44($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3282B8u;
            goto label_3282b8;
        }
    }
    ctx->pc = 0x3282A4u;
label_3282a4:
    // 0x3282a4: 0xc0e3414  jal         func_38D050
label_3282a8:
    if (ctx->pc == 0x3282A8u) {
        ctx->pc = 0x3282A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3282A4u;
        // 0x3282a8: 0xae000054  sw          $zero, 0x54($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3282ACu;
        goto label_3282ac;
    }
    ctx->pc = 0x3282A4u;
    SET_GPR_U32(ctx, 31, 0x3282ACu);
    ctx->pc = 0x3282A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3282A4u;
    // 0x3282a8: 0xae000054  sw          $zero, 0x54($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38D050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38D050u, 0x3282A4u, 0x3282ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3282ACu;
label_3282ac:
    // 0x3282ac: 0x1000000a  b           . + 4 + (0xA << 2)
label_3282b0:
    if (ctx->pc == 0x3282B0u) {
        ctx->pc = 0x3282B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3282ACu;
        // 0x3282b0: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3282B4u;
        goto label_3282b4;
    }
    ctx->pc = 0x3282ACu;
    {
        const bool branch_taken_0x3282ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3282B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3282ACu;
        // 0x3282b0: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3282ac) {
            ctx->pc = 0x3282D8u;
            goto label_3282d8;
        }
    }
    ctx->pc = 0x3282B4u;
label_3282b4:
    // 0x3282b4: 0x8e020044  lw          $v0, 0x44($s0)
    ctx->pc = 0x3282b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
label_3282b8:
    // 0x3282b8: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
label_3282bc:
    if (ctx->pc == 0x3282BCu) {
        ctx->pc = 0x3282BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3282B8u;
        // 0x3282bc: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3282C0u;
        goto label_3282c0;
    }
    ctx->pc = 0x3282B8u;
    {
        const bool branch_taken_0x3282b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3282BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3282B8u;
        // 0x3282bc: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3282b8) {
            ctx->pc = 0x3282DCu;
            goto label_3282dc;
        }
    }
    ctx->pc = 0x3282C0u;
label_3282c0:
    // 0x3282c0: 0xc0e3da0  jal         func_38F680
label_3282c4:
    if (ctx->pc == 0x3282C4u) {
        ctx->pc = 0x3282C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3282C0u;
        // 0x3282c4: 0x26040048  addiu       $a0, $s0, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 72));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3282C8u;
        goto label_3282c8;
    }
    ctx->pc = 0x3282C0u;
    SET_GPR_U32(ctx, 31, 0x3282C8u);
    ctx->pc = 0x3282C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3282C0u;
    // 0x3282c4: 0x26040048  addiu       $a0, $s0, 0x48 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 72));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38F680u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38F680u, 0x3282C0u, 0x3282C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3282C8u;
label_3282c8:
    // 0x3282c8: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x3282c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
label_3282cc:
    // 0x3282cc: 0x8c62e98c  lw          $v0, -0x1674($v1)
    ctx->pc = 0x3282ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961548)));
label_3282d0:
    // 0x3282d0: 0x40f809  jalr        $v0
label_3282d4:
    if (ctx->pc == 0x3282D4u) {
        ctx->pc = 0x3282D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3282D0u;
        // 0x3282d4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3282D8u;
        goto label_3282d8;
    }
    ctx->pc = 0x3282D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3282D8u);
        ctx->pc = 0x3282D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3282D0u;
        // 0x3282d4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3282D0u, 0x3282D8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3282D8u;
label_3282d8:
    // 0x3282d8: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x3282d8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3282dc:
    // 0x3282dc: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x3282dcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3282e0:
    // 0x3282e0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3282e0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3282e4:
    // 0x3282e4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3282e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3282e8:
    // 0x3282e8: 0x3e00008  jr          $ra
label_3282ec:
    if (ctx->pc == 0x3282ECu) {
        ctx->pc = 0x3282ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3282E8u;
        // 0x3282ec: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3282F0u;
        goto label_fallthrough_0x3282e8;
    }
    ctx->pc = 0x3282E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3282ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3282E8u;
        // 0x3282ec: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3282E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3282e8:
    ctx->pc = 0x3282F0u;
}
