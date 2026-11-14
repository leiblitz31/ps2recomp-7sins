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

// Function: sub_004A8178
// Address: 0x4a8178 - 0x4a8310
void sub_004A8178_0x4a8178(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004A8178_0x4a8178");
#endif

    switch (ctx->pc) {
        case 0x4a8198u: goto label_4a8198;
        case 0x4a81a8u: goto label_4a81a8;
        case 0x4a81b0u: goto label_4a81b0;
        case 0x4a81bcu: goto label_4a81bc;
        case 0x4a820cu: goto label_4a820c;
        case 0x4a821cu: goto label_4a821c;
        case 0x4a8264u: goto label_4a8264;
        case 0x4a827cu: goto label_4a827c;
        case 0x4a82d4u: goto label_4a82d4;
        case 0x4a82f0u: goto label_4a82f0;
        default: break;
    }

    ctx->pc = 0x4a8178u;

    // 0x4a8178: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x4a8178u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x4a817c: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x4a817cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x4a8180: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x4a8180u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x4a8184: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x4a8184u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a8188: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x4a8188u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x4a818c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4a818cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4a8190: 0xc12821c  jal         func_4A0870
    ctx->pc = 0x4A8190u;
    SET_GPR_U32(ctx, 31, 0x4A8198u);
    ctx->pc = 0x4A8194u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A8190u;
    // 0x4a8194: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A0870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A0870u, 0x4A8190u, 0x4A8198u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A8198u;
label_4a8198:
    // 0x4a8198: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x4a8198u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a819c: 0x1220000d  beqz        $s1, . + 4 + (0xD << 2)
    ctx->pc = 0x4A819Cu;
    {
        const bool branch_taken_0x4a819c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A81A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A819Cu;
        // 0x4a81a0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a819c) {
            ctx->pc = 0x4A81D4u;
            goto label_4a81d4;
        }
    }
    ctx->pc = 0x4A81A4u;
    // 0x4a81a4: 0x0  nop
    ctx->pc = 0x4a81a4u;
    // NOP
label_4a81a8:
    // 0x4a81a8: 0xc128210  jal         func_4A0840
    ctx->pc = 0x4A81A8u;
    SET_GPR_U32(ctx, 31, 0x4A81B0u);
    ctx->pc = 0x4A81ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A81A8u;
    // 0x4a81ac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A0840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A0840u, 0x4A81A8u, 0x4A81B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A81B0u;
label_4a81b0:
    // 0x4a81b0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x4a81b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a81b4: 0xc1282ec  jal         func_4A0BB0
    ctx->pc = 0x4A81B4u;
    SET_GPR_U32(ctx, 31, 0x4A81BCu);
    ctx->pc = 0x4A81B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A81B4u;
    // 0x4a81b8: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A0BB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A0BB0u, 0x4A81B4u, 0x4A81BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A81BCu;
label_4a81bc:
    // 0x4a81bc: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x4A81BCu;
    {
        const bool branch_taken_0x4a81bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4a81bc) {
            ctx->pc = 0x4A81C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4A81BCu;
            // 0x4a81c0: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4A81D8u;
            goto label_4a81d8;
        }
    }
    ctx->pc = 0x4A81C4u;
    // 0x4a81c4: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x4a81c4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x4a81c8: 0x211102b  sltu        $v0, $s0, $s1
    ctx->pc = 0x4a81c8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x4a81cc: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x4A81CCu;
    {
        const bool branch_taken_0x4a81cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4A81D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A81CCu;
        // 0x4a81d0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a81cc) {
            ctx->pc = 0x4A81A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4a81a8;
        }
    }
    ctx->pc = 0x4A81D4u;
label_4a81d4:
    // 0x4a81d4: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x4a81d4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4a81d8:
    // 0x4a81d8: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x4a81d8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4a81dc: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x4a81dcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4a81e0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4a81e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4a81e4: 0x3e00008  jr          $ra
    ctx->pc = 0x4A81E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4A81E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A81E4u;
        // 0x4a81e8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4A81E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4A81ECu;
    // 0x4a81ec: 0x0  nop
    ctx->pc = 0x4a81ecu;
    // NOP
    // 0x4a81f0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4a81f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x4a81f4: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x4a81f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x4a81f8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4a81f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x4a81fc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4a81fcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a8200: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4a8200u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4a8204: 0xc12a47e  jal         func_4A91F8
    ctx->pc = 0x4A8204u;
    SET_GPR_U32(ctx, 31, 0x4A820Cu);
    ctx->pc = 0x4A8208u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A8204u;
    // 0x4a8208: 0xc0882d  daddu       $s1, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A91F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A91F8u, 0x4A8204u, 0x4A820Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A820Cu;
label_4a820c:
    // 0x4a820c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x4A820Cu;
    {
        const bool branch_taken_0x4a820c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A8210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A820Cu;
        // 0x4a8210: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a820c) {
            ctx->pc = 0x4A8228u;
            goto label_4a8228;
        }
    }
    ctx->pc = 0x4A8214u;
    // 0x4a8214: 0xc12a448  jal         func_4A9120
    ctx->pc = 0x4A8214u;
    SET_GPR_U32(ctx, 31, 0x4A821Cu);
    ctx->pc = 0x4A8218u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A8214u;
    // 0x4a8218: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A9120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A9120u, 0x4A8214u, 0x4A821Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A821Cu;
label_4a821c:
    // 0x4a821c: 0x2800a  movz        $s0, $zero, $v0
    ctx->pc = 0x4a821cu;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 0));
    // 0x4a8220: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x4A8220u;
    {
        const bool branch_taken_0x4a8220 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A8224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A8220u;
        // 0x4a8224: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a8220) {
            ctx->pc = 0x4A822Cu;
            goto label_4a822c;
        }
    }
    ctx->pc = 0x4A8228u;
label_4a8228:
    // 0x4a8228: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x4a8228u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4a822c:
    // 0x4a822c: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x4a822cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4a8230: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4a8230u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4a8234: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4a8234u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4a8238: 0x3e00008  jr          $ra
    ctx->pc = 0x4A8238u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4A823Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A8238u;
        // 0x4a823c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4A8238u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4A8240u;
    // 0x4a8240: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4a8240u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x4a8244: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x4a8244u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x4a8248: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4a8248u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x4a824c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4a824cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a8250: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4a8250u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4a8254: 0x10a00005  beqz        $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x4A8254u;
    {
        const bool branch_taken_0x4a8254 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A8258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A8254u;
        // 0x4a8258: 0xc0882d  daddu       $s1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a8254) {
            ctx->pc = 0x4A826Cu;
            goto label_4a826c;
        }
    }
    ctx->pc = 0x4A825Cu;
    // 0x4a825c: 0xc12a45c  jal         func_4A9170
    ctx->pc = 0x4A825Cu;
    SET_GPR_U32(ctx, 31, 0x4A8264u);
    ctx->pc = 0x4A9170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A9170u, 0x4A825Cu, 0x4A8264u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A8264u;
label_4a8264:
    // 0x4a8264: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x4A8264u;
    {
        const bool branch_taken_0x4a8264 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A8268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A8264u;
        // 0x4a8268: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a8264) {
            ctx->pc = 0x4A828Cu;
            goto label_4a828c;
        }
    }
    ctx->pc = 0x4A826Cu;
label_4a826c:
    // 0x4a826c: 0x12200006  beqz        $s1, . + 4 + (0x6 << 2)
    ctx->pc = 0x4A826Cu;
    {
        const bool branch_taken_0x4a826c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A8270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A826Cu;
        // 0x4a8270: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a826c) {
            ctx->pc = 0x4A8288u;
            goto label_4a8288;
        }
    }
    ctx->pc = 0x4A8274u;
    // 0x4a8274: 0xc12a424  jal         func_4A9090
    ctx->pc = 0x4A8274u;
    SET_GPR_U32(ctx, 31, 0x4A827Cu);
    ctx->pc = 0x4A8278u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A8274u;
    // 0x4a8278: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A9090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A9090u, 0x4A8274u, 0x4A827Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A827Cu;
label_4a827c:
    // 0x4a827c: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x4a827cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a8280: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x4A8280u;
    {
        const bool branch_taken_0x4a8280 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A8284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A8280u;
        // 0x4a8284: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a8280) {
            ctx->pc = 0x4A828Cu;
            goto label_4a828c;
        }
    }
    ctx->pc = 0x4A8288u;
label_4a8288:
    // 0x4a8288: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x4a8288u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4a828c:
    // 0x4a828c: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x4a828cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4a8290: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4a8290u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4a8294: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4a8294u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4a8298: 0x3e00008  jr          $ra
    ctx->pc = 0x4A8298u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4A829Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A8298u;
        // 0x4a829c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4A8298u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4A82A0u;
    // 0x4a82a0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x4a82a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x4a82a4: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x4a82a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x4a82a8: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x4a82a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x4a82ac: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x4a82acu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a82b0: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x4a82b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x4a82b4: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x4a82b4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a82b8: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x4a82b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x4a82bc: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x4a82bcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a82c0: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x4a82c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
    // 0x4a82c4: 0x100982d  daddu       $s3, $t0, $zero
    ctx->pc = 0x4a82c4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a82c8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4a82c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4a82cc: 0xc12992a  jal         func_4A64A8
    ctx->pc = 0x4A82CCu;
    SET_GPR_U32(ctx, 31, 0x4A82D4u);
    ctx->pc = 0x4A82D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A82CCu;
    // 0x4a82d0: 0x120a02d  daddu       $s4, $t1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A64A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A64A8u, 0x4A82CCu, 0x4A82D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A82D4u;
label_4a82d4:
    // 0x4a82d4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x4a82d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a82d8: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x4a82d8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a82dc: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x4a82dcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a82e0: 0x260402d  daddu       $t0, $s3, $zero
    ctx->pc = 0x4a82e0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a82e4: 0x280482d  daddu       $t1, $s4, $zero
    ctx->pc = 0x4a82e4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a82e8: 0xc129a9c  jal         func_4A6A70
    ctx->pc = 0x4A82E8u;
    SET_GPR_U32(ctx, 31, 0x4A82F0u);
    ctx->pc = 0x4A82ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A82E8u;
    // 0x4a82ec: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A6A70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A6A70u, 0x4A82E8u, 0x4A82F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A82F0u;
label_4a82f0:
    // 0x4a82f0: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x4a82f0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x4a82f4: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x4a82f4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x4a82f8: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x4a82f8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4a82fc: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x4a82fcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4a8300: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x4a8300u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4a8304: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4a8304u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4a8308: 0x3e00008  jr          $ra
    ctx->pc = 0x4A8308u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4A830Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A8308u;
        // 0x4a830c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4A8308u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4A8310u;
}
