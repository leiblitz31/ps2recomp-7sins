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

// Function: sub_003BC8A0
// Address: 0x3bc8a0 - 0x3bc9b0
void sub_003BC8A0_0x3bc8a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003BC8A0_0x3bc8a0");
#endif

    switch (ctx->pc) {
        case 0x3bc930u: goto label_3bc930;
        case 0x3bc990u: goto label_3bc990;
        case 0x3bc99cu: goto label_3bc99c;
        default: break;
    }

    ctx->pc = 0x3bc8a0u;

    // 0x3bc8a0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3bc8a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3bc8a4: 0x8f82ab6c  lw          $v0, -0x5494($gp)
    ctx->pc = 0x3bc8a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945644)));
    // 0x3bc8a8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3bc8a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3bc8ac: 0x18400034  blez        $v0, . + 4 + (0x34 << 2)
    ctx->pc = 0x3BC8ACu;
    {
        const bool branch_taken_0x3bc8ac = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x3BC8B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BC8ACu;
        // 0x3bc8b0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bc8ac) {
            ctx->pc = 0x3BC980u;
            goto label_3bc980;
        }
    }
    ctx->pc = 0x3BC8B4u;
    // 0x3bc8b4: 0x3c090062  lui         $t1, 0x62
    ctx->pc = 0x3bc8b4u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)98 << 16));
    // 0x3bc8b8: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x3bc8b8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3bc8bc: 0x2526dcd8  addiu       $a2, $t1, -0x2328
    ctx->pc = 0x3bc8bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 9), 4294958296));
    // 0x3bc8c0: 0x31030003  andi        $v1, $t0, 0x3
    ctx->pc = 0x3bc8c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)3);
    // 0x3bc8c4: 0x19000013  blez        $t0, . + 4 + (0x13 << 2)
    ctx->pc = 0x3BC8C4u;
    {
        const bool branch_taken_0x3bc8c4 = (GPR_S32(ctx, 8) <= 0);
        ctx->pc = 0x3BC8C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BC8C4u;
        // 0x3bc8c8: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bc8c4) {
            ctx->pc = 0x3BC914u;
            goto label_3bc914;
        }
    }
    ctx->pc = 0x3BC8CCu;
    // 0x3bc8cc: 0x50600019  beql        $v1, $zero, . + 4 + (0x19 << 2)
    ctx->pc = 0x3BC8CCu;
    {
        const bool branch_taken_0x3bc8cc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3bc8cc) {
            ctx->pc = 0x3BC8D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3BC8CCu;
            // 0x3bc8d0: 0x8ca20000  lw          $v0, 0x0($a1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3BC934u;
            goto label_3bc934;
        }
    }
    ctx->pc = 0x3BC8D4u;
    // 0x3bc8d4: 0x28620002  slti        $v0, $v1, 0x2
    ctx->pc = 0x3bc8d4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x3bc8d8: 0x5440000f  bnel        $v0, $zero, . + 4 + (0xF << 2)
    ctx->pc = 0x3BC8D8u;
    {
        const bool branch_taken_0x3bc8d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3bc8d8) {
            ctx->pc = 0x3BC8DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3BC8D8u;
            // 0x3bc8dc: 0x8ca20000  lw          $v0, 0x0($a1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3BC918u;
            goto label_3bc918;
        }
    }
    ctx->pc = 0x3BC8E0u;
    // 0x3bc8e0: 0x28620003  slti        $v0, $v1, 0x3
    ctx->pc = 0x3bc8e0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x3bc8e4: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x3BC8E4u;
    {
        const bool branch_taken_0x3bc8e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3bc8e4) {
            ctx->pc = 0x3BC8E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3BC8E4u;
            // 0x3bc8e8: 0x8ca20000  lw          $v0, 0x0($a1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3BC904u;
            goto label_3bc904;
        }
    }
    ctx->pc = 0x3BC8ECu;
    // 0x3bc8ec: 0x8d22dcd8  lw          $v0, -0x2328($t1)
    ctx->pc = 0x3bc8ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4294958296)));
    // 0x3bc8f0: 0x10440012  beq         $v0, $a0, . + 4 + (0x12 << 2)
    ctx->pc = 0x3BC8F0u;
    {
        const bool branch_taken_0x3bc8f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        ctx->pc = 0x3BC8F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BC8F0u;
        // 0x3bc8f4: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bc8f0) {
            ctx->pc = 0x3BC93Cu;
            goto label_3bc93c;
        }
    }
    ctx->pc = 0x3BC8F8u;
    // 0x3bc8f8: 0x24c60030  addiu       $a2, $a2, 0x30
    ctx->pc = 0x3bc8f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 48));
    // 0x3bc8fc: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x3bc8fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3bc900: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x3bc900u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_3bc904:
    // 0x3bc904: 0x1044000d  beq         $v0, $a0, . + 4 + (0xD << 2)
    ctx->pc = 0x3BC904u;
    {
        const bool branch_taken_0x3bc904 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        ctx->pc = 0x3BC908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BC904u;
        // 0x3bc908: 0x24a50030  addiu       $a1, $a1, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bc904) {
            ctx->pc = 0x3BC93Cu;
            goto label_3bc93c;
        }
    }
    ctx->pc = 0x3BC90Cu;
    // 0x3bc90c: 0x24c60030  addiu       $a2, $a2, 0x30
    ctx->pc = 0x3bc90cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 48));
    // 0x3bc910: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x3bc910u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_3bc914:
    // 0x3bc914: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x3bc914u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_3bc918:
    // 0x3bc918: 0x10440008  beq         $v0, $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x3BC918u;
    {
        const bool branch_taken_0x3bc918 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        ctx->pc = 0x3BC91Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BC918u;
        // 0x3bc91c: 0x24e70001  addiu       $a3, $a3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bc918) {
            ctx->pc = 0x3BC93Cu;
            goto label_3bc93c;
        }
    }
    ctx->pc = 0x3BC920u;
    // 0x3bc920: 0x24a50030  addiu       $a1, $a1, 0x30
    ctx->pc = 0x3bc920u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 48));
    // 0x3bc924: 0xe8102a  slt         $v0, $a3, $t0
    ctx->pc = 0x3bc924u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
    // 0x3bc928: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x3BC928u;
    {
        const bool branch_taken_0x3bc928 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BC92Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BC928u;
        // 0x3bc92c: 0x24c60030  addiu       $a2, $a2, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bc928) {
            ctx->pc = 0x3BC980u;
            goto label_3bc980;
        }
    }
    ctx->pc = 0x3BC930u;
label_3bc930:
    // 0x3bc930: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x3bc930u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_3bc934:
    // 0x3bc934: 0x54440003  bnel        $v0, $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3BC934u;
    {
        const bool branch_taken_0x3bc934 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        if (branch_taken_0x3bc934) {
            ctx->pc = 0x3BC938u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3BC934u;
            // 0x3bc938: 0x8ca20030  lw          $v0, 0x30($a1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3BC944u;
            goto label_3bc944;
        }
    }
    ctx->pc = 0x3BC93Cu;
label_3bc93c:
    // 0x3bc93c: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x3BC93Cu;
    {
        const bool branch_taken_0x3bc93c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BC940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BC93Cu;
        // 0x3bc940: 0xc0102d  daddu       $v0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bc93c) {
            ctx->pc = 0x3BC9A0u;
            goto label_3bc9a0;
        }
    }
    ctx->pc = 0x3BC944u;
label_3bc944:
    // 0x3bc944: 0x10440007  beq         $v0, $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x3BC944u;
    {
        const bool branch_taken_0x3bc944 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        ctx->pc = 0x3BC948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BC944u;
        // 0x3bc948: 0x24c30030  addiu       $v1, $a2, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bc944) {
            ctx->pc = 0x3BC964u;
            goto label_3bc964;
        }
    }
    ctx->pc = 0x3BC94Cu;
    // 0x3bc94c: 0x8ca20060  lw          $v0, 0x60($a1)
    ctx->pc = 0x3bc94cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 96)));
    // 0x3bc950: 0x10440004  beq         $v0, $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3BC950u;
    {
        const bool branch_taken_0x3bc950 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        ctx->pc = 0x3BC954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BC950u;
        // 0x3bc954: 0x24c30060  addiu       $v1, $a2, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bc950) {
            ctx->pc = 0x3BC964u;
            goto label_3bc964;
        }
    }
    ctx->pc = 0x3BC958u;
    // 0x3bc958: 0x8ca20090  lw          $v0, 0x90($a1)
    ctx->pc = 0x3bc958u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 144)));
    // 0x3bc95c: 0x14440003  bne         $v0, $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3BC95Cu;
    {
        const bool branch_taken_0x3bc95c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        ctx->pc = 0x3BC960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BC95Cu;
        // 0x3bc960: 0x24c30090  addiu       $v1, $a2, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 144));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bc95c) {
            ctx->pc = 0x3BC96Cu;
            goto label_3bc96c;
        }
    }
    ctx->pc = 0x3BC964u;
label_3bc964:
    // 0x3bc964: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x3BC964u;
    {
        const bool branch_taken_0x3bc964 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BC968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BC964u;
        // 0x3bc968: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bc964) {
            ctx->pc = 0x3BC9A0u;
            goto label_3bc9a0;
        }
    }
    ctx->pc = 0x3BC96Cu;
label_3bc96c:
    // 0x3bc96c: 0x24e70004  addiu       $a3, $a3, 0x4
    ctx->pc = 0x3bc96cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
    // 0x3bc970: 0x24a500c0  addiu       $a1, $a1, 0xC0
    ctx->pc = 0x3bc970u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 192));
    // 0x3bc974: 0xe8102a  slt         $v0, $a3, $t0
    ctx->pc = 0x3bc974u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
    // 0x3bc978: 0x1440ffed  bnez        $v0, . + 4 + (-0x13 << 2)
    ctx->pc = 0x3BC978u;
    {
        const bool branch_taken_0x3bc978 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3BC97Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BC978u;
        // 0x3bc97c: 0x24c600c0  addiu       $a2, $a2, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 192));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bc978) {
            ctx->pc = 0x3BC930u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3bc930;
        }
    }
    ctx->pc = 0x3BC980u;
label_3bc980:
    // 0x3bc980: 0x240201b7  addiu       $v0, $zero, 0x1B7
    ctx->pc = 0x3bc980u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 439));
    // 0x3bc984: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x3bc984u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3bc988: 0xc1035f6  jal         func_40D7D8
    ctx->pc = 0x3BC988u;
    SET_GPR_U32(ctx, 31, 0x3BC990u);
    ctx->pc = 0x3BC98Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BC988u;
    // 0x3bc98c: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D7D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D7D8u, 0x3BC988u, 0x3BC990u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BC990u;
label_3bc990:
    // 0x3bc990: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x3bc990u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3bc994: 0xc103628  jal         func_40D8A0
    ctx->pc = 0x3BC994u;
    SET_GPR_U32(ctx, 31, 0x3BC99Cu);
    ctx->pc = 0x3BC998u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BC994u;
    // 0x3bc998: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D8A0u, 0x3BC994u, 0x3BC99Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BC99Cu;
label_3bc99c:
    // 0x3bc99c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3bc99cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3bc9a0:
    // 0x3bc9a0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3bc9a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3bc9a4: 0x3e00008  jr          $ra
    ctx->pc = 0x3BC9A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3BC9A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BC9A4u;
        // 0x3bc9a8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3BC9A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3BC9ACu;
    // 0x3bc9ac: 0x0  nop
    ctx->pc = 0x3bc9acu;
    // NOP
    ctx->pc = 0x3bc9b0u;
}
