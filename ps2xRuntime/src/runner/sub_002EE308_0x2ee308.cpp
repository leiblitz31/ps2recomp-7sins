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

// Function: sub_002EE308
// Address: 0x2ee308 - 0x2ee438
void sub_002EE308_0x2ee308(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002EE308_0x2ee308");
#endif

    switch (ctx->pc) {
        case 0x2ee360u: goto label_2ee360;
        case 0x2ee384u: goto label_2ee384;
        case 0x2ee3a8u: goto label_2ee3a8;
        case 0x2ee3c0u: goto label_2ee3c0;
        case 0x2ee3f0u: goto label_2ee3f0;
        case 0x2ee40cu: goto label_2ee40c;
        default: break;
    }

    ctx->pc = 0x2ee308u;

    // 0x2ee308: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2ee308u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2ee30c: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x2ee30cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x2ee310: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x2ee310u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x2ee314: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x2ee314u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ee318: 0x26830008  addiu       $v1, $s4, 0x8
    ctx->pc = 0x2ee318u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 8));
    // 0x2ee31c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2ee31cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ee320: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x2ee320u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x2ee324: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2ee324u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2ee328: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2ee328u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2ee32c: 0x100882d  daddu       $s1, $t0, $zero
    ctx->pc = 0x2ee32cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ee330: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2ee330u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2ee334: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x2ee334u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ee338: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x2ee338u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x2ee33c: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x2ee33cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ee340: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x2ee340u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x2ee344: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2EE344u;
    {
        const bool branch_taken_0x2ee344 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ee344) {
            ctx->pc = 0x2EE348u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EE344u;
            // 0x2ee348: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EE34Cu;
            goto label_2ee34c;
        }
    }
    ctx->pc = 0x2EE34Cu;
label_2ee34c:
    // 0x2ee34c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x2ee34cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ee350: 0x1812  mflo        $v1
    ctx->pc = 0x2ee350u;
    SET_GPR_U64(ctx, 3, ctx->lo);
    // 0x2ee354: 0xe3102a  slt         $v0, $a3, $v1
    ctx->pc = 0x2ee354u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2ee358: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2EE358u;
    {
        const bool branch_taken_0x2ee358 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EE35Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EE358u;
        // 0x2ee35c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ee358) {
            ctx->pc = 0x2EE37Cu;
            goto label_2ee37c;
        }
    }
    ctx->pc = 0x2EE360u;
label_2ee360:
    // 0x2ee360: 0x73840  sll         $a3, $a3, 1
    ctx->pc = 0x2ee360u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
    // 0x2ee364: 0xe3102a  slt         $v0, $a3, $v1
    ctx->pc = 0x2ee364u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2ee368: 0x0  nop
    ctx->pc = 0x2ee368u;
    // NOP
    // 0x2ee36c: 0x0  nop
    ctx->pc = 0x2ee36cu;
    // NOP
    // 0x2ee370: 0x0  nop
    ctx->pc = 0x2ee370u;
    // NOP
    // 0x2ee374: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2EE374u;
    {
        const bool branch_taken_0x2ee374 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2EE378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EE374u;
        // 0x2ee378: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ee374) {
            ctx->pc = 0x2EE360u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2ee360;
        }
    }
    ctx->pc = 0x2EE37Cu;
label_2ee37c:
    // 0x2ee37c: 0xc0bb84a  jal         func_2EE128
    ctx->pc = 0x2EE37Cu;
    SET_GPR_U32(ctx, 31, 0x2EE384u);
    ctx->pc = 0x2EE380u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EE37Cu;
    // 0x2ee380: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EE128u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EE128u, 0x2EE37Cu, 0x2EE384u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EE384u;
label_2ee384:
    // 0x2ee384: 0x2a43000a  slti        $v1, $s2, 0xA
    ctx->pc = 0x2ee384u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)10) ? 1 : 0);
    // 0x2ee388: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2ee388u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ee38c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2ee38cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ee390: 0xacb10014  sw          $s1, 0x14($a1)
    ctx->pc = 0x2ee390u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 20), GPR_U32(ctx, 17));
    // 0x2ee394: 0x24110009  addiu       $s1, $zero, 0x9
    ctx->pc = 0x2ee394u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x2ee398: 0x1460000f  bnez        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x2EE398u;
    {
        const bool branch_taken_0x2ee398 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2EE39Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EE398u;
        // 0x2ee39c: 0xaca20010  sw          $v0, 0x10($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ee398) {
            ctx->pc = 0x2EE3D8u;
            goto label_2ee3d8;
        }
    }
    ctx->pc = 0x2EE3A0u;
    // 0x2ee3a0: 0x26100009  addiu       $s0, $s0, 0x9
    ctx->pc = 0x2ee3a0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 9));
    // 0x2ee3a4: 0x82070000  lb          $a3, 0x0($s0)
    ctx->pc = 0x2ee3a4u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
label_2ee3a8:
    // 0x2ee3a8: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x2ee3a8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x2ee3ac: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2ee3acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ee3b0: 0x2406000a  addiu       $a2, $zero, 0xA
    ctx->pc = 0x2ee3b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x2ee3b4: 0x24e7ffd0  addiu       $a3, $a3, -0x30
    ctx->pc = 0x2ee3b4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967248));
    // 0x2ee3b8: 0xc0bb880  jal         func_2EE200
    ctx->pc = 0x2EE3B8u;
    SET_GPR_U32(ctx, 31, 0x2EE3C0u);
    ctx->pc = 0x2EE3BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EE3B8u;
    // 0x2ee3bc: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EE200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EE200u, 0x2EE3B8u, 0x2EE3C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EE3C0u;
label_2ee3c0:
    // 0x2ee3c0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2ee3c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ee3c4: 0x232102a  slt         $v0, $s1, $s2
    ctx->pc = 0x2ee3c4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x2ee3c8: 0x5440fff7  bnel        $v0, $zero, . + 4 + (-0x9 << 2)
    ctx->pc = 0x2EE3C8u;
    {
        const bool branch_taken_0x2ee3c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ee3c8) {
            ctx->pc = 0x2EE3CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EE3C8u;
            // 0x2ee3cc: 0x82070000  lb          $a3, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EE3A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2ee3a8;
        }
    }
    ctx->pc = 0x2EE3D0u;
    // 0x2ee3d0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2EE3D0u;
    {
        const bool branch_taken_0x2ee3d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EE3D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EE3D0u;
        // 0x2ee3d4: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ee3d0) {
            ctx->pc = 0x2EE3DCu;
            goto label_2ee3dc;
        }
    }
    ctx->pc = 0x2EE3D8u;
label_2ee3d8:
    // 0x2ee3d8: 0x2610000a  addiu       $s0, $s0, 0xA
    ctx->pc = 0x2ee3d8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 10));
label_2ee3dc:
    // 0x2ee3dc: 0x234102a  slt         $v0, $s1, $s4
    ctx->pc = 0x2ee3dcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
    // 0x2ee3e0: 0x5040000d  beql        $v0, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x2EE3E0u;
    {
        const bool branch_taken_0x2ee3e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ee3e0) {
            ctx->pc = 0x2EE3E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EE3E0u;
            // 0x2ee3e4: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EE418u;
            goto label_2ee418;
        }
    }
    ctx->pc = 0x2EE3E8u;
    // 0x2ee3e8: 0x2918823  subu        $s1, $s4, $s1
    ctx->pc = 0x2ee3e8u;
    SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 20), GPR_U32(ctx, 17)));
    // 0x2ee3ec: 0x0  nop
    ctx->pc = 0x2ee3ecu;
    // NOP
label_2ee3f0:
    // 0x2ee3f0: 0x82070000  lb          $a3, 0x0($s0)
    ctx->pc = 0x2ee3f0u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2ee3f4: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x2ee3f4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x2ee3f8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2ee3f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ee3fc: 0x2406000a  addiu       $a2, $zero, 0xA
    ctx->pc = 0x2ee3fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x2ee400: 0x24e7ffd0  addiu       $a3, $a3, -0x30
    ctx->pc = 0x2ee400u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967248));
    // 0x2ee404: 0xc0bb880  jal         func_2EE200
    ctx->pc = 0x2EE404u;
    SET_GPR_U32(ctx, 31, 0x2EE40Cu);
    ctx->pc = 0x2EE408u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EE404u;
    // 0x2ee408: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EE200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EE200u, 0x2EE404u, 0x2EE40Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EE40Cu;
label_2ee40c:
    // 0x2ee40c: 0x1620fff8  bnez        $s1, . + 4 + (-0x8 << 2)
    ctx->pc = 0x2EE40Cu;
    {
        const bool branch_taken_0x2ee40c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x2EE410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EE40Cu;
        // 0x2ee410: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ee40c) {
            ctx->pc = 0x2EE3F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2ee3f0;
        }
    }
    ctx->pc = 0x2EE414u;
    // 0x2ee414: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2ee414u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2ee418:
    // 0x2ee418: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x2ee418u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ee41c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2ee41cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2ee420: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2ee420u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ee424: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x2ee424u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2ee428: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x2ee428u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2ee42c: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x2ee42cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2ee430: 0x3e00008  jr          $ra
    ctx->pc = 0x2EE430u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2EE434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EE430u;
        // 0x2ee434: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2EE430u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2EE438u;
}
