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

// Function: sub_00429700
// Address: 0x429700 - 0x429830
void sub_00429700_0x429700(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00429700_0x429700");
#endif

    switch (ctx->pc) {
        case 0x42972cu: goto label_42972c;
        case 0x429750u: goto label_429750;
        case 0x429764u: goto label_429764;
        case 0x42977cu: goto label_42977c;
        case 0x429798u: goto label_429798;
        case 0x4297a4u: goto label_4297a4;
        case 0x4297b0u: goto label_4297b0;
        case 0x429804u: goto label_429804;
        case 0x429814u: goto label_429814;
        default: break;
    }

    ctx->pc = 0x429700u;

    // 0x429700: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x429700u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x429704: 0x2782beac  addiu       $v0, $gp, -0x4154
    ctx->pc = 0x429704u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294950572));
    // 0x429708: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x429708u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x42970c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x42970cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x429710: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x429710u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x429714: 0xac5c0000  sw          $gp, 0x0($v0)
    ctx->pc = 0x429714u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 28));
    // 0x429718: 0x3c050042  lui         $a1, 0x42
    ctx->pc = 0x429718u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)66 << 16));
    // 0x42971c: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x42971cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x429720: 0x24a579a8  addiu       $a1, $a1, 0x79A8
    ctx->pc = 0x429720u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 31144));
    // 0x429724: 0xc0bf610  jal         func_2FD840
    ctx->pc = 0x429724u;
    SET_GPR_U32(ctx, 31, 0x42972Cu);
    ctx->pc = 0x429728u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x429724u;
    // 0x429728: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FD840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FD840u, 0x429724u, 0x42972Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x42972Cu;
label_42972c:
    // 0x42972c: 0x2411ffff  addiu       $s1, $zero, -0x1
    ctx->pc = 0x42972cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x429730: 0x10510039  beq         $v0, $s1, . + 4 + (0x39 << 2)
    ctx->pc = 0x429730u;
    {
        const bool branch_taken_0x429730 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 17));
        ctx->pc = 0x429734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x429730u;
        // 0x429734: 0xaf82adf0  sw          $v0, -0x5210($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294946288), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x429730) {
            ctx->pc = 0x429818u;
            goto label_429818;
        }
    }
    ctx->pc = 0x429738u;
    // 0x429738: 0x3c020042  lui         $v0, 0x42
    ctx->pc = 0x429738u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
    // 0x42973c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x42973cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x429740: 0x24507438  addiu       $s0, $v0, 0x7438
    ctx->pc = 0x429740u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 29752));
    // 0x429744: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x429744u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x429748: 0xc0bf61c  jal         func_2FD870
    ctx->pc = 0x429748u;
    SET_GPR_U32(ctx, 31, 0x429750u);
    ctx->pc = 0x42974Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x429748u;
    // 0x42974c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FD870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FD870u, 0x429748u, 0x429750u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x429750u;
label_429750:
    // 0x429750: 0x14510006  bne         $v0, $s1, . + 4 + (0x6 << 2)
    ctx->pc = 0x429750u;
    {
        const bool branch_taken_0x429750 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        ctx->pc = 0x429754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x429750u;
        // 0x429754: 0xaf82adf4  sw          $v0, -0x520C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294946292), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x429750) {
            ctx->pc = 0x42976Cu;
            goto label_42976c;
        }
    }
    ctx->pc = 0x429758u;
    // 0x429758: 0x8f85adf0  lw          $a1, -0x5210($gp)
    ctx->pc = 0x429758u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294946288)));
    // 0x42975c: 0xc0bf618  jal         func_2FD860
    ctx->pc = 0x42975Cu;
    SET_GPR_U32(ctx, 31, 0x429764u);
    ctx->pc = 0x429760u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x42975Cu;
    // 0x429760: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FD860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FD860u, 0x42975Cu, 0x429764u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x429764u;
label_429764:
    // 0x429764: 0x1000002c  b           . + 4 + (0x2C << 2)
    ctx->pc = 0x429764u;
    {
        const bool branch_taken_0x429764 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x429768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x429764u;
        // 0x429768: 0xaf91adf0  sw          $s1, -0x5210($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294946288), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x429764) {
            ctx->pc = 0x429818u;
            goto label_429818;
        }
    }
    ctx->pc = 0x42976Cu;
label_42976c:
    // 0x42976c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x42976cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x429770: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x429770u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x429774: 0xc0bf61c  jal         func_2FD870
    ctx->pc = 0x429774u;
    SET_GPR_U32(ctx, 31, 0x42977Cu);
    ctx->pc = 0x429778u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x429774u;
    // 0x429778: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FD870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FD870u, 0x429774u, 0x42977Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x42977Cu;
label_42977c:
    // 0x42977c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x42977cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x429780: 0x1211001d  beq         $s0, $s1, . + 4 + (0x1D << 2)
    ctx->pc = 0x429780u;
    {
        const bool branch_taken_0x429780 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 17));
        ctx->pc = 0x429784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x429780u;
        // 0x429784: 0xaf90adf8  sw          $s0, -0x5208($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294946296), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x429780) {
            ctx->pc = 0x4297F8u;
            goto label_4297f8;
        }
    }
    ctx->pc = 0x429788u;
    // 0x429788: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x429788u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x42978c: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x42978cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x429790: 0xc0bf9aa  jal         func_2FE6A8
    ctx->pc = 0x429790u;
    SET_GPR_U32(ctx, 31, 0x429798u);
    ctx->pc = 0x429794u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x429790u;
    // 0x429794: 0xa382bea1  sb          $v0, -0x415F($gp) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294950561), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FE6A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FE6A8u, 0x429790u, 0x429798u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x429798u;
label_429798:
    // 0x429798: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x429798u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x42979c: 0xc0bf9de  jal         func_2FE778
    ctx->pc = 0x42979Cu;
    SET_GPR_U32(ctx, 31, 0x4297A4u);
    ctx->pc = 0x4297A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x42979Cu;
    // 0x4297a0: 0xa382adfc  sb          $v0, -0x5204($gp) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294946300), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FE778u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FE778u, 0x42979Cu, 0x4297A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4297A4u;
label_4297a4:
    // 0x4297a4: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x4297a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x4297a8: 0xc0bf9de  jal         func_2FE778
    ctx->pc = 0x4297A8u;
    SET_GPR_U32(ctx, 31, 0x4297B0u);
    ctx->pc = 0x4297ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4297A8u;
    // 0x4297ac: 0xa382adfd  sb          $v0, -0x5203($gp) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294946301), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FE778u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FE778u, 0x4297A8u, 0x4297B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4297B0u;
label_4297b0:
    // 0x4297b0: 0xa382adfe  sb          $v0, -0x5202($gp)
    ctx->pc = 0x4297b0u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294946302), (uint8_t)GPR_U32(ctx, 2));
    // 0x4297b4: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x4297b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x4297b8: 0x34633820  ori         $v1, $v1, 0x3820
    ctx->pc = 0x4297b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)14368);
    // 0x4297bc: 0x3c061000  lui         $a2, 0x1000
    ctx->pc = 0x4297bcu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)4096 << 16));
    // 0x4297c0: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x4297c0u;
    SET_GPR_S32(ctx, 4, (int32_t)runtime->Load32(rdram, ctx, 0x10003820u)); // MMIO: 0x10003820
    // 0x4297c4: 0x34c6e000  ori         $a2, $a2, 0xE000
    ctx->pc = 0x4297c4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)57344);
    // 0x4297c8: 0x3c05ffff  lui         $a1, 0xFFFF
    ctx->pc = 0x4297c8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65535 << 16));
    // 0x4297cc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x4297ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4297d0: 0x34840002  ori         $a0, $a0, 0x2
    ctx->pc = 0x4297d0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)2);
    // 0x4297d4: 0x34a5f8fd  ori         $a1, $a1, 0xF8FD
    ctx->pc = 0x4297d4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)63741);
    // 0x4297d8: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x4297d8u;
    runtime->Store32(rdram, ctx, 0x10003820u, GPR_U32(ctx, 4)); // MMIO: 0x10003820
    // 0x4297dc: 0x3c011000  lui         $at, 0x1000
    ctx->pc = 0x4297dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4096 << 16));
    // 0x4297e0: 0xac243c20  sw          $a0, 0x3C20($at)
    ctx->pc = 0x4297e0u;
    runtime->Store32(rdram, ctx, 0x10003C20u, GPR_U32(ctx, 4)); // MMIO: 0x10003c20
    // 0x4297e4: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x4297e4u;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, 0x1000E000u)); // MMIO: 0x1000e000
    // 0x4297e8: 0x651824  and         $v1, $v1, $a1
    ctx->pc = 0x4297e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
    // 0x4297ec: 0xacc30000  sw          $v1, 0x0($a2)
    ctx->pc = 0x4297ecu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
    // 0x4297f0: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x4297F0u;
    {
        const bool branch_taken_0x4297f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4297F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4297F0u;
        // 0x4297f4: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4297f0) {
            ctx->pc = 0x429820u;
            goto label_429820;
        }
    }
    ctx->pc = 0x4297F8u;
label_4297f8:
    // 0x4297f8: 0x8f85adf4  lw          $a1, -0x520C($gp)
    ctx->pc = 0x4297f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294946292)));
    // 0x4297fc: 0xc0bf624  jal         func_2FD890
    ctx->pc = 0x4297FCu;
    SET_GPR_U32(ctx, 31, 0x429804u);
    ctx->pc = 0x429800u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4297FCu;
    // 0x429800: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FD890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FD890u, 0x4297FCu, 0x429804u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x429804u;
label_429804:
    // 0x429804: 0x8f85adf0  lw          $a1, -0x5210($gp)
    ctx->pc = 0x429804u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294946288)));
    // 0x429808: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x429808u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x42980c: 0xc0bf618  jal         func_2FD860
    ctx->pc = 0x42980Cu;
    SET_GPR_U32(ctx, 31, 0x429814u);
    ctx->pc = 0x429810u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x42980Cu;
    // 0x429810: 0xaf90adf4  sw          $s0, -0x520C($gp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294946292), GPR_U32(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FD860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FD860u, 0x42980Cu, 0x429814u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x429814u;
label_429814:
    // 0x429814: 0xaf90adf0  sw          $s0, -0x5210($gp)
    ctx->pc = 0x429814u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294946288), GPR_U32(ctx, 16));
label_429818:
    // 0x429818: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x429818u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x42981c: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x42981cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_429820:
    // 0x429820: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x429820u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x429824: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x429824u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x429828: 0x3e00008  jr          $ra
    ctx->pc = 0x429828u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x42982Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x429828u;
        // 0x42982c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x429828u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x429830u;
}
