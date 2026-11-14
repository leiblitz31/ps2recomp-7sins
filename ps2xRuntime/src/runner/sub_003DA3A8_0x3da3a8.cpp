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

// Function: sub_003DA3A8
// Address: 0x3da3a8 - 0x3da4b8
void sub_003DA3A8_0x3da3a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003DA3A8_0x3da3a8");
#endif

    switch (ctx->pc) {
        case 0x3da3e8u: goto label_3da3e8;
        default: break;
    }

    ctx->pc = 0x3da3a8u;

    // 0x3da3a8: 0x94a90002  lhu         $t1, 0x2($a1)
    ctx->pc = 0x3da3a8u;
    SET_GPR_ZE32(ctx, 9, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 2)));
    // 0x3da3ac: 0x240dffff  addiu       $t5, $zero, -0x1
    ctx->pc = 0x3da3acu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x3da3b0: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x3da3b0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3da3b4: 0x240b0007  addiu       $t3, $zero, 0x7
    ctx->pc = 0x3da3b4u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x3da3b8: 0x15200003  bnez        $t1, . + 4 + (0x3 << 2)
    ctx->pc = 0x3DA3B8u;
    {
        const bool branch_taken_0x3da3b8 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 0));
        ctx->pc = 0x3DA3BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DA3B8u;
        // 0x3da3bc: 0x24080004  addiu       $t0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3da3b8) {
            ctx->pc = 0x3DA3C8u;
            goto label_3da3c8;
        }
    }
    ctx->pc = 0x3DA3C0u;
    // 0x3da3c0: 0x240b008a  addiu       $t3, $zero, 0x8A
    ctx->pc = 0x3da3c0u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 138));
    // 0x3da3c4: 0x24080003  addiu       $t0, $zero, 0x3
    ctx->pc = 0x3da3c4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_3da3c8:
    // 0x3da3c8: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x3da3c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x3da3cc: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x3da3ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x3da3d0: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x3da3d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x3da3d4: 0x4c00036  bltz        $a2, . + 4 + (0x36 << 2)
    ctx->pc = 0x3DA3D4u;
    {
        const bool branch_taken_0x3da3d4 = (GPR_S32(ctx, 6) < 0);
        ctx->pc = 0x3DA3D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DA3D4u;
        // 0x3da3d8: 0xa4430006  sh          $v1, 0x6($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 6), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3da3d4) {
            ctx->pc = 0x3DA4B0u;
            goto label_3da4b0;
        }
    }
    ctx->pc = 0x3DA3DCu;
    // 0x3da3dc: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x3da3dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x3da3e0: 0x24a50006  addiu       $a1, $a1, 0x6
    ctx->pc = 0x3da3e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 6));
    // 0x3da3e4: 0x248c0a8c  addiu       $t4, $a0, 0xA8C
    ctx->pc = 0x3da3e4u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 4), 2700));
label_3da3e8:
    // 0x3da3e8: 0x120382d  daddu       $a3, $t1, $zero
    ctx->pc = 0x3da3e8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3da3ec: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x3da3ecu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
    // 0x3da3f0: 0x14b102a  slt         $v0, $t2, $t3
    ctx->pc = 0x3da3f0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 10) < (int64_t)GPR_S64(ctx, 11)) ? 1 : 0);
    // 0x3da3f4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3DA3F4u;
    {
        const bool branch_taken_0x3da3f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DA3F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DA3F4u;
        // 0x3da3f8: 0x94a90000  lhu         $t1, 0x0($a1) (Delay Slot)
        SET_GPR_ZE32(ctx, 9, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3da3f4) {
            ctx->pc = 0x3DA404u;
            goto label_3da404;
        }
    }
    ctx->pc = 0x3DA3FCu;
    // 0x3da3fc: 0x50e9002a  beql        $a3, $t1, . + 4 + (0x2A << 2)
    ctx->pc = 0x3DA3FCu;
    {
        const bool branch_taken_0x3da3fc = (GPR_U64(ctx, 7) == GPR_U64(ctx, 9));
        if (branch_taken_0x3da3fc) {
            ctx->pc = 0x3DA400u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3DA3FCu;
            // 0x3da400: 0x24c6ffff  addiu       $a2, $a2, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3DA4A8u;
            goto label_3da4a8;
        }
    }
    ctx->pc = 0x3DA404u;
label_3da404:
    // 0x3da404: 0x148102a  slt         $v0, $t2, $t0
    ctx->pc = 0x3da404u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 10) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
    // 0x3da408: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3DA408u;
    {
        const bool branch_taken_0x3da408 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DA40Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DA408u;
        // 0x3da40c: 0x71880  sll         $v1, $a3, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3da408) {
            ctx->pc = 0x3DA424u;
            goto label_3da424;
        }
    }
    ctx->pc = 0x3DA410u;
    // 0x3da410: 0x1831821  addu        $v1, $t4, $v1
    ctx->pc = 0x3da410u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 3)));
    // 0x3da414: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x3da414u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3da418: 0x4a1021  addu        $v0, $v0, $t2
    ctx->pc = 0x3da418u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 10)));
    // 0x3da41c: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x3DA41Cu;
    {
        const bool branch_taken_0x3da41c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DA420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DA41Cu;
        // 0x3da420: 0xa4620000  sh          $v0, 0x0($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3da41c) {
            ctx->pc = 0x3DA474u;
            goto label_3da474;
        }
    }
    ctx->pc = 0x3DA424u;
label_3da424:
    // 0x3da424: 0x10e0000b  beqz        $a3, . + 4 + (0xB << 2)
    ctx->pc = 0x3DA424u;
    {
        const bool branch_taken_0x3da424 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DA428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DA424u;
        // 0x3da428: 0x2942000b  slti        $v0, $t2, 0xB (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 10) < (int64_t)(int32_t)11) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3da424) {
            ctx->pc = 0x3DA454u;
            goto label_3da454;
        }
    }
    ctx->pc = 0x3DA42Cu;
    // 0x3da42c: 0x10ed0005  beq         $a3, $t5, . + 4 + (0x5 << 2)
    ctx->pc = 0x3DA42Cu;
    {
        const bool branch_taken_0x3da42c = (GPR_U64(ctx, 7) == GPR_U64(ctx, 13));
        ctx->pc = 0x3DA430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DA42Cu;
        // 0x3da430: 0x71880  sll         $v1, $a3, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3da42c) {
            ctx->pc = 0x3DA444u;
            goto label_3da444;
        }
    }
    ctx->pc = 0x3DA434u;
    // 0x3da434: 0x1831821  addu        $v1, $t4, $v1
    ctx->pc = 0x3da434u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 3)));
    // 0x3da438: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x3da438u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3da43c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3da43cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x3da440: 0xa4620000  sh          $v0, 0x0($v1)
    ctx->pc = 0x3da440u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 2));
label_3da444:
    // 0x3da444: 0x94820acc  lhu         $v0, 0xACC($a0)
    ctx->pc = 0x3da444u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 2764)));
    // 0x3da448: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3da448u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x3da44c: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x3DA44Cu;
    {
        const bool branch_taken_0x3da44c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DA450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DA44Cu;
        // 0x3da450: 0xa4820acc  sh          $v0, 0xACC($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 2764), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3da44c) {
            ctx->pc = 0x3DA474u;
            goto label_3da474;
        }
    }
    ctx->pc = 0x3DA454u;
label_3da454:
    // 0x3da454: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x3DA454u;
    {
        const bool branch_taken_0x3da454 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3da454) {
            ctx->pc = 0x3DA458u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3DA454u;
            // 0x3da458: 0x94820ad4  lhu         $v0, 0xAD4($a0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 2772)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3DA46Cu;
            goto label_3da46c;
        }
    }
    ctx->pc = 0x3DA45Cu;
    // 0x3da45c: 0x94820ad0  lhu         $v0, 0xAD0($a0)
    ctx->pc = 0x3da45cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 2768)));
    // 0x3da460: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3da460u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x3da464: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x3DA464u;
    {
        const bool branch_taken_0x3da464 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DA468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DA464u;
        // 0x3da468: 0xa4820ad0  sh          $v0, 0xAD0($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 2768), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3da464) {
            ctx->pc = 0x3DA474u;
            goto label_3da474;
        }
    }
    ctx->pc = 0x3DA46Cu;
label_3da46c:
    // 0x3da46c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3da46cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x3da470: 0xa4820ad4  sh          $v0, 0xAD4($a0)
    ctx->pc = 0x3da470u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 2772), (uint16_t)GPR_U32(ctx, 2));
label_3da474:
    // 0x3da474: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x3da474u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3da478: 0x15200004  bnez        $t1, . + 4 + (0x4 << 2)
    ctx->pc = 0x3DA478u;
    {
        const bool branch_taken_0x3da478 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 0));
        ctx->pc = 0x3DA47Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DA478u;
        // 0x3da47c: 0xe0682d  daddu       $t5, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3da478) {
            ctx->pc = 0x3DA48Cu;
            goto label_3da48c;
        }
    }
    ctx->pc = 0x3DA480u;
    // 0x3da480: 0x240b008a  addiu       $t3, $zero, 0x8A
    ctx->pc = 0x3da480u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 138));
    // 0x3da484: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x3DA484u;
    {
        const bool branch_taken_0x3da484 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DA488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DA484u;
        // 0x3da488: 0x24080003  addiu       $t0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3da484) {
            ctx->pc = 0x3DA4A4u;
            goto label_3da4a4;
        }
    }
    ctx->pc = 0x3DA48Cu;
label_3da48c:
    // 0x3da48c: 0x14e90004  bne         $a3, $t1, . + 4 + (0x4 << 2)
    ctx->pc = 0x3DA48Cu;
    {
        const bool branch_taken_0x3da48c = (GPR_U64(ctx, 7) != GPR_U64(ctx, 9));
        ctx->pc = 0x3DA490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DA48Cu;
        // 0x3da490: 0x240b0007  addiu       $t3, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3da48c) {
            ctx->pc = 0x3DA4A0u;
            goto label_3da4a0;
        }
    }
    ctx->pc = 0x3DA494u;
    // 0x3da494: 0x240b0006  addiu       $t3, $zero, 0x6
    ctx->pc = 0x3da494u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x3da498: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x3DA498u;
    {
        const bool branch_taken_0x3da498 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DA49Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DA498u;
        // 0x3da49c: 0x24080003  addiu       $t0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3da498) {
            ctx->pc = 0x3DA4A4u;
            goto label_3da4a4;
        }
    }
    ctx->pc = 0x3DA4A0u;
label_3da4a0:
    // 0x3da4a0: 0x24080004  addiu       $t0, $zero, 0x4
    ctx->pc = 0x3da4a0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_3da4a4:
    // 0x3da4a4: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x3da4a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
label_3da4a8:
    // 0x3da4a8: 0x14c0ffcf  bnez        $a2, . + 4 + (-0x31 << 2)
    ctx->pc = 0x3DA4A8u;
    {
        const bool branch_taken_0x3da4a8 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x3DA4ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DA4A8u;
        // 0x3da4ac: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3da4a8) {
            ctx->pc = 0x3DA3E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3da3e8;
        }
    }
    ctx->pc = 0x3DA4B0u;
label_3da4b0:
    // 0x3da4b0: 0x3e00008  jr          $ra
    ctx->pc = 0x3DA4B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3DA4B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3DA4B8u;
}
