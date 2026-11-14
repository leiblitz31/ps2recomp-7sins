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

// Function: sub_0031C260
// Address: 0x31c260 - 0x31c4e0
void sub_0031C260_0x31c260(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0031C260_0x31c260");
#endif

    switch (ctx->pc) {
        case 0x31c284u: goto label_31c284;
        case 0x31c2a0u: goto label_31c2a0;
        case 0x31c2b0u: goto label_31c2b0;
        case 0x31c2c0u: goto label_31c2c0;
        case 0x31c304u: goto label_31c304;
        case 0x31c318u: goto label_31c318;
        case 0x31c328u: goto label_31c328;
        default: break;
    }

    ctx->pc = 0x31c260u;

    // 0x31c260: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x31c260u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x31c264: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x31c264u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31c268: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x31c268u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x31c26c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x31c26cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x31c270: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x31c270u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x31c274: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x31c274u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x31c278: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x31c278u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x31c27c: 0xc10493e  jal         func_4124F8
    ctx->pc = 0x31C27Cu;
    SET_GPR_U32(ctx, 31, 0x31C284u);
    ctx->pc = 0x31C280u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31C27Cu;
    // 0x31c280: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4124F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4124F8u, 0x31C27Cu, 0x31C284u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31C284u;
label_31c284:
    // 0x31c284: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x31c284u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31c288: 0x1200000d  beqz        $s0, . + 4 + (0xD << 2)
    ctx->pc = 0x31C288u;
    {
        const bool branch_taken_0x31c288 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x31C28Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31C288u;
        // 0x31c28c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31c288) {
            ctx->pc = 0x31C2C0u;
            goto label_31c2c0;
        }
    }
    ctx->pc = 0x31C290u;
    // 0x31c290: 0x2405001e  addiu       $a1, $zero, 0x1E
    ctx->pc = 0x31c290u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x31c294: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x31c294u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31c298: 0xc103322  jal         func_40CC88
    ctx->pc = 0x31C298u;
    SET_GPR_U32(ctx, 31, 0x31C2A0u);
    ctx->pc = 0x31C29Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31C298u;
    // 0x31c29c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40CC88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40CC88u, 0x31C298u, 0x31C2A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31C2A0u;
label_31c2a0:
    // 0x31c2a0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x31C2A0u;
    {
        const bool branch_taken_0x31c2a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31C2A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31C2A0u;
        // 0x31c2a4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31c2a0) {
            ctx->pc = 0x31C2B8u;
            goto label_31c2b8;
        }
    }
    ctx->pc = 0x31C2A8u;
    // 0x31c2a8: 0xc0c6dee  jal         func_31B7B8
    ctx->pc = 0x31C2A8u;
    SET_GPR_U32(ctx, 31, 0x31C2B0u);
    ctx->pc = 0x31C2ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31C2A8u;
    // 0x31c2ac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31B7B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31B7B8u, 0x31C2A8u, 0x31C2B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31C2B0u;
label_31c2b0:
    // 0x31c2b0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x31c2b0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31c2b4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x31c2b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_31c2b8:
    // 0x31c2b8: 0xc10496a  jal         func_4125A8
    ctx->pc = 0x31C2B8u;
    SET_GPR_U32(ctx, 31, 0x31C2C0u);
    ctx->pc = 0x31C2BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31C2B8u;
    // 0x31c2bc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4125A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4125A8u, 0x31C2B8u, 0x31C2C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31C2C0u;
label_31c2c0:
    // 0x31c2c0: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x31c2c0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31c2c4: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x31c2c4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x31c2c8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x31c2c8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x31c2cc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x31c2ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x31c2d0: 0x3e00008  jr          $ra
    ctx->pc = 0x31C2D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31C2D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31C2D0u;
        // 0x31c2d4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31C2D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31C2D8u;
    // 0x31c2d8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x31c2d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x31c2dc: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x31c2dcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31c2e0: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x31c2e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x31c2e4: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x31c2e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x31c2e8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x31c2e8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31c2ec: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x31c2ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x31c2f0: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x31c2f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x31c2f4: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x31c2f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x31c2f8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x31c2f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x31c2fc: 0xc10493e  jal         func_4124F8
    ctx->pc = 0x31C2FCu;
    SET_GPR_U32(ctx, 31, 0x31C304u);
    ctx->pc = 0x31C300u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31C2FCu;
    // 0x31c300: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4124F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4124F8u, 0x31C2FCu, 0x31C304u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31C304u;
label_31c304:
    // 0x31c304: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x31c304u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31c308: 0x12000007  beqz        $s0, . + 4 + (0x7 << 2)
    ctx->pc = 0x31C308u;
    {
        const bool branch_taken_0x31c308 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x31C30Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31C308u;
        // 0x31c30c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31c308) {
            ctx->pc = 0x31C328u;
            goto label_31c328;
        }
    }
    ctx->pc = 0x31C310u;
    // 0x31c310: 0xc0c6ee4  jal         func_31BB90
    ctx->pc = 0x31C310u;
    SET_GPR_U32(ctx, 31, 0x31C318u);
    ctx->pc = 0x31C314u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31C310u;
    // 0x31c314: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31BB90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31BB90u, 0x31C310u, 0x31C318u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31C318u;
label_31c318:
    // 0x31c318: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x31c318u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31c31c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x31c31cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31c320: 0xc10496a  jal         func_4125A8
    ctx->pc = 0x31C320u;
    SET_GPR_U32(ctx, 31, 0x31C328u);
    ctx->pc = 0x31C324u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31C320u;
    // 0x31c324: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4125A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4125A8u, 0x31C320u, 0x31C328u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31C328u;
label_31c328:
    // 0x31c328: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x31c328u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31c32c: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x31c32cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x31c330: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x31c330u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x31c334: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x31c334u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x31c338: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x31c338u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x31c33c: 0x3e00008  jr          $ra
    ctx->pc = 0x31C33Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31C340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31C33Cu;
        // 0x31c340: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31C33Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31C344u;
    // 0x31c344: 0x0  nop
    ctx->pc = 0x31c344u;
    // NOP
    // 0x31c348: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x31c348u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31c34c: 0x24030014  addiu       $v1, $zero, 0x14
    ctx->pc = 0x31c34cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x31c350: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x31c350u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x31c354: 0xc33018  mult        $a2, $a2, $v1
    ctx->pc = 0x31c354u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x31c358: 0x528c0  sll         $a1, $a1, 3
    ctx->pc = 0x31c358u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x31c35c: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x31c35cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x31c360: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x31c360u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x31c364: 0xc33021  addu        $a2, $a2, $v1
    ctx->pc = 0x31c364u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x31c368: 0x3e00008  jr          $ra
    ctx->pc = 0x31C368u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31C36Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31C368u;
        // 0x31c36c: 0xacc70010  sw          $a3, 0x10($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 16), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31C368u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31C370u;
    // 0x31c370: 0x24020014  addiu       $v0, $zero, 0x14
    ctx->pc = 0x31c370u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x31c374: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x31c374u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x31c378: 0xc23018  mult        $a2, $a2, $v0
    ctx->pc = 0x31c378u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x31c37c: 0x528c0  sll         $a1, $a1, 3
    ctx->pc = 0x31c37cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x31c380: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x31c380u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x31c384: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x31c384u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x31c388: 0xc23021  addu        $a2, $a2, $v0
    ctx->pc = 0x31c388u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x31c38c: 0x3e00008  jr          $ra
    ctx->pc = 0x31C38Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31C390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31C38Cu;
        // 0x31c390: 0x8cc20010  lw          $v0, 0x10($a2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31C38Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31C394u;
    // 0x31c394: 0x0  nop
    ctx->pc = 0x31c394u;
    // NOP
    // 0x31c398: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x31c398u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x31c39c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x31c39cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x31c3a0: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x31c3a0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31c3a4: 0x24030014  addiu       $v1, $zero, 0x14
    ctx->pc = 0x31c3a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x31c3a8: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x31c3a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x31c3ac: 0x460e0003  div.s       $f0, $f0, $f14
    ctx->pc = 0x31c3acu;
    { if (ctx->f[14] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[14]); }
    // 0x31c3b0: 0xc33018  mult        $a2, $a2, $v1
    ctx->pc = 0x31c3b0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x31c3b4: 0x528c0  sll         $a1, $a1, 3
    ctx->pc = 0x31c3b4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x31c3b8: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x31c3b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x31c3bc: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x31c3bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x31c3c0: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x31c3c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x31c3c4: 0xac670010  sw          $a3, 0x10($v1)
    ctx->pc = 0x31c3c4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 7));
    // 0x31c3c8: 0xe46c0000  swc1        $f12, 0x0($v1)
    ctx->pc = 0x31c3c8u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x31c3cc: 0xe46d0004  swc1        $f13, 0x4($v1)
    ctx->pc = 0x31c3ccu;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x31c3d0: 0xe460000c  swc1        $f0, 0xC($v1)
    ctx->pc = 0x31c3d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
    // 0x31c3d4: 0x3e00008  jr          $ra
    ctx->pc = 0x31C3D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31C3D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31C3D4u;
        // 0x31c3d8: 0xe46e0008  swc1        $f14, 0x8($v1) (Delay Slot)
        { float f = ctx->f[14]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31C3D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31C3DCu;
    // 0x31c3dc: 0x0  nop
    ctx->pc = 0x31c3dcu;
    // NOP
    // 0x31c3e0: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x31c3e0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31c3e4: 0x24030014  addiu       $v1, $zero, 0x14
    ctx->pc = 0x31c3e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x31c3e8: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x31c3e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x31c3ec: 0xc33018  mult        $a2, $a2, $v1
    ctx->pc = 0x31c3ecu;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x31c3f0: 0x528c0  sll         $a1, $a1, 3
    ctx->pc = 0x31c3f0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x31c3f4: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x31c3f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x31c3f8: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x31c3f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x31c3fc: 0xc33021  addu        $a2, $a2, $v1
    ctx->pc = 0x31c3fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x31c400: 0x3e00008  jr          $ra
    ctx->pc = 0x31C400u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31C404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31C400u;
        // 0x31c404: 0xe4cc0000  swc1        $f12, 0x0($a2) (Delay Slot)
        { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 0), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31C400u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31C408u;
    // 0x31c408: 0x24020014  addiu       $v0, $zero, 0x14
    ctx->pc = 0x31c408u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x31c40c: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x31c40cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x31c410: 0xc23018  mult        $a2, $a2, $v0
    ctx->pc = 0x31c410u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x31c414: 0x528c0  sll         $a1, $a1, 3
    ctx->pc = 0x31c414u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x31c418: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x31c418u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x31c41c: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x31c41cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x31c420: 0xc23021  addu        $a2, $a2, $v0
    ctx->pc = 0x31c420u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x31c424: 0x3e00008  jr          $ra
    ctx->pc = 0x31C424u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31C428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31C424u;
        // 0x31c428: 0xc4c00000  lwc1        $f0, 0x0($a2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31C424u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31C42Cu;
    // 0x31c42c: 0x0  nop
    ctx->pc = 0x31c42cu;
    // NOP
    // 0x31c430: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x31c430u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31c434: 0x24030014  addiu       $v1, $zero, 0x14
    ctx->pc = 0x31c434u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x31c438: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x31c438u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x31c43c: 0xc33018  mult        $a2, $a2, $v1
    ctx->pc = 0x31c43cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x31c440: 0x528c0  sll         $a1, $a1, 3
    ctx->pc = 0x31c440u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x31c444: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x31c444u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x31c448: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x31c448u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x31c44c: 0xc33021  addu        $a2, $a2, $v1
    ctx->pc = 0x31c44cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x31c450: 0x3e00008  jr          $ra
    ctx->pc = 0x31C450u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31C454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31C450u;
        // 0x31c454: 0xe4cc0004  swc1        $f12, 0x4($a2) (Delay Slot)
        { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 4), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31C450u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31C458u;
    // 0x31c458: 0x24020014  addiu       $v0, $zero, 0x14
    ctx->pc = 0x31c458u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x31c45c: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x31c45cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x31c460: 0xc23018  mult        $a2, $a2, $v0
    ctx->pc = 0x31c460u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x31c464: 0x528c0  sll         $a1, $a1, 3
    ctx->pc = 0x31c464u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x31c468: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x31c468u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x31c46c: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x31c46cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x31c470: 0xc23021  addu        $a2, $a2, $v0
    ctx->pc = 0x31c470u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x31c474: 0x3e00008  jr          $ra
    ctx->pc = 0x31C474u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31C478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31C474u;
        // 0x31c478: 0xc4c00004  lwc1        $f0, 0x4($a2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31C474u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31C47Cu;
    // 0x31c47c: 0x0  nop
    ctx->pc = 0x31c47cu;
    // NOP
    // 0x31c480: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x31c480u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x31c484: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x31c484u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x31c488: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x31c488u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31c48c: 0x24030014  addiu       $v1, $zero, 0x14
    ctx->pc = 0x31c48cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x31c490: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x31c490u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x31c494: 0x460c0003  div.s       $f0, $f0, $f12
    ctx->pc = 0x31c494u;
    { if (ctx->f[12] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[12]); }
    // 0x31c498: 0xc33018  mult        $a2, $a2, $v1
    ctx->pc = 0x31c498u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x31c49c: 0x528c0  sll         $a1, $a1, 3
    ctx->pc = 0x31c49cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x31c4a0: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x31c4a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x31c4a4: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x31c4a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x31c4a8: 0xc33021  addu        $a2, $a2, $v1
    ctx->pc = 0x31c4a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x31c4ac: 0xe4c0000c  swc1        $f0, 0xC($a2)
    ctx->pc = 0x31c4acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 12), bits); }
    // 0x31c4b0: 0x3e00008  jr          $ra
    ctx->pc = 0x31C4B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31C4B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31C4B0u;
        // 0x31c4b4: 0xe4cc0008  swc1        $f12, 0x8($a2) (Delay Slot)
        { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 8), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31C4B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31C4B8u;
    // 0x31c4b8: 0x24020014  addiu       $v0, $zero, 0x14
    ctx->pc = 0x31c4b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x31c4bc: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x31c4bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x31c4c0: 0xc23018  mult        $a2, $a2, $v0
    ctx->pc = 0x31c4c0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x31c4c4: 0x528c0  sll         $a1, $a1, 3
    ctx->pc = 0x31c4c4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x31c4c8: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x31c4c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x31c4cc: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x31c4ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x31c4d0: 0xc23021  addu        $a2, $a2, $v0
    ctx->pc = 0x31c4d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x31c4d4: 0x3e00008  jr          $ra
    ctx->pc = 0x31C4D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31C4D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31C4D4u;
        // 0x31c4d8: 0xc4c00008  lwc1        $f0, 0x8($a2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31C4D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31C4DCu;
    // 0x31c4dc: 0x0  nop
    ctx->pc = 0x31c4dcu;
    // NOP
    ctx->pc = 0x31c4e0u;
}
