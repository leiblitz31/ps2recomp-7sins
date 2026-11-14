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

// Function: sub_003900E8
// Address: 0x3900e8 - 0x390148
void sub_003900E8_0x3900e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003900E8_0x3900e8");
#endif

    switch (ctx->pc) {
        case 0x3900e8u: goto label_3900e8;
        case 0x3900ecu: goto label_3900ec;
        case 0x3900f0u: goto label_3900f0;
        case 0x3900f4u: goto label_3900f4;
        case 0x3900f8u: goto label_3900f8;
        case 0x3900fcu: goto label_3900fc;
        case 0x390100u: goto label_390100;
        case 0x390104u: goto label_390104;
        case 0x390108u: goto label_390108;
        case 0x39010cu: goto label_39010c;
        case 0x390110u: goto label_390110;
        case 0x390114u: goto label_390114;
        case 0x390118u: goto label_390118;
        case 0x39011cu: goto label_39011c;
        case 0x390120u: goto label_390120;
        case 0x390124u: goto label_390124;
        case 0x390128u: goto label_390128;
        case 0x39012cu: goto label_39012c;
        case 0x390130u: goto label_390130;
        case 0x390134u: goto label_390134;
        case 0x390138u: goto label_390138;
        case 0x39013cu: goto label_39013c;
        case 0x390140u: goto label_390140;
        case 0x390144u: goto label_390144;
        default: break;
    }

    ctx->pc = 0x3900e8u;

label_3900e8:
    // 0x3900e8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3900e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_3900ec:
    // 0x3900ec: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x3900ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_3900f0:
    // 0x3900f0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3900f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_3900f4:
    // 0x3900f4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3900f4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3900f8:
    // 0x3900f8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3900f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_3900fc:
    // 0x3900fc: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x3900fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_390100:
    // 0x390100: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
label_390104:
    if (ctx->pc == 0x390104u) {
        ctx->pc = 0x390104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x390100u;
        // 0x390104: 0x3c110062  lui         $s1, 0x62 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)98 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x390108u;
        goto label_390108;
    }
    ctx->pc = 0x390100u;
    {
        const bool branch_taken_0x390100 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x390104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x390100u;
        // 0x390104: 0x3c110062  lui         $s1, 0x62 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)98 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x390100) {
            ctx->pc = 0x39011Cu;
            goto label_39011c;
        }
    }
    ctx->pc = 0x390108u;
label_390108:
    // 0x390108: 0x2622e880  addiu       $v0, $s1, -0x1780
    ctx->pc = 0x390108u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 4294961280));
label_39010c:
    // 0x39010c: 0x8c43010c  lw          $v1, 0x10C($v0)
    ctx->pc = 0x39010cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 268)));
label_390110:
    // 0x390110: 0x60f809  jalr        $v1
label_390114:
    if (ctx->pc == 0x390114u) {
        ctx->pc = 0x390118u;
        goto label_390118;
    }
    ctx->pc = 0x390110u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x390118u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x390110u, 0x390118u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x390118u;
label_390118:
    // 0x390118: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x390118u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
label_39011c:
    // 0x39011c: 0x2623e880  addiu       $v1, $s1, -0x1780
    ctx->pc = 0x39011cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 4294961280));
label_390120:
    // 0x390120: 0x8f84a9c8  lw          $a0, -0x5638($gp)
    ctx->pc = 0x390120u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945224)));
label_390124:
    // 0x390124: 0x8c62011c  lw          $v0, 0x11C($v1)
    ctx->pc = 0x390124u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 284)));
label_390128:
    // 0x390128: 0x40f809  jalr        $v0
label_39012c:
    if (ctx->pc == 0x39012Cu) {
        ctx->pc = 0x39012Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x390128u;
        // 0x39012c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x390130u;
        goto label_390130;
    }
    ctx->pc = 0x390128u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x390130u);
        ctx->pc = 0x39012Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x390128u;
        // 0x39012c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x390128u, 0x390130u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x390130u;
label_390130:
    // 0x390130: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x390130u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_390134:
    // 0x390134: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x390134u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_390138:
    // 0x390138: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x390138u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_39013c:
    // 0x39013c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x39013cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_390140:
    // 0x390140: 0x3e00008  jr          $ra
label_390144:
    if (ctx->pc == 0x390144u) {
        ctx->pc = 0x390144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x390140u;
        // 0x390144: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x390148u;
        goto label_fallthrough_0x390140;
    }
    ctx->pc = 0x390140u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x390144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x390140u;
        // 0x390144: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x390140u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x390140:
    ctx->pc = 0x390148u;
}
