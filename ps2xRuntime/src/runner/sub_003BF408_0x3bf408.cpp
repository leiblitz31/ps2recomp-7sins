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

// Function: sub_003BF408
// Address: 0x3bf408 - 0x3bf558
void sub_003BF408_0x3bf408(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003BF408_0x3bf408");
#endif

    ctx->pc = 0x3bf408u;

    // 0x3bf408: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3bf408u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3bf40c: 0xe7ac0000  swc1        $f12, 0x0($sp)
    ctx->pc = 0x3bf40cu;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x3bf410: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x3bf410u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3bf414: 0x30420fff  andi        $v0, $v0, 0xFFF
    ctx->pc = 0x3bf414u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
    // 0x3bf418: 0x28420800  slti        $v0, $v0, 0x800
    ctx->pc = 0x3bf418u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2048) ? 1 : 0);
    // 0x3bf41c: 0x14400019  bnez        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x3BF41Cu;
    {
        const bool branch_taken_0x3bf41c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3bf41c) {
            ctx->pc = 0x3BF484u;
            goto label_3bf484;
        }
    }
    ctx->pc = 0x3BF424u;
    // 0x3bf424: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x3bf424u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3bf428: 0x215c2  srl         $v0, $v0, 23
    ctx->pc = 0x3bf428u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 23));
    // 0x3bf42c: 0x304500ff  andi        $a1, $v0, 0xFF
    ctx->pc = 0x3bf42cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x3bf430: 0x28a3000d  slti        $v1, $a1, 0xD
    ctx->pc = 0x3bf430u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)13) ? 1 : 0);
    // 0x3bf434: 0x14600013  bnez        $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x3BF434u;
    {
        const bool branch_taken_0x3bf434 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3BF438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BF434u;
        // 0x3bf438: 0x28a200fe  slti        $v0, $a1, 0xFE (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)254) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bf434) {
            ctx->pc = 0x3BF484u;
            goto label_3bf484;
        }
    }
    ctx->pc = 0x3BF43Cu;
    // 0x3bf43c: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x3BF43Cu;
    {
        const bool branch_taken_0x3bf43c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3bf43c) {
            ctx->pc = 0x3BF45Cu;
            goto label_3bf45c;
        }
    }
    ctx->pc = 0x3BF444u;
    // 0x3bf444: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x3bf444u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3bf448: 0x3c02007f  lui         $v0, 0x7F
    ctx->pc = 0x3bf448u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)127 << 16));
    // 0x3bf44c: 0x3442f000  ori         $v0, $v0, 0xF000
    ctx->pc = 0x3bf44cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)61440);
    // 0x3bf450: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x3bf450u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x3bf454: 0x1062000b  beq         $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x3BF454u;
    {
        const bool branch_taken_0x3bf454 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x3bf454) {
            ctx->pc = 0x3BF484u;
            goto label_3bf484;
        }
    }
    ctx->pc = 0x3BF45Cu;
label_3bf45c:
    // 0x3bf45c: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x3bf45cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3bf460: 0x24a5fff4  addiu       $a1, $a1, -0xC
    ctx->pc = 0x3bf460u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967284));
    // 0x3bf464: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x3bf464u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x3bf468: 0x52dc0  sll         $a1, $a1, 23
    ctx->pc = 0x3bf468u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 23));
    // 0x3bf46c: 0x822024  and         $a0, $a0, $v0
    ctx->pc = 0x3bf46cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x3bf470: 0xc7a00000  lwc1        $f0, 0x0($sp)
    ctx->pc = 0x3bf470u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3bf474: 0x851825  or          $v1, $a0, $a1
    ctx->pc = 0x3bf474u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
    // 0x3bf478: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x3bf478u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3bf47c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x3bf47cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x3bf480: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x3bf480u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_3bf484:
    // 0x3bf484: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x3bf484u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3bf488: 0x2402f000  addiu       $v0, $zero, -0x1000
    ctx->pc = 0x3bf488u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963200));
    // 0x3bf48c: 0x3c057f80  lui         $a1, 0x7F80
    ctx->pc = 0x3bf48cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32640 << 16));
    // 0x3bf490: 0x3c043f80  lui         $a0, 0x3F80
    ctx->pc = 0x3bf490u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16256 << 16));
    // 0x3bf494: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x3bf494u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x3bf498: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x3bf498u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x3bf49c: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x3bf49cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3bf4a0: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x3bf4a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x3bf4a4: 0x82202a  slt         $a0, $a0, $v0
    ctx->pc = 0x3bf4a4u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x3bf4a8: 0x10800008  beqz        $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x3BF4A8u;
    {
        const bool branch_taken_0x3bf4a8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3bf4a8) {
            ctx->pc = 0x3BF4CCu;
            goto label_3bf4cc;
        }
    }
    ctx->pc = 0x3BF4B0u;
    // 0x3bf4b0: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x3bf4b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3bf4b4: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x3bf4b4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x3bf4b8: 0x3c037fff  lui         $v1, 0x7FFF
    ctx->pc = 0x3bf4b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32767 << 16));
    // 0x3bf4bc: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x3bf4bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x3bf4c0: 0x3463f000  ori         $v1, $v1, 0xF000
    ctx->pc = 0x3bf4c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)61440);
    // 0x3bf4c4: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x3bf4c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x3bf4c8: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x3bf4c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
label_3bf4cc:
    // 0x3bf4cc: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x3bf4ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3bf4d0: 0x3c0237ff  lui         $v0, 0x37FF
    ctx->pc = 0x3bf4d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)14335 << 16));
    // 0x3bf4d4: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x3bf4d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x3bf4d8: 0x651824  and         $v1, $v1, $a1
    ctx->pc = 0x3bf4d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
    // 0x3bf4dc: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x3bf4dcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x3bf4e0: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3BF4E0u;
    {
        const bool branch_taken_0x3bf4e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3bf4e0) {
            ctx->pc = 0x3BF4F8u;
            goto label_3bf4f8;
        }
    }
    ctx->pc = 0x3BF4E8u;
    // 0x3bf4e8: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x3bf4e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3bf4ec: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x3bf4ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x3bf4f0: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x3bf4f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x3bf4f4: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x3bf4f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
label_3bf4f8:
    // 0x3bf4f8: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x3bf4f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3bf4fc: 0x24058000  addiu       $a1, $zero, -0x8000
    ctx->pc = 0x3bf4fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294934528));
    // 0x3bf500: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x3bf500u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3bf504: 0x3c027fff  lui         $v0, 0x7FFF
    ctx->pc = 0x3bf504u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32767 << 16));
    // 0x3bf508: 0x31c03  sra         $v1, $v1, 16
    ctx->pc = 0x3bf508u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 16));
    // 0x3bf50c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x3bf50cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x3bf510: 0x651824  and         $v1, $v1, $a1
    ctx->pc = 0x3bf510u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
    // 0x3bf514: 0x822024  and         $a0, $a0, $v0
    ctx->pc = 0x3bf514u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x3bf518: 0x1080000c  beqz        $a0, . + 4 + (0xC << 2)
    ctx->pc = 0x3BF518u;
    {
        const bool branch_taken_0x3bf518 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BF51Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BF518u;
        // 0x3bf51c: 0x3065ffff  andi        $a1, $v1, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bf518) {
            ctx->pc = 0x3BF54Cu;
            goto label_3bf54c;
        }
    }
    ctx->pc = 0x3BF520u;
    // 0x3bf520: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x3bf520u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3bf524: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x3bf524u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3bf528: 0x215c3  sra         $v0, $v0, 23
    ctx->pc = 0x3bf528u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 23));
    // 0x3bf52c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x3bf52cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x3bf530: 0x31b03  sra         $v1, $v1, 12
    ctx->pc = 0x3bf530u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 12));
    // 0x3bf534: 0x2442ff90  addiu       $v0, $v0, -0x70
    ctx->pc = 0x3bf534u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967184));
    // 0x3bf538: 0x306307ff  andi        $v1, $v1, 0x7FF
    ctx->pc = 0x3bf538u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2047);
    // 0x3bf53c: 0x212c0  sll         $v0, $v0, 11
    ctx->pc = 0x3bf53cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 11));
    // 0x3bf540: 0xa21025  or          $v0, $a1, $v0
    ctx->pc = 0x3bf540u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
    // 0x3bf544: 0x3045ffff  andi        $a1, $v0, 0xFFFF
    ctx->pc = 0x3bf544u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x3bf548: 0xa32825  or          $a1, $a1, $v1
    ctx->pc = 0x3bf548u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
label_3bf54c:
    // 0x3bf54c: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x3bf54cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3bf550: 0x3e00008  jr          $ra
    ctx->pc = 0x3BF550u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3BF554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BF550u;
        // 0x3bf554: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3BF550u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3BF558u;
}
