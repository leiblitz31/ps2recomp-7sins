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

// Function: sub_002F6838
// Address: 0x2f6838 - 0x2f6958
void sub_002F6838_0x2f6838(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F6838_0x2f6838");
#endif

    switch (ctx->pc) {
        case 0x2f6868u: goto label_2f6868;
        case 0x2f6880u: goto label_2f6880;
        case 0x2f688cu: goto label_2f688c;
        case 0x2f6898u: goto label_2f6898;
        case 0x2f68a0u: goto label_2f68a0;
        case 0x2f68a8u: goto label_2f68a8;
        case 0x2f68b8u: goto label_2f68b8;
        case 0x2f68d8u: goto label_2f68d8;
        case 0x2f6908u: goto label_2f6908;
        case 0x2f6910u: goto label_2f6910;
        case 0x2f693cu: goto label_2f693c;
        default: break;
    }

    ctx->pc = 0x2f6838u;

    // 0x2f6838: 0x3c02004f  lui         $v0, 0x4F
    ctx->pc = 0x2f6838u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)79 << 16));
    // 0x2f683c: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2f683cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2f6840: 0x8c43ef14  lw          $v1, -0x10EC($v0)
    ctx->pc = 0x2f6840u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x4EEF14u));
    // 0x2f6844: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2f6844u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2f6848: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x2F6848u;
    {
        const bool branch_taken_0x2f6848 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F684Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F6848u;
        // 0x2f684c: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f6848) {
            ctx->pc = 0x2F6870u;
            goto label_2f6870;
        }
    }
    ctx->pc = 0x2F6850u;
    // 0x2f6850: 0x3c03004f  lui         $v1, 0x4F
    ctx->pc = 0x2f6850u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)79 << 16));
    // 0x2f6854: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2f6854u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2f6858: 0xac62ef60  sw          $v0, -0x10A0($v1)
    ctx->pc = 0x2f6858u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x4EEF60u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x4EEF60u, _value); } while (0);
    // 0x2f685c: 0x3c10004f  lui         $s0, 0x4F
    ctx->pc = 0x2f685cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)79 << 16));
    // 0x2f6860: 0xc0bf6e0  jal         func_2FDB80
    ctx->pc = 0x2F6860u;
    SET_GPR_U32(ctx, 31, 0x2F6868u);
    ctx->pc = 0x2F6864u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F6860u;
    // 0x2f6864: 0x8e04ef20  lw          $a0, -0x10E0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294962976)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FDB80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FDB80u, 0x2F6860u, 0x2F6868u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F6868u;
label_2f6868:
    // 0x2f6868: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2F6868u;
    {
        const bool branch_taken_0x2f6868 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F686Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F6868u;
        // 0x2f686c: 0x3c02004f  lui         $v0, 0x4F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)79 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f6868) {
            ctx->pc = 0x2F6878u;
            goto label_2f6878;
        }
    }
    ctx->pc = 0x2F6870u;
label_2f6870:
    // 0x2f6870: 0x3c10004f  lui         $s0, 0x4F
    ctx->pc = 0x2f6870u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)79 << 16));
    // 0x2f6874: 0x3c02004f  lui         $v0, 0x4F
    ctx->pc = 0x2f6874u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)79 << 16));
label_2f6878:
    // 0x2f6878: 0xc0bf6dc  jal         func_2FDB70
    ctx->pc = 0x2F6878u;
    SET_GPR_U32(ctx, 31, 0x2F6880u);
    ctx->pc = 0x2F687Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F6878u;
    // 0x2f687c: 0x8c44ef28  lw          $a0, -0x10D8($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294962984)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FDB70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FDB70u, 0x2F6878u, 0x2F6880u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F6880u;
label_2f6880:
    // 0x2f6880: 0x3c03004f  lui         $v1, 0x4F
    ctx->pc = 0x2f6880u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)79 << 16));
    // 0x2f6884: 0xc0bf6dc  jal         func_2FDB70
    ctx->pc = 0x2F6884u;
    SET_GPR_U32(ctx, 31, 0x2F688Cu);
    ctx->pc = 0x2F6888u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F6884u;
    // 0x2f6888: 0x8c64ef2c  lw          $a0, -0x10D4($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294962988)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FDB70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FDB70u, 0x2F6884u, 0x2F688Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F688Cu;
label_2f688c:
    // 0x2f688c: 0x3c03004f  lui         $v1, 0x4F
    ctx->pc = 0x2f688cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)79 << 16));
    // 0x2f6890: 0xc0bf6dc  jal         func_2FDB70
    ctx->pc = 0x2F6890u;
    SET_GPR_U32(ctx, 31, 0x2F6898u);
    ctx->pc = 0x2F6894u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F6890u;
    // 0x2f6894: 0x8c64ef30  lw          $a0, -0x10D0($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294962992)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FDB70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FDB70u, 0x2F6890u, 0x2F6898u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F6898u;
label_2f6898:
    // 0x2f6898: 0xc0bf6dc  jal         func_2FDB70
    ctx->pc = 0x2F6898u;
    SET_GPR_U32(ctx, 31, 0x2F68A0u);
    ctx->pc = 0x2F689Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F6898u;
    // 0x2f689c: 0x8e04ef20  lw          $a0, -0x10E0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294962976)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FDB70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FDB70u, 0x2F6898u, 0x2F68A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F68A0u;
label_2f68a0:
    // 0x2f68a0: 0xc0c1f08  jal         func_307C20
    ctx->pc = 0x2F68A0u;
    SET_GPR_U32(ctx, 31, 0x2F68A8u);
    ctx->pc = 0x307C20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x307C20u, 0x2F68A0u, 0x2F68A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F68A8u;
label_2f68a8:
    // 0x2f68a8: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x2f68a8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x2f68ac: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2f68acu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f68b0: 0xc0c0348  jal         func_300D20
    ctx->pc = 0x2F68B0u;
    SET_GPR_U32(ctx, 31, 0x2F68B8u);
    ctx->pc = 0x2F68B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F68B0u;
    // 0x2f68b4: 0x34840012  ori         $a0, $a0, 0x12 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)18);
    ctx->in_delay_slot = false;
    ctx->pc = 0x300D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x300D20u, 0x2F68B0u, 0x2F68B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F68B8u;
label_2f68b8:
    // 0x2f68b8: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2F68B8u;
    {
        const bool branch_taken_0x2f68b8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F68BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F68B8u;
        // 0x2f68bc: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f68b8) {
            ctx->pc = 0x2F68CCu;
            goto label_2f68cc;
        }
    }
    ctx->pc = 0x2F68C0u;
    // 0x2f68c0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2f68c0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2f68c4: 0x80c1f1c  j           func_307C70
    ctx->pc = 0x2F68C4u;
    ctx->pc = 0x2F68C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F68C4u;
    // 0x2f68c8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x307C70u;
    sub_00307C70_0x307c70(rdram, ctx, runtime); return;
    ctx->pc = 0x2F68CCu;
label_2f68cc:
    // 0x2f68cc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2f68ccu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2f68d0: 0x3e00008  jr          $ra
    ctx->pc = 0x2F68D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F68D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F68D0u;
        // 0x2f68d4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F68D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F68D8u;
label_2f68d8:
    // 0x2f68d8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2f68d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2f68dc: 0x3c02004f  lui         $v0, 0x4F
    ctx->pc = 0x2f68dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)79 << 16));
    // 0x2f68e0: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x2f68e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2f68e4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2f68e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2f68e8: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2f68e8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f68ec: 0x8c43ef48  lw          $v1, -0x10B8($v0)
    ctx->pc = 0x2f68ecu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x4EEF48u));
    // 0x2f68f0: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x2f68f0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f68f4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2f68f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x2f68f8: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2F68F8u;
    {
        const bool branch_taken_0x2f68f8 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x2F68FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F68F8u;
        // 0x2f68fc: 0xffb10010  sd          $s1, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f68f8) {
            ctx->pc = 0x2F6908u;
            goto label_2f6908;
        }
    }
    ctx->pc = 0x2F6900u;
    // 0x2f6900: 0xc0bda6c  jal         func_2F69B0
    ctx->pc = 0x2F6900u;
    SET_GPR_U32(ctx, 31, 0x2F6908u);
    ctx->pc = 0x2F69B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F69B0u, 0x2F6900u, 0x2F6908u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F6908u;
label_2f6908:
    // 0x2f6908: 0xc0c1f08  jal         func_307C20
    ctx->pc = 0x2F6908u;
    SET_GPR_U32(ctx, 31, 0x2F6910u);
    ctx->pc = 0x307C20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x307C20u, 0x2F6908u, 0x2F6910u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F6910u;
label_2f6910:
    // 0x2f6910: 0x3c050061  lui         $a1, 0x61
    ctx->pc = 0x2f6910u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)97 << 16));
    // 0x2f6914: 0x3c040061  lui         $a0, 0x61
    ctx->pc = 0x2f6914u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)97 << 16));
    // 0x2f6918: 0x8cb1c388  lw          $s1, -0x3C78($a1)
    ctx->pc = 0x2f6918u;
    SET_GPR_S32(ctx, 17, (int32_t)FAST_READ32(0x60C388u));
    // 0x2f691c: 0x3c030061  lui         $v1, 0x61
    ctx->pc = 0x2f691cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)97 << 16));
    // 0x2f6920: 0xac90c390  sw          $s0, -0x3C70($a0)
    ctx->pc = 0x2f6920u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 16)); ps2TraceGuestWrite(rdram, 0x60C390u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x60C390u, _value); } while (0);
    // 0x2f6924: 0xacb2c388  sw          $s2, -0x3C78($a1)
    ctx->pc = 0x2f6924u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 18)); ps2TraceGuestWrite(rdram, 0x60C388u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x60C388u, _value); } while (0);
    // 0x2f6928: 0xac7cc38c  sw          $gp, -0x3C74($v1)
    ctx->pc = 0x2f6928u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 28)); ps2TraceGuestWrite(rdram, 0x60C38Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x60C38Cu, _value); } while (0);
    // 0x2f692c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2F692Cu;
    {
        const bool branch_taken_0x2f692c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F6930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F692Cu;
        // 0x2f6930: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f692c) {
            ctx->pc = 0x2F6940u;
            goto label_2f6940;
        }
    }
    ctx->pc = 0x2F6934u;
    // 0x2f6934: 0xc0c1f1c  jal         func_307C70
    ctx->pc = 0x2F6934u;
    SET_GPR_U32(ctx, 31, 0x2F693Cu);
    ctx->pc = 0x307C70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x307C70u, 0x2F6934u, 0x2F693Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F693Cu;
label_2f693c:
    // 0x2f693c: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x2f693cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2f6940:
    // 0x2f6940: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2f6940u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2f6944: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2f6944u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2f6948: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2f6948u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2f694c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2f694cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2f6950: 0x3e00008  jr          $ra
    ctx->pc = 0x2F6950u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F6954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F6950u;
        // 0x2f6954: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F6950u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F6958u;
}
