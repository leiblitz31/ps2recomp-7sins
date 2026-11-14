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

// Function: sub_00310230
// Address: 0x310230 - 0x3103d8
void sub_00310230_0x310230(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00310230_0x310230");
#endif

    switch (ctx->pc) {
        case 0x310284u: goto label_310284;
        case 0x310294u: goto label_310294;
        case 0x3102b8u: goto label_3102b8;
        case 0x3102dcu: goto label_3102dc;
        case 0x310308u: goto label_310308;
        case 0x310328u: goto label_310328;
        case 0x310350u: goto label_310350;
        case 0x310360u: goto label_310360;
        case 0x310388u: goto label_310388;
        case 0x3103acu: goto label_3103ac;
        default: break;
    }

    ctx->pc = 0x310230u;

    // 0x310230: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x310230u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x310234: 0x24020334  addiu       $v0, $zero, 0x334
    ctx->pc = 0x310234u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 820));
    // 0x310238: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x310238u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x31023c: 0x3c030061  lui         $v1, 0x61
    ctx->pc = 0x31023cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)97 << 16));
    // 0x310240: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x310240u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x310244: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x310244u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x310248: 0x2222018  mult        $a0, $s1, $v0
    ctx->pc = 0x310248u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x31024c: 0x24667e40  addiu       $a2, $v1, 0x7E40
    ctx->pc = 0x31024cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 32320));
    // 0x310250: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x310250u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x310254: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x310254u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x310258: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x310258u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x31025c: 0x861021  addu        $v0, $a0, $a2
    ctx->pc = 0x31025cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x310260: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x310260u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x310264: 0x10600021  beqz        $v1, . + 4 + (0x21 << 2)
    ctx->pc = 0x310264u;
    {
        const bool branch_taken_0x310264 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x310268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x310264u;
        // 0x310268: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x310264) {
            ctx->pc = 0x3102ECu;
            goto label_3102ec;
        }
    }
    ctx->pc = 0x31026Cu;
    // 0x31026c: 0xc41021  addu        $v0, $a2, $a0
    ctx->pc = 0x31026cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x310270: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x310270u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x310274: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x310274u;
    {
        const bool branch_taken_0x310274 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x310274) {
            ctx->pc = 0x31028Cu;
            goto label_31028c;
        }
    }
    ctx->pc = 0x31027Cu;
    // 0x31027c: 0xc0c419c  jal         func_310670
    ctx->pc = 0x31027Cu;
    SET_GPR_U32(ctx, 31, 0x310284u);
    ctx->pc = 0x310280u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31027Cu;
    // 0x310280: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x310670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x310670u, 0x31027Cu, 0x310284u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x310284u;
label_310284:
    // 0x310284: 0x4400019  bltz        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x310284u;
    {
        const bool branch_taken_0x310284 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x310288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x310284u;
        // 0x310288: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x310284) {
            ctx->pc = 0x3102ECu;
            goto label_3102ec;
        }
    }
    ctx->pc = 0x31028Cu;
label_31028c:
    // 0x31028c: 0xc0c41b2  jal         func_3106C8
    ctx->pc = 0x31028Cu;
    SET_GPR_U32(ctx, 31, 0x310294u);
    ctx->pc = 0x310290u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31028Cu;
    // 0x310290: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3106C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3106C8u, 0x31028Cu, 0x310294u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x310294u;
label_310294:
    // 0x310294: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x310294u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x310298: 0x92060002  lbu         $a2, 0x2($s0)
    ctx->pc = 0x310298u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x31029c: 0x50c00010  beql        $a2, $zero, . + 4 + (0x10 << 2)
    ctx->pc = 0x31029Cu;
    {
        const bool branch_taken_0x31029c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x31029c) {
            ctx->pc = 0x3102A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31029Cu;
            // 0x3102a0: 0x8e020004  lw          $v0, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3102E0u;
            goto label_3102e0;
        }
    }
    ctx->pc = 0x3102A4u;
    // 0x3102a4: 0x2605001c  addiu       $a1, $s0, 0x1C
    ctx->pc = 0x3102a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 28));
    // 0x3102a8: 0x50a0000d  beql        $a1, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x3102A8u;
    {
        const bool branch_taken_0x3102a8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x3102a8) {
            ctx->pc = 0x3102ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3102A8u;
            // 0x3102ac: 0x8e020004  lw          $v0, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3102E0u;
            goto label_3102e0;
        }
    }
    ctx->pc = 0x3102B0u;
    // 0x3102b0: 0xc0bb778  jal         func_2EDDE0
    ctx->pc = 0x3102B0u;
    SET_GPR_U32(ctx, 31, 0x3102B8u);
    ctx->pc = 0x3102B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3102B0u;
    // 0x3102b4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EDDE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDDE0u, 0x3102B0u, 0x3102B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3102B8u;
label_3102b8:
    // 0x3102b8: 0x24030334  addiu       $v1, $zero, 0x334
    ctx->pc = 0x3102b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 820));
    // 0x3102bc: 0x92040002  lbu         $a0, 0x2($s0)
    ctx->pc = 0x3102bcu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x3102c0: 0x2231818  mult        $v1, $s1, $v1
    ctx->pc = 0x3102c0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x3102c4: 0x3c050061  lui         $a1, 0x61
    ctx->pc = 0x3102c4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)97 << 16));
    // 0x3102c8: 0x2484001c  addiu       $a0, $a0, 0x1C
    ctx->pc = 0x3102c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 28));
    // 0x3102cc: 0x24a57e54  addiu       $a1, $a1, 0x7E54
    ctx->pc = 0x3102ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32340));
    // 0x3102d0: 0x2042021  addu        $a0, $s0, $a0
    ctx->pc = 0x3102d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
    // 0x3102d4: 0xc0c41fe  jal         func_3107F8
    ctx->pc = 0x3102D4u;
    SET_GPR_U32(ctx, 31, 0x3102DCu);
    ctx->pc = 0x3102D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3102D4u;
    // 0x3102d8: 0x652821  addu        $a1, $v1, $a1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3107F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3107F8u, 0x3102D4u, 0x3102DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3102DCu;
label_3102dc:
    // 0x3102dc: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x3102dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_3102e0:
    // 0x3102e0: 0x54400002  bnel        $v0, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x3102E0u;
    {
        const bool branch_taken_0x3102e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3102e0) {
            ctx->pc = 0x3102E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3102E0u;
            // 0x3102e4: 0x92020002  lbu         $v0, 0x2($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3102ECu;
            goto label_3102ec;
        }
    }
    ctx->pc = 0x3102E8u;
    // 0x3102e8: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x3102e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_3102ec:
    // 0x3102ec: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x3102ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3102f0: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x3102f0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3102f4: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x3102f4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3102f8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3102f8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3102fc: 0x3e00008  jr          $ra
    ctx->pc = 0x3102FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x310300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3102FCu;
        // 0x310300: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3102FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x310304u;
    // 0x310304: 0x0  nop
    ctx->pc = 0x310304u;
    // NOP
label_310308:
    // 0x310308: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x310308u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x31030c: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x31030cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x310310: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x310310u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x310314: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x310314u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x310318: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x310318u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x31031c: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x31031cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x310320: 0xc0c40f6  jal         func_3103D8
    ctx->pc = 0x310320u;
    SET_GPR_U32(ctx, 31, 0x310328u);
    ctx->pc = 0x310324u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x310320u;
    // 0x310324: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3103D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3103D8u, 0x310320u, 0x310328u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x310328u;
label_310328:
    // 0x310328: 0x24030334  addiu       $v1, $zero, 0x334
    ctx->pc = 0x310328u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 820));
    // 0x31032c: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x31032cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
    // 0x310330: 0x2231818  mult        $v1, $s1, $v1
    ctx->pc = 0x310330u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x310334: 0x24427e40  addiu       $v0, $v0, 0x7E40
    ctx->pc = 0x310334u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32320));
    // 0x310338: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x310338u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x31033c: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x31033cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x310340: 0x14800005  bnez        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x310340u;
    {
        const bool branch_taken_0x310340 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x310340) {
            ctx->pc = 0x310358u;
            goto label_310358;
        }
    }
    ctx->pc = 0x310348u;
    // 0x310348: 0xc0c419c  jal         func_310670
    ctx->pc = 0x310348u;
    SET_GPR_U32(ctx, 31, 0x310350u);
    ctx->pc = 0x31034Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x310348u;
    // 0x31034c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x310670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x310670u, 0x310348u, 0x310350u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x310350u;
label_310350:
    // 0x310350: 0x440001a  bltz        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x310350u;
    {
        const bool branch_taken_0x310350 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x310354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x310350u;
        // 0x310354: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x310350) {
            ctx->pc = 0x3103BCu;
            goto label_3103bc;
        }
    }
    ctx->pc = 0x310358u;
label_310358:
    // 0x310358: 0xc0c41cc  jal         func_310730
    ctx->pc = 0x310358u;
    SET_GPR_U32(ctx, 31, 0x310360u);
    ctx->pc = 0x31035Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x310358u;
    // 0x31035c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x310730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x310730u, 0x310358u, 0x310360u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x310360u;
label_310360:
    // 0x310360: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x310360u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x310364: 0x92060003  lbu         $a2, 0x3($s0)
    ctx->pc = 0x310364u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 3)));
    // 0x310368: 0x10c00010  beqz        $a2, . + 4 + (0x10 << 2)
    ctx->pc = 0x310368u;
    {
        const bool branch_taken_0x310368 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x31036Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x310368u;
        // 0x31036c: 0x2602001c  addiu       $v0, $s0, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 28));
        ctx->in_delay_slot = false;
        if (branch_taken_0x310368) {
            ctx->pc = 0x3103ACu;
            goto label_3103ac;
        }
    }
    ctx->pc = 0x310370u;
    // 0x310370: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x310370u;
    {
        const bool branch_taken_0x310370 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x310374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x310370u;
        // 0x310374: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x310370) {
            ctx->pc = 0x3103ACu;
            goto label_3103ac;
        }
    }
    ctx->pc = 0x310378u;
    // 0x310378: 0x92050002  lbu         $a1, 0x2($s0)
    ctx->pc = 0x310378u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x31037c: 0xb02821  addu        $a1, $a1, $s0
    ctx->pc = 0x31037cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 16)));
    // 0x310380: 0xc0bb778  jal         func_2EDDE0
    ctx->pc = 0x310380u;
    SET_GPR_U32(ctx, 31, 0x310388u);
    ctx->pc = 0x310384u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x310380u;
    // 0x310384: 0x24a5001c  addiu       $a1, $a1, 0x1C (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 28));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EDDE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDDE0u, 0x310380u, 0x310388u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x310388u;
label_310388:
    // 0x310388: 0x24030334  addiu       $v1, $zero, 0x334
    ctx->pc = 0x310388u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 820));
    // 0x31038c: 0x92040002  lbu         $a0, 0x2($s0)
    ctx->pc = 0x31038cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x310390: 0x2231818  mult        $v1, $s1, $v1
    ctx->pc = 0x310390u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x310394: 0x3c050061  lui         $a1, 0x61
    ctx->pc = 0x310394u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)97 << 16));
    // 0x310398: 0x2484001c  addiu       $a0, $a0, 0x1C
    ctx->pc = 0x310398u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 28));
    // 0x31039c: 0x24a57e54  addiu       $a1, $a1, 0x7E54
    ctx->pc = 0x31039cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32340));
    // 0x3103a0: 0x2042021  addu        $a0, $s0, $a0
    ctx->pc = 0x3103a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
    // 0x3103a4: 0xc0c41fe  jal         func_3107F8
    ctx->pc = 0x3103A4u;
    SET_GPR_U32(ctx, 31, 0x3103ACu);
    ctx->pc = 0x3103A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3103A4u;
    // 0x3103a8: 0x652821  addu        $a1, $v1, $a1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3107F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3107F8u, 0x3103A4u, 0x3103ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3103ACu;
label_3103ac:
    // 0x3103ac: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x3103acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x3103b0: 0x54400002  bnel        $v0, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x3103B0u;
    {
        const bool branch_taken_0x3103b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3103b0) {
            ctx->pc = 0x3103B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3103B0u;
            // 0x3103b4: 0x92020003  lbu         $v0, 0x3($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 3)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3103BCu;
            goto label_3103bc;
        }
    }
    ctx->pc = 0x3103B8u;
    // 0x3103b8: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x3103b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_3103bc:
    // 0x3103bc: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x3103bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3103c0: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x3103c0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3103c4: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x3103c4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3103c8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3103c8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3103cc: 0x3e00008  jr          $ra
    ctx->pc = 0x3103CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3103D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3103CCu;
        // 0x3103d0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3103CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3103D4u;
    // 0x3103d4: 0x0  nop
    ctx->pc = 0x3103d4u;
    // NOP
    ctx->pc = 0x3103d8u;
}
