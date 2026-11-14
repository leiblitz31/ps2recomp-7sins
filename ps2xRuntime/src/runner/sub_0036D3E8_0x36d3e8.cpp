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

// Function: sub_0036D3E8
// Address: 0x36d3e8 - 0x36d5e0
void sub_0036D3E8_0x36d3e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0036D3E8_0x36d3e8");
#endif

    ctx->pc = 0x36d3e8u;

    // 0x36d3e8: 0x8f83a858  lw          $v1, -0x57A8($gp)
    ctx->pc = 0x36d3e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294944856)));
    // 0x36d3ec: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x36d3ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
    // 0x36d3f0: 0x2442eeb8  addiu       $v0, $v0, -0x1148
    ctx->pc = 0x36d3f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962872));
    // 0x36d3f4: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x36d3f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x36d3f8: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x36d3f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x36d3fc: 0x24850050  addiu       $a1, $a0, 0x50
    ctx->pc = 0x36d3fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 80));
    // 0x36d400: 0xac820024  sw          $v0, 0x24($a0)
    ctx->pc = 0x36d400u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 36), GPR_U32(ctx, 2));
    // 0x36d404: 0x8ca30058  lw          $v1, 0x58($a1)
    ctx->pc = 0x36d404u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 88)));
    // 0x36d408: 0x30620008  andi        $v0, $v1, 0x8
    ctx->pc = 0x36d408u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8);
    // 0x36d40c: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x36D40Cu;
    {
        const bool branch_taken_0x36d40c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x36D410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36D40Cu;
        // 0x36d410: 0x3c020100  lui         $v0, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)256 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36d40c) {
            ctx->pc = 0x36D434u;
            goto label_36d434;
        }
    }
    ctx->pc = 0x36D414u;
    // 0x36d414: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x36d414u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x36d418: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x36D418u;
    {
        const bool branch_taken_0x36d418 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x36d418) {
            ctx->pc = 0x36D41Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x36D418u;
            // 0x36d41c: 0x3c020037  lui         $v0, 0x37 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x36D42Cu;
            goto label_36d42c;
        }
    }
    ctx->pc = 0x36D420u;
    // 0x36d420: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x36d420u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
    // 0x36d424: 0x10000031  b           . + 4 + (0x31 << 2)
    ctx->pc = 0x36D424u;
    {
        const bool branch_taken_0x36d424 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x36D428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36D424u;
        // 0x36d428: 0x2442ecd0  addiu       $v0, $v0, -0x1330 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962384));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36d424) {
            ctx->pc = 0x36D4ECu;
            goto label_36d4ec;
        }
    }
    ctx->pc = 0x36D42Cu;
label_36d42c:
    // 0x36d42c: 0x1000002f  b           . + 4 + (0x2F << 2)
    ctx->pc = 0x36D42Cu;
    {
        const bool branch_taken_0x36d42c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x36D430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36D42Cu;
        // 0x36d430: 0x2442eb40  addiu       $v0, $v0, -0x14C0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961984));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36d42c) {
            ctx->pc = 0x36D4ECu;
            goto label_36d4ec;
        }
    }
    ctx->pc = 0x36D434u;
label_36d434:
    // 0x36d434: 0x30628000  andi        $v0, $v1, 0x8000
    ctx->pc = 0x36d434u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32768);
    // 0x36d438: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x36D438u;
    {
        const bool branch_taken_0x36d438 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x36D43Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36D438u;
        // 0x36d43c: 0x3c020100  lui         $v0, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)256 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36d438) {
            ctx->pc = 0x36D454u;
            goto label_36d454;
        }
    }
    ctx->pc = 0x36D440u;
    // 0x36d440: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x36d440u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x36d444: 0x10400027  beqz        $v0, . + 4 + (0x27 << 2)
    ctx->pc = 0x36D444u;
    {
        const bool branch_taken_0x36d444 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x36D448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36D444u;
        // 0x36d448: 0x3c020037  lui         $v0, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36d444) {
            ctx->pc = 0x36D4E4u;
            goto label_36d4e4;
        }
    }
    ctx->pc = 0x36D44Cu;
    // 0x36d44c: 0x10000027  b           . + 4 + (0x27 << 2)
    ctx->pc = 0x36D44Cu;
    {
        const bool branch_taken_0x36d44c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x36D450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36D44Cu;
        // 0x36d450: 0x2442d7c0  addiu       $v0, $v0, -0x2840 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956992));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36d44c) {
            ctx->pc = 0x36D4ECu;
            goto label_36d4ec;
        }
    }
    ctx->pc = 0x36D454u;
label_36d454:
    // 0x36d454: 0x30620020  andi        $v0, $v1, 0x20
    ctx->pc = 0x36d454u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32);
    // 0x36d458: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x36D458u;
    {
        const bool branch_taken_0x36d458 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x36D45Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36D458u;
        // 0x36d45c: 0x30620004  andi        $v0, $v1, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x36d458) {
            ctx->pc = 0x36D4A8u;
            goto label_36d4a8;
        }
    }
    ctx->pc = 0x36D460u;
    // 0x36d460: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x36D460u;
    {
        const bool branch_taken_0x36d460 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x36D464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36D460u;
        // 0x36d464: 0x3c020100  lui         $v0, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)256 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36d460) {
            ctx->pc = 0x36D488u;
            goto label_36d488;
        }
    }
    ctx->pc = 0x36D468u;
    // 0x36d468: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x36d468u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x36d46c: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x36D46Cu;
    {
        const bool branch_taken_0x36d46c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x36d46c) {
            ctx->pc = 0x36D470u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x36D46Cu;
            // 0x36d470: 0x3c020037  lui         $v0, 0x37 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x36D480u;
            goto label_36d480;
        }
    }
    ctx->pc = 0x36D474u;
    // 0x36d474: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x36d474u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
    // 0x36d478: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x36D478u;
    {
        const bool branch_taken_0x36d478 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x36D47Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36D478u;
        // 0x36d47c: 0x2442e7a0  addiu       $v0, $v0, -0x1860 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961056));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36d478) {
            ctx->pc = 0x36D4ECu;
            goto label_36d4ec;
        }
    }
    ctx->pc = 0x36D480u;
label_36d480:
    // 0x36d480: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x36D480u;
    {
        const bool branch_taken_0x36d480 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x36D484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36D480u;
        // 0x36d484: 0x2442dea8  addiu       $v0, $v0, -0x2158 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958760));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36d480) {
            ctx->pc = 0x36D4ECu;
            goto label_36d4ec;
        }
    }
    ctx->pc = 0x36D488u;
label_36d488:
    // 0x36d488: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x36d488u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x36d48c: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x36D48Cu;
    {
        const bool branch_taken_0x36d48c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x36d48c) {
            ctx->pc = 0x36D490u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x36D48Cu;
            // 0x36d490: 0x3c020037  lui         $v0, 0x37 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x36D4A0u;
            goto label_36d4a0;
        }
    }
    ctx->pc = 0x36D494u;
    // 0x36d494: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x36d494u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
    // 0x36d498: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x36D498u;
    {
        const bool branch_taken_0x36d498 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x36D49Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36D498u;
        // 0x36d49c: 0x2442e1a8  addiu       $v0, $v0, -0x1E58 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959528));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36d498) {
            ctx->pc = 0x36D4ECu;
            goto label_36d4ec;
        }
    }
    ctx->pc = 0x36D4A0u;
label_36d4a0:
    // 0x36d4a0: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x36D4A0u;
    {
        const bool branch_taken_0x36d4a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x36D4A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36D4A0u;
        // 0x36d4a4: 0x2442da00  addiu       $v0, $v0, -0x2600 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957568));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36d4a0) {
            ctx->pc = 0x36D4ECu;
            goto label_36d4ec;
        }
    }
    ctx->pc = 0x36D4A8u;
label_36d4a8:
    // 0x36d4a8: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x36D4A8u;
    {
        const bool branch_taken_0x36d4a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x36D4ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36D4A8u;
        // 0x36d4ac: 0x3c020100  lui         $v0, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)256 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36d4a8) {
            ctx->pc = 0x36D4D0u;
            goto label_36d4d0;
        }
    }
    ctx->pc = 0x36D4B0u;
    // 0x36d4b0: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x36d4b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x36d4b4: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x36D4B4u;
    {
        const bool branch_taken_0x36d4b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x36d4b4) {
            ctx->pc = 0x36D4B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x36D4B4u;
            // 0x36d4b8: 0x3c020037  lui         $v0, 0x37 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x36D4C8u;
            goto label_36d4c8;
        }
    }
    ctx->pc = 0x36D4BCu;
    // 0x36d4bc: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x36d4bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
    // 0x36d4c0: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x36D4C0u;
    {
        const bool branch_taken_0x36d4c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x36D4C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36D4C0u;
        // 0x36d4c4: 0x2442e500  addiu       $v0, $v0, -0x1B00 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960384));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36d4c0) {
            ctx->pc = 0x36D4ECu;
            goto label_36d4ec;
        }
    }
    ctx->pc = 0x36D4C8u;
label_36d4c8:
    // 0x36d4c8: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x36D4C8u;
    {
        const bool branch_taken_0x36d4c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x36D4CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36D4C8u;
        // 0x36d4cc: 0x2442dcb8  addiu       $v0, $v0, -0x2348 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958264));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36d4c8) {
            ctx->pc = 0x36D4ECu;
            goto label_36d4ec;
        }
    }
    ctx->pc = 0x36D4D0u;
label_36d4d0:
    // 0x36d4d0: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x36d4d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x36d4d4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x36D4D4u;
    {
        const bool branch_taken_0x36d4d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x36D4D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36D4D4u;
        // 0x36d4d8: 0x3c020037  lui         $v0, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36d4d4) {
            ctx->pc = 0x36D4E4u;
            goto label_36d4e4;
        }
    }
    ctx->pc = 0x36D4DCu;
    // 0x36d4dc: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x36D4DCu;
    {
        const bool branch_taken_0x36d4dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x36D4E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36D4DCu;
        // 0x36d4e0: 0x2442d7c0  addiu       $v0, $v0, -0x2840 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956992));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36d4dc) {
            ctx->pc = 0x36D4ECu;
            goto label_36d4ec;
        }
    }
    ctx->pc = 0x36D4E4u;
label_36d4e4:
    // 0x36d4e4: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x36d4e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
    // 0x36d4e8: 0x2442d5e0  addiu       $v0, $v0, -0x2A20
    ctx->pc = 0x36d4e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956512));
label_36d4ec:
    // 0x36d4ec: 0xac820028  sw          $v0, 0x28($a0)
    ctx->pc = 0x36d4ecu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 40), GPR_U32(ctx, 2));
    // 0x36d4f0: 0x8ca30058  lw          $v1, 0x58($a1)
    ctx->pc = 0x36d4f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 88)));
    // 0x36d4f4: 0x30620080  andi        $v0, $v1, 0x80
    ctx->pc = 0x36d4f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)128);
    // 0x36d4f8: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x36D4F8u;
    {
        const bool branch_taken_0x36d4f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x36D4FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36D4F8u;
        // 0x36d4fc: 0x3c020037  lui         $v0, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36d4f8) {
            ctx->pc = 0x36D50Cu;
            goto label_36d50c;
        }
    }
    ctx->pc = 0x36D500u;
    // 0x36d500: 0x2442ff60  addiu       $v0, $v0, -0xA0
    ctx->pc = 0x36d500u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967136));
    // 0x36d504: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x36D504u;
    {
        const bool branch_taken_0x36d504 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x36D508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36D504u;
        // 0x36d508: 0xac82002c  sw          $v0, 0x2C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36d504) {
            ctx->pc = 0x36D560u;
            goto label_36d560;
        }
    }
    ctx->pc = 0x36D50Cu;
label_36d50c:
    // 0x36d50c: 0x30620100  andi        $v0, $v1, 0x100
    ctx->pc = 0x36d50cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)256);
    // 0x36d510: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x36D510u;
    {
        const bool branch_taken_0x36d510 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x36D514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36D510u;
        // 0x36d514: 0x3c020037  lui         $v0, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36d510) {
            ctx->pc = 0x36D524u;
            goto label_36d524;
        }
    }
    ctx->pc = 0x36D518u;
    // 0x36d518: 0x24420098  addiu       $v0, $v0, 0x98
    ctx->pc = 0x36d518u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 152));
    // 0x36d51c: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x36D51Cu;
    {
        const bool branch_taken_0x36d51c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x36D520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36D51Cu;
        // 0x36d520: 0xac82002c  sw          $v0, 0x2C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36d51c) {
            ctx->pc = 0x36D560u;
            goto label_36d560;
        }
    }
    ctx->pc = 0x36D524u;
label_36d524:
    // 0x36d524: 0x3c020008  lui         $v0, 0x8
    ctx->pc = 0x36d524u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8 << 16));
    // 0x36d528: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x36d528u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x36d52c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x36D52Cu;
    {
        const bool branch_taken_0x36d52c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x36D530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36D52Cu;
        // 0x36d530: 0x3c020037  lui         $v0, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36d52c) {
            ctx->pc = 0x36D540u;
            goto label_36d540;
        }
    }
    ctx->pc = 0x36D534u;
    // 0x36d534: 0x244201d0  addiu       $v0, $v0, 0x1D0
    ctx->pc = 0x36d534u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 464));
    // 0x36d538: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x36D538u;
    {
        const bool branch_taken_0x36d538 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x36D53Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36D538u;
        // 0x36d53c: 0xac82002c  sw          $v0, 0x2C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36d538) {
            ctx->pc = 0x36D560u;
            goto label_36d560;
        }
    }
    ctx->pc = 0x36D540u;
label_36d540:
    // 0x36d540: 0x3c020010  lui         $v0, 0x10
    ctx->pc = 0x36d540u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16 << 16));
    // 0x36d544: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x36d544u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x36d548: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x36D548u;
    {
        const bool branch_taken_0x36d548 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x36D54Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36D548u;
        // 0x36d54c: 0x3c020037  lui         $v0, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36d548) {
            ctx->pc = 0x36D55Cu;
            goto label_36d55c;
        }
    }
    ctx->pc = 0x36D550u;
    // 0x36d550: 0x244202f8  addiu       $v0, $v0, 0x2F8
    ctx->pc = 0x36d550u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 760));
    // 0x36d554: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x36D554u;
    {
        const bool branch_taken_0x36d554 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x36D558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36D554u;
        // 0x36d558: 0xac82002c  sw          $v0, 0x2C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36d554) {
            ctx->pc = 0x36D560u;
            goto label_36d560;
        }
    }
    ctx->pc = 0x36D55Cu;
label_36d55c:
    // 0x36d55c: 0xac80002c  sw          $zero, 0x2C($a0)
    ctx->pc = 0x36d55cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 0));
label_36d560:
    // 0x36d560: 0x8ca30058  lw          $v1, 0x58($a1)
    ctx->pc = 0x36d560u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 88)));
    // 0x36d564: 0x30620002  andi        $v0, $v1, 0x2
    ctx->pc = 0x36d564u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x36d568: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x36D568u;
    {
        const bool branch_taken_0x36d568 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x36D56Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36D568u;
        // 0x36d56c: 0x3c020037  lui         $v0, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36d568) {
            ctx->pc = 0x36D578u;
            goto label_36d578;
        }
    }
    ctx->pc = 0x36D570u;
    // 0x36d570: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x36D570u;
    {
        const bool branch_taken_0x36d570 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x36D574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36D570u;
        // 0x36d574: 0x2442f9c0  addiu       $v0, $v0, -0x640 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294965696));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36d570) {
            ctx->pc = 0x36D5ACu;
            goto label_36d5ac;
        }
    }
    ctx->pc = 0x36D578u;
label_36d578:
    // 0x36d578: 0x30620040  andi        $v0, $v1, 0x40
    ctx->pc = 0x36d578u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)64);
    // 0x36d57c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x36D57Cu;
    {
        const bool branch_taken_0x36d57c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x36D580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36D57Cu;
        // 0x36d580: 0x3c020037  lui         $v0, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36d57c) {
            ctx->pc = 0x36D58Cu;
            goto label_36d58c;
        }
    }
    ctx->pc = 0x36D584u;
    // 0x36d584: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x36D584u;
    {
        const bool branch_taken_0x36d584 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x36D588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36D584u;
        // 0x36d588: 0x2442fb10  addiu       $v0, $v0, -0x4F0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966032));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36d584) {
            ctx->pc = 0x36D5ACu;
            goto label_36d5ac;
        }
    }
    ctx->pc = 0x36D58Cu;
label_36d58c:
    // 0x36d58c: 0x3c020004  lui         $v0, 0x4
    ctx->pc = 0x36d58cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4 << 16));
    // 0x36d590: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x36d590u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x36d594: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x36D594u;
    {
        const bool branch_taken_0x36d594 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x36D598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36D594u;
        // 0x36d598: 0x3c020037  lui         $v0, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36d594) {
            ctx->pc = 0x36D5A4u;
            goto label_36d5a4;
        }
    }
    ctx->pc = 0x36D59Cu;
    // 0x36d59c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x36D59Cu;
    {
        const bool branch_taken_0x36d59c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x36D5A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36D59Cu;
        // 0x36d5a0: 0x2442fca8  addiu       $v0, $v0, -0x358 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966440));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36d59c) {
            ctx->pc = 0x36D5ACu;
            goto label_36d5ac;
        }
    }
    ctx->pc = 0x36D5A4u;
label_36d5a4:
    // 0x36d5a4: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x36d5a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
    // 0x36d5a8: 0x2442fe48  addiu       $v0, $v0, -0x1B8
    ctx->pc = 0x36d5a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966856));
label_36d5ac:
    // 0x36d5ac: 0xac820030  sw          $v0, 0x30($a0)
    ctx->pc = 0x36d5acu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 48), GPR_U32(ctx, 2));
    // 0x36d5b0: 0x8ca20058  lw          $v0, 0x58($a1)
    ctx->pc = 0x36d5b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 88)));
    // 0x36d5b4: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x36d5b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
    // 0x36d5b8: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x36D5B8u;
    {
        const bool branch_taken_0x36d5b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x36D5BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36D5B8u;
        // 0x36d5bc: 0x3c020037  lui         $v0, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36d5b8) {
            ctx->pc = 0x36D5CCu;
            goto label_36d5cc;
        }
    }
    ctx->pc = 0x36D5C0u;
    // 0x36d5c0: 0x24420428  addiu       $v0, $v0, 0x428
    ctx->pc = 0x36d5c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1064));
    // 0x36d5c4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x36D5C4u;
    {
        const bool branch_taken_0x36d5c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x36D5C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36D5C4u;
        // 0x36d5c8: 0xac820034  sw          $v0, 0x34($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 52), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36d5c4) {
            ctx->pc = 0x36D5D0u;
            goto label_36d5d0;
        }
    }
    ctx->pc = 0x36D5CCu;
label_36d5cc:
    // 0x36d5cc: 0xac800034  sw          $zero, 0x34($a0)
    ctx->pc = 0x36d5ccu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 52), GPR_U32(ctx, 0));
label_36d5d0:
    // 0x36d5d0: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x36d5d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
    // 0x36d5d4: 0x244205c0  addiu       $v0, $v0, 0x5C0
    ctx->pc = 0x36d5d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1472));
    // 0x36d5d8: 0x3e00008  jr          $ra
    ctx->pc = 0x36D5D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36D5DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36D5D8u;
        // 0x36d5dc: 0xac820038  sw          $v0, 0x38($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 56), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36D5D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36D5E0u;
}
