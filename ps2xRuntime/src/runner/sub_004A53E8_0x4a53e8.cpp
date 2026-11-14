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

// Function: sub_004A53E8
// Address: 0x4a53e8 - 0x4a5510
void sub_004A53E8_0x4a53e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004A53E8_0x4a53e8");
#endif

    switch (ctx->pc) {
        case 0x4a5430u: goto label_4a5430;
        case 0x4a5478u: goto label_4a5478;
        case 0x4a5488u: goto label_4a5488;
        case 0x4a5498u: goto label_4a5498;
        default: break;
    }

    ctx->pc = 0x4a53e8u;

    // 0x4a53e8: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x4a53e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x4a53ec: 0x7fb20080  sq          $s2, 0x80($sp)
    ctx->pc = 0x4a53ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 18));
    // 0x4a53f0: 0x7fb30070  sq          $s3, 0x70($sp)
    ctx->pc = 0x4a53f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 19));
    // 0x4a53f4: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x4a53f4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a53f8: 0x7fb000a0  sq          $s0, 0xA0($sp)
    ctx->pc = 0x4a53f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 16));
    // 0x4a53fc: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x4a53fcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a5400: 0x7fb10090  sq          $s1, 0x90($sp)
    ctx->pc = 0x4a5400u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 17));
    // 0x4a5404: 0x24c5ffff  addiu       $a1, $a2, -0x1
    ctx->pc = 0x4a5404u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x4a5408: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x4a5408u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
    // 0x4a540c: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x4a540cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x4a5410: 0x7fb60040  sq          $s6, 0x40($sp)
    ctx->pc = 0x4a5410u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 22));
    // 0x4a5414: 0x7fb70030  sq          $s7, 0x30($sp)
    ctx->pc = 0x4a5414u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 23));
    // 0x4a5418: 0x7fbe0020  sq          $fp, 0x20($sp)
    ctx->pc = 0x4a5418u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 30));
    // 0x4a541c: 0x10c0002e  beqz        $a2, . + 4 + (0x2E << 2)
    ctx->pc = 0x4A541Cu;
    {
        const bool branch_taken_0x4a541c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A5420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A541Cu;
        // 0x4a5420: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a541c) {
            ctx->pc = 0x4A54D8u;
            goto label_4a54d8;
        }
    }
    ctx->pc = 0x4A5424u;
    // 0x4a5424: 0x3c17ffff  lui         $s7, 0xFFFF
    ctx->pc = 0x4a5424u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)65535 << 16));
    // 0x4a5428: 0x36f7ffff  ori         $s7, $s7, 0xFFFF
    ctx->pc = 0x4a5428u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 23) | (uint64_t)(uint16_t)65535);
    // 0x4a542c: 0x8e700000  lw          $s0, 0x0($s3)
    ctx->pc = 0x4a542cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_4a5430:
    // 0x4a5430: 0x26730004  addiu       $s3, $s3, 0x4
    ctx->pc = 0x4a5430u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
    // 0x4a5434: 0x101402  srl         $v0, $s0, 16
    ctx->pc = 0x4a5434u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 16), 16));
    // 0x4a5438: 0x101c00  sll         $v1, $s0, 16
    ctx->pc = 0x4a5438u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 16));
    // 0x4a543c: 0x3042007f  andi        $v0, $v0, 0x7F
    ctx->pc = 0x4a543cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)127);
    // 0x4a5440: 0x31c03  sra         $v1, $v1, 16
    ctx->pc = 0x4a5440u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 16));
    // 0x4a5444: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x4a5444u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x4a5448: 0x2c440059  sltiu       $a0, $v0, 0x59
    ctx->pc = 0x4a5448u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)89) ? 1 : 0);
    // 0x4a544c: 0x14800003  bnez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x4A544Cu;
    {
        const bool branch_taken_0x4a544c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x4A5450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A544Cu;
        // 0x4a5450: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a544c) {
            ctx->pc = 0x4A545Cu;
            goto label_4a545c;
        }
    }
    ctx->pc = 0x4A5454u;
    // 0x4a5454: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x4A5454u;
    {
        const bool branch_taken_0x4a5454 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A5458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A5454u;
        // 0x4a5458: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a5454) {
            ctx->pc = 0x4A54DCu;
            goto label_4a54dc;
        }
    }
    ctx->pc = 0x4A545Cu;
label_4a545c:
    // 0x4a545c: 0x97a20000  lhu         $v0, 0x0($sp)
    ctx->pc = 0x4a545cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4a5460: 0x24b6ffff  addiu       $s6, $a1, -0x1
    ctx->pc = 0x4a5460u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x4a5464: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x4a5464u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a5468: 0x241e0007  addiu       $fp, $zero, 0x7
    ctx->pc = 0x4a5468u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x4a546c: 0xa6420000  sh          $v0, 0x0($s2)
    ctx->pc = 0x4a546cu;
    WRITE16(ADD32(GPR_U32(ctx, 18), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x4a5470: 0x26520002  addiu       $s2, $s2, 0x2
    ctx->pc = 0x4a5470u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 2));
    // 0x4a5474: 0x8e700000  lw          $s0, 0x0($s3)
    ctx->pc = 0x4a5474u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_4a5478:
    // 0x4a5478: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x4a5478u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a547c: 0x26730004  addiu       $s3, $s3, 0x4
    ctx->pc = 0x4a547cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
    // 0x4a5480: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x4A5480u;
    {
        const bool branch_taken_0x4a5480 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A5484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A5480u;
        // 0x4a5484: 0x26950001  addiu       $s5, $s4, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a5480) {
            ctx->pc = 0x4A54A8u;
            goto label_4a54a8;
        }
    }
    ctx->pc = 0x4A5488u;
label_4a5488:
    // 0x4a5488: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x4a5488u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a548c: 0x27a60004  addiu       $a2, $sp, 0x4
    ctx->pc = 0x4a548cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    // 0x4a5490: 0xc1294ca  jal         func_4A5328
    ctx->pc = 0x4A5490u;
    SET_GPR_U32(ctx, 31, 0x4A5498u);
    ctx->pc = 0x4A5494u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A5490u;
    // 0x4a5494: 0x108102  srl         $s0, $s0, 4 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)SRL32(GPR_U32(ctx, 16), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A5328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A5328u, 0x4A5490u, 0x4A5498u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A5498u;
label_4a5498:
    // 0x4a5498: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x4a5498u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x4a549c: 0x97a20000  lhu         $v0, 0x0($sp)
    ctx->pc = 0x4a549cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4a54a0: 0xa6420000  sh          $v0, 0x0($s2)
    ctx->pc = 0x4a54a0u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x4a54a4: 0x26520002  addiu       $s2, $s2, 0x2
    ctx->pc = 0x4a54a4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 2));
label_4a54a8:
    // 0x4a54a8: 0x169e0002  bne         $s4, $fp, . + 4 + (0x2 << 2)
    ctx->pc = 0x4A54A8u;
    {
        const bool branch_taken_0x4a54a8 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 30));
        ctx->pc = 0x4A54ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A54A8u;
        // 0x4a54ac: 0x2a220008  slti        $v0, $s1, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)8) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a54a8) {
            ctx->pc = 0x4A54B4u;
            goto label_4a54b4;
        }
    }
    ctx->pc = 0x4A54B0u;
    // 0x4a54b0: 0x2a220007  slti        $v0, $s1, 0x7
    ctx->pc = 0x4a54b0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)7) ? 1 : 0);
label_4a54b4:
    // 0x4a54b4: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x4A54B4u;
    {
        const bool branch_taken_0x4a54b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4A54B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A54B4u;
        // 0x4a54b8: 0x3204000f  andi        $a0, $s0, 0xF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)15);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a54b4) {
            ctx->pc = 0x4A5488u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4a5488;
        }
    }
    ctx->pc = 0x4A54BCu;
    // 0x4a54bc: 0x2a0a02d  daddu       $s4, $s5, $zero
    ctx->pc = 0x4a54bcu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a54c0: 0x2a820008  slti        $v0, $s4, 0x8
    ctx->pc = 0x4a54c0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x4a54c4: 0x5440ffec  bnel        $v0, $zero, . + 4 + (-0x14 << 2)
    ctx->pc = 0x4A54C4u;
    {
        const bool branch_taken_0x4a54c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4a54c4) {
            ctx->pc = 0x4A54C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4A54C4u;
            // 0x4a54c8: 0x8e700000  lw          $s0, 0x0($s3) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4A5478u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4a5478;
        }
    }
    ctx->pc = 0x4A54CCu;
    // 0x4a54cc: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x4a54ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a54d0: 0x54b7ffd7  bnel        $a1, $s7, . + 4 + (-0x29 << 2)
    ctx->pc = 0x4A54D0u;
    {
        const bool branch_taken_0x4a54d0 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 23));
        if (branch_taken_0x4a54d0) {
            ctx->pc = 0x4A54D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4A54D0u;
            // 0x4a54d4: 0x8e700000  lw          $s0, 0x0($s3) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4A5430u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4a5430;
        }
    }
    ctx->pc = 0x4A54D8u;
label_4a54d8:
    // 0x4a54d8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x4a54d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4a54dc:
    // 0x4a54dc: 0x7bb000a0  lq          $s0, 0xA0($sp)
    ctx->pc = 0x4a54dcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x4a54e0: 0x7bb10090  lq          $s1, 0x90($sp)
    ctx->pc = 0x4a54e0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x4a54e4: 0x7bb20080  lq          $s2, 0x80($sp)
    ctx->pc = 0x4a54e4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x4a54e8: 0x7bb30070  lq          $s3, 0x70($sp)
    ctx->pc = 0x4a54e8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x4a54ec: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x4a54ecu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x4a54f0: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x4a54f0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x4a54f4: 0x7bb60040  lq          $s6, 0x40($sp)
    ctx->pc = 0x4a54f4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x4a54f8: 0x7bb70030  lq          $s7, 0x30($sp)
    ctx->pc = 0x4a54f8u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4a54fc: 0x7bbe0020  lq          $fp, 0x20($sp)
    ctx->pc = 0x4a54fcu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4a5500: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4a5500u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4a5504: 0x3e00008  jr          $ra
    ctx->pc = 0x4A5504u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4A5508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A5504u;
        // 0x4a5508: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4A5504u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4A550Cu;
    // 0x4a550c: 0x0  nop
    ctx->pc = 0x4a550cu;
    // NOP
    ctx->pc = 0x4a5510u;
}
