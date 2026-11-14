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

// Function: sub_003FE208
// Address: 0x3fe208 - 0x3fe6c0
void sub_003FE208_0x3fe208(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003FE208_0x3fe208");
#endif

    switch (ctx->pc) {
        case 0x3fe258u: goto label_3fe258;
        case 0x3fe2acu: goto label_3fe2ac;
        case 0x3fe310u: goto label_3fe310;
        case 0x3fe36cu: goto label_3fe36c;
        case 0x3fe37cu: goto label_3fe37c;
        case 0x3fe400u: goto label_3fe400;
        case 0x3fe450u: goto label_3fe450;
        case 0x3fe45cu: goto label_3fe45c;
        case 0x3fe490u: goto label_3fe490;
        case 0x3fe49cu: goto label_3fe49c;
        case 0x3fe4a4u: goto label_3fe4a4;
        case 0x3fe4c4u: goto label_3fe4c4;
        case 0x3fe4d0u: goto label_3fe4d0;
        case 0x3fe4d8u: goto label_3fe4d8;
        case 0x3fe50cu: goto label_3fe50c;
        case 0x3fe51cu: goto label_3fe51c;
        case 0x3fe580u: goto label_3fe580;
        case 0x3fe598u: goto label_3fe598;
        case 0x3fe5ccu: goto label_3fe5cc;
        case 0x3fe5e4u: goto label_3fe5e4;
        case 0x3fe5f0u: goto label_3fe5f0;
        case 0x3fe5f8u: goto label_3fe5f8;
        case 0x3fe618u: goto label_3fe618;
        case 0x3fe624u: goto label_3fe624;
        case 0x3fe62cu: goto label_3fe62c;
        case 0x3fe680u: goto label_3fe680;
        case 0x3fe698u: goto label_3fe698;
        default: break;
    }

    ctx->pc = 0x3fe208u;

    // 0x3fe208: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x3fe208u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x3fe20c: 0x28a20003  slti        $v0, $a1, 0x3
    ctx->pc = 0x3fe20cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x3fe210: 0x7fb10090  sq          $s1, 0x90($sp)
    ctx->pc = 0x3fe210u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 17));
    // 0x3fe214: 0x7fb30070  sq          $s3, 0x70($sp)
    ctx->pc = 0x3fe214u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 19));
    // 0x3fe218: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x3fe218u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3fe21c: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x3fe21cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
    // 0x3fe220: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x3fe220u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3fe224: 0x7fb000a0  sq          $s0, 0xA0($sp)
    ctx->pc = 0x3fe224u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 16));
    // 0x3fe228: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x3fe228u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3fe22c: 0x7fb20080  sq          $s2, 0x80($sp)
    ctx->pc = 0x3fe22cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 18));
    // 0x3fe230: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x3fe230u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x3fe234: 0x7fb60040  sq          $s6, 0x40($sp)
    ctx->pc = 0x3fe234u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 22));
    // 0x3fe238: 0x7fb70030  sq          $s7, 0x30($sp)
    ctx->pc = 0x3fe238u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 23));
    // 0x3fe23c: 0x7fbe0020  sq          $fp, 0x20($sp)
    ctx->pc = 0x3fe23cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 30));
    // 0x3fe240: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3fe240u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3fe244: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3FE244u;
    {
        const bool branch_taken_0x3fe244 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3FE248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FE244u;
        // 0x3fe248: 0xafa80000  sw          $t0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3fe244) {
            ctx->pc = 0x3FE260u;
            goto label_3fe260;
        }
    }
    ctx->pc = 0x3FE24Cu;
    // 0x3fe24c: 0x3c050060  lui         $a1, 0x60
    ctx->pc = 0x3fe24cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
    // 0x3fe250: 0xc0f8782  jal         func_3E1E08
    ctx->pc = 0x3FE250u;
    SET_GPR_U32(ctx, 31, 0x3FE258u);
    ctx->pc = 0x3FE254u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FE250u;
    // 0x3fe254: 0x24a5fd00  addiu       $a1, $a1, -0x300 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294966528));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E1E08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E1E08u, 0x3FE250u, 0x3FE258u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FE258u;
label_3fe258:
    // 0x3fe258: 0x100000fe  b           . + 4 + (0xFE << 2)
    ctx->pc = 0x3FE258u;
    {
        const bool branch_taken_0x3fe258 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3FE25Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FE258u;
        // 0x3fe25c: 0x7bb000a0  lq          $s0, 0xA0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3fe258) {
            ctx->pc = 0x3FE654u;
            goto label_3fe654;
        }
    }
    ctx->pc = 0x3FE260u;
label_3fe260:
    // 0x3fe260: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3fe260u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3fe264: 0x6200005  bltz        $s1, . + 4 + (0x5 << 2)
    ctx->pc = 0x3FE264u;
    {
        const bool branch_taken_0x3fe264 = (GPR_S32(ctx, 17) < 0);
        ctx->pc = 0x3FE268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FE264u;
        // 0x3fe268: 0x45280a  movz        $a1, $v0, $a1 (Delay Slot)
        if (GPR_U64(ctx, 5) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3fe264) {
            ctx->pc = 0x3FE27Cu;
            goto label_3fe27c;
        }
    }
    ctx->pc = 0x3FE26Cu;
    // 0x3fe26c: 0x52800004  beql        $s4, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x3FE26Cu;
    {
        const bool branch_taken_0x3fe26c = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x3fe26c) {
            ctx->pc = 0x3FE270u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3FE26Cu;
            // 0x3fe270: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3FE280u;
            goto label_3fe280;
        }
    }
    ctx->pc = 0x3FE274u;
    // 0x3fe274: 0x54a20003  bnel        $a1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3FE274u;
    {
        const bool branch_taken_0x3fe274 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x3fe274) {
            ctx->pc = 0x3FE278u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3FE274u;
            // 0x3fe278: 0xa265029c  sb          $a1, 0x29C($s3) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 19), 668), (uint8_t)GPR_U32(ctx, 5));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3FE284u;
            goto label_3fe284;
        }
    }
    ctx->pc = 0x3FE27Cu;
label_3fe27c:
    // 0x3fe27c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x3fe27cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3fe280:
    // 0x3fe280: 0xa265029c  sb          $a1, 0x29C($s3)
    ctx->pc = 0x3fe280u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 668), (uint8_t)GPR_U32(ctx, 5));
label_3fe284:
    // 0x3fe284: 0x1a20009b  blez        $s1, . + 4 + (0x9B << 2)
    ctx->pc = 0x3FE284u;
    {
        const bool branch_taken_0x3fe284 = (GPR_S32(ctx, 17) <= 0);
        ctx->pc = 0x3FE288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FE284u;
        // 0x3fe288: 0xa271029d  sb          $s1, 0x29D($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 669), (uint8_t)GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3fe284) {
            ctx->pc = 0x3FE4F4u;
            goto label_3fe4f4;
        }
    }
    ctx->pc = 0x3FE28Cu;
    // 0x3fe28c: 0x8e6202a0  lw          $v0, 0x2A0($s3)
    ctx->pc = 0x3fe28cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 672)));
    // 0x3fe290: 0x5440002f  bnel        $v0, $zero, . + 4 + (0x2F << 2)
    ctx->pc = 0x3FE290u;
    {
        const bool branch_taken_0x3fe290 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3fe290) {
            ctx->pc = 0x3FE294u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3FE290u;
            // 0x3fe294: 0x8e6202a4  lw          $v0, 0x2A4($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 676)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3FE350u;
            goto label_3fe350;
        }
    }
    ctx->pc = 0x3FE298u;
    // 0x3fe298: 0x11283c  dsll32      $a1, $s1, 0
    ctx->pc = 0x3fe298u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 17) << (32 + 0));
    // 0x3fe29c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3fe29cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3fe2a0: 0x5283e  dsrl32      $a1, $a1, 0
    ctx->pc = 0x3fe2a0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> (32 + 0));
    // 0x3fe2a4: 0xc0f8ae2  jal         func_3E2B88
    ctx->pc = 0x3FE2A4u;
    SET_GPR_U32(ctx, 31, 0x3FE2ACu);
    ctx->pc = 0x3FE2A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FE2A4u;
    // 0x3fe2a8: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E2B88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E2B88u, 0x3FE2A4u, 0x3FE2ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FE2ACu;
label_3fe2ac:
    // 0x3fe2ac: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x3fe2acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3fe2b0: 0x1a200026  blez        $s1, . + 4 + (0x26 << 2)
    ctx->pc = 0x3FE2B0u;
    {
        const bool branch_taken_0x3fe2b0 = (GPR_S32(ctx, 17) <= 0);
        ctx->pc = 0x3FE2B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FE2B0u;
        // 0x3fe2b4: 0xae6502a0  sw          $a1, 0x2A0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 672), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3fe2b0) {
            ctx->pc = 0x3FE34Cu;
            goto label_3fe34c;
        }
    }
    ctx->pc = 0x3FE2B8u;
    // 0x3fe2b8: 0x32230003  andi        $v1, $s1, 0x3
    ctx->pc = 0x3fe2b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)3);
    // 0x3fe2bc: 0x10600014  beqz        $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x3FE2BCu;
    {
        const bool branch_taken_0x3fe2bc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3FE2C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FE2BCu;
        // 0x3fe2c0: 0x240400ff  addiu       $a0, $zero, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3fe2bc) {
            ctx->pc = 0x3FE310u;
            goto label_3fe310;
        }
    }
    ctx->pc = 0x3FE2C4u;
    // 0x3fe2c4: 0x28620002  slti        $v0, $v1, 0x2
    ctx->pc = 0x3fe2c4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x3fe2c8: 0x5440000b  bnel        $v0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x3FE2C8u;
    {
        const bool branch_taken_0x3fe2c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3fe2c8) {
            ctx->pc = 0x3FE2CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3FE2C8u;
            // 0x3fe2cc: 0x8e6202a0  lw          $v0, 0x2A0($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 672)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3FE2F8u;
            goto label_3fe2f8;
        }
    }
    ctx->pc = 0x3FE2D0u;
    // 0x3fe2d0: 0x28620003  slti        $v0, $v1, 0x3
    ctx->pc = 0x3fe2d0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x3fe2d4: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x3FE2D4u;
    {
        const bool branch_taken_0x3fe2d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3fe2d4) {
            ctx->pc = 0x3FE2D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3FE2D4u;
            // 0x3fe2d8: 0x8e6202a0  lw          $v0, 0x2A0($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 672)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3FE2E8u;
            goto label_3fe2e8;
        }
    }
    ctx->pc = 0x3FE2DCu;
    // 0x3fe2dc: 0xa0a40000  sb          $a0, 0x0($a1)
    ctx->pc = 0x3fe2dcu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x3fe2e0: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x3fe2e0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3fe2e4: 0x8e6202a0  lw          $v0, 0x2A0($s3)
    ctx->pc = 0x3fe2e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 672)));
label_3fe2e8:
    // 0x3fe2e8: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x3fe2e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x3fe2ec: 0xa0440000  sb          $a0, 0x0($v0)
    ctx->pc = 0x3fe2ecu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x3fe2f0: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x3fe2f0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x3fe2f4: 0x8e6202a0  lw          $v0, 0x2A0($s3)
    ctx->pc = 0x3fe2f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 672)));
label_3fe2f8:
    // 0x3fe2f8: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x3fe2f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x3fe2fc: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x3fe2fcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x3fe300: 0xa0440000  sb          $a0, 0x0($v0)
    ctx->pc = 0x3fe300u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x3fe304: 0x251102a  slt         $v0, $s2, $s1
    ctx->pc = 0x3fe304u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x3fe308: 0x50400011  beql        $v0, $zero, . + 4 + (0x11 << 2)
    ctx->pc = 0x3FE308u;
    {
        const bool branch_taken_0x3fe308 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3fe308) {
            ctx->pc = 0x3FE30Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3FE308u;
            // 0x3fe30c: 0x8e6202a4  lw          $v0, 0x2A4($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 676)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3FE350u;
            goto label_3fe350;
        }
    }
    ctx->pc = 0x3FE310u;
label_3fe310:
    // 0x3fe310: 0x8e6202a0  lw          $v0, 0x2A0($s3)
    ctx->pc = 0x3fe310u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 672)));
    // 0x3fe314: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x3fe314u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x3fe318: 0xa0440000  sb          $a0, 0x0($v0)
    ctx->pc = 0x3fe318u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x3fe31c: 0x8e6302a0  lw          $v1, 0x2A0($s3)
    ctx->pc = 0x3fe31cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 672)));
    // 0x3fe320: 0x2431821  addu        $v1, $s2, $v1
    ctx->pc = 0x3fe320u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x3fe324: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x3fe324u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x3fe328: 0x8e6202a0  lw          $v0, 0x2A0($s3)
    ctx->pc = 0x3fe328u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 672)));
    // 0x3fe32c: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x3fe32cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x3fe330: 0xa0440002  sb          $a0, 0x2($v0)
    ctx->pc = 0x3fe330u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 4));
    // 0x3fe334: 0x8e6302a0  lw          $v1, 0x2A0($s3)
    ctx->pc = 0x3fe334u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 672)));
    // 0x3fe338: 0x2431821  addu        $v1, $s2, $v1
    ctx->pc = 0x3fe338u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x3fe33c: 0x26520004  addiu       $s2, $s2, 0x4
    ctx->pc = 0x3fe33cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
    // 0x3fe340: 0x251102a  slt         $v0, $s2, $s1
    ctx->pc = 0x3fe340u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x3fe344: 0x1440fff2  bnez        $v0, . + 4 + (-0xE << 2)
    ctx->pc = 0x3FE344u;
    {
        const bool branch_taken_0x3fe344 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3FE348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FE344u;
        // 0x3fe348: 0xa0640003  sb          $a0, 0x3($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3fe344) {
            ctx->pc = 0x3FE310u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3fe310;
        }
    }
    ctx->pc = 0x3FE34Cu;
label_3fe34c:
    // 0x3fe34c: 0x8e6202a4  lw          $v0, 0x2A4($s3)
    ctx->pc = 0x3fe34cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 676)));
label_3fe350:
    // 0x3fe350: 0x14400037  bnez        $v0, . + 4 + (0x37 << 2)
    ctx->pc = 0x3FE350u;
    {
        const bool branch_taken_0x3fe350 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3FE354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FE350u;
        // 0x3fe354: 0x118040  sll         $s0, $s1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3fe350) {
            ctx->pc = 0x3FE430u;
            goto label_3fe430;
        }
    }
    ctx->pc = 0x3FE358u;
    // 0x3fe358: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3fe358u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3fe35c: 0x10803c  dsll32      $s0, $s0, 0
    ctx->pc = 0x3fe35cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) << (32 + 0));
    // 0x3fe360: 0x10803e  dsrl32      $s0, $s0, 0
    ctx->pc = 0x3fe360u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) >> (32 + 0));
    // 0x3fe364: 0xc0f8ae2  jal         func_3E2B88
    ctx->pc = 0x3FE364u;
    SET_GPR_U32(ctx, 31, 0x3FE36Cu);
    ctx->pc = 0x3FE368u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FE364u;
    // 0x3fe368: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E2B88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E2B88u, 0x3FE364u, 0x3FE36Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FE36Cu;
label_3fe36c:
    // 0x3fe36c: 0xae6202a4  sw          $v0, 0x2A4($s3)
    ctx->pc = 0x3fe36cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 676), GPR_U32(ctx, 2));
    // 0x3fe370: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3fe370u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3fe374: 0xc0f8ae2  jal         func_3E2B88
    ctx->pc = 0x3FE374u;
    SET_GPR_U32(ctx, 31, 0x3FE37Cu);
    ctx->pc = 0x3FE378u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FE374u;
    // 0x3fe378: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E2B88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E2B88u, 0x3FE374u, 0x3FE37Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FE37Cu;
label_3fe37c:
    // 0x3fe37c: 0x1a20002c  blez        $s1, . + 4 + (0x2C << 2)
    ctx->pc = 0x3FE37Cu;
    {
        const bool branch_taken_0x3fe37c = (GPR_S32(ctx, 17) <= 0);
        ctx->pc = 0x3FE380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FE37Cu;
        // 0x3fe380: 0xae6202a8  sw          $v0, 0x2A8($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 680), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3fe37c) {
            ctx->pc = 0x3FE430u;
            goto label_3fe430;
        }
    }
    ctx->pc = 0x3FE384u;
    // 0x3fe384: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x3fe384u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3fe388: 0x8e6802a4  lw          $t0, 0x2A4($s3)
    ctx->pc = 0x3fe388u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 676)));
    // 0x3fe38c: 0x220902d  daddu       $s2, $s1, $zero
    ctx->pc = 0x3fe38cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3fe390: 0x24040100  addiu       $a0, $zero, 0x100
    ctx->pc = 0x3fe390u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x3fe394: 0x121023  negu        $v0, $s2
    ctx->pc = 0x3fe394u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 18)));
    // 0x3fe398: 0x100182d  daddu       $v1, $t0, $zero
    ctx->pc = 0x3fe398u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3fe39c: 0x30460003  andi        $a2, $v0, 0x3
    ctx->pc = 0x3fe39cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x3fe3a0: 0x10c00016  beqz        $a2, . + 4 + (0x16 << 2)
    ctx->pc = 0x3FE3A0u;
    {
        const bool branch_taken_0x3fe3a0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x3FE3A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FE3A0u;
        // 0x3fe3a4: 0xe0282d  daddu       $a1, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3fe3a0) {
            ctx->pc = 0x3FE3FCu;
            goto label_3fe3fc;
        }
    }
    ctx->pc = 0x3FE3A8u;
    // 0x3fe3a8: 0x28c20003  slti        $v0, $a2, 0x3
    ctx->pc = 0x3fe3a8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x3fe3ac: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x3FE3ACu;
    {
        const bool branch_taken_0x3fe3ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3FE3B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FE3ACu;
        // 0x3fe3b0: 0x28c20002  slti        $v0, $a2, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3fe3ac) {
            ctx->pc = 0x3FE3E4u;
            goto label_3fe3e4;
        }
    }
    ctx->pc = 0x3FE3B4u;
    // 0x3fe3b4: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x3FE3B4u;
    {
        const bool branch_taken_0x3fe3b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3fe3b4) {
            ctx->pc = 0x3FE3B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3FE3B4u;
            // 0x3fe3b8: 0xa4640000  sh          $a0, 0x0($v1) (Delay Slot)
            WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3FE3D4u;
            goto label_3fe3d4;
        }
    }
    ctx->pc = 0x3FE3BCu;
    // 0x3fe3bc: 0xa5040000  sh          $a0, 0x0($t0)
    ctx->pc = 0x3fe3bcu;
    WRITE16(ADD32(GPR_U32(ctx, 8), 0), (uint16_t)GPR_U32(ctx, 4));
    // 0x3fe3c0: 0x24e50002  addiu       $a1, $a3, 0x2
    ctx->pc = 0x3fe3c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), 2));
    // 0x3fe3c4: 0xa4e40000  sh          $a0, 0x0($a3)
    ctx->pc = 0x3fe3c4u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 0), (uint16_t)GPR_U32(ctx, 4));
    // 0x3fe3c8: 0x25030002  addiu       $v1, $t0, 0x2
    ctx->pc = 0x3fe3c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), 2));
    // 0x3fe3cc: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x3fe3ccu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    // 0x3fe3d0: 0xa4640000  sh          $a0, 0x0($v1)
    ctx->pc = 0x3fe3d0u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 4));
label_3fe3d4:
    // 0x3fe3d4: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x3fe3d4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    // 0x3fe3d8: 0xa4a40000  sh          $a0, 0x0($a1)
    ctx->pc = 0x3fe3d8u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 4));
    // 0x3fe3dc: 0x24630002  addiu       $v1, $v1, 0x2
    ctx->pc = 0x3fe3dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
    // 0x3fe3e0: 0x24a50002  addiu       $a1, $a1, 0x2
    ctx->pc = 0x3fe3e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2));
label_3fe3e4:
    // 0x3fe3e4: 0xa4640000  sh          $a0, 0x0($v1)
    ctx->pc = 0x3fe3e4u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 4));
    // 0x3fe3e8: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x3fe3e8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    // 0x3fe3ec: 0xa4a40000  sh          $a0, 0x0($a1)
    ctx->pc = 0x3fe3ecu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 4));
    // 0x3fe3f0: 0x24630002  addiu       $v1, $v1, 0x2
    ctx->pc = 0x3fe3f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
    // 0x3fe3f4: 0x1240000e  beqz        $s2, . + 4 + (0xE << 2)
    ctx->pc = 0x3FE3F4u;
    {
        const bool branch_taken_0x3fe3f4 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x3FE3F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FE3F4u;
        // 0x3fe3f8: 0x24a50002  addiu       $a1, $a1, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3fe3f4) {
            ctx->pc = 0x3FE430u;
            goto label_3fe430;
        }
    }
    ctx->pc = 0x3FE3FCu;
label_3fe3fc:
    // 0x3fe3fc: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x3fe3fcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3fe400:
    // 0x3fe400: 0xa4640000  sh          $a0, 0x0($v1)
    ctx->pc = 0x3fe400u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 4));
    // 0x3fe404: 0x2652fffc  addiu       $s2, $s2, -0x4
    ctx->pc = 0x3fe404u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967292));
    // 0x3fe408: 0xa4440000  sh          $a0, 0x0($v0)
    ctx->pc = 0x3fe408u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 4));
    // 0x3fe40c: 0xa4640002  sh          $a0, 0x2($v1)
    ctx->pc = 0x3fe40cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 2), (uint16_t)GPR_U32(ctx, 4));
    // 0x3fe410: 0xa4440002  sh          $a0, 0x2($v0)
    ctx->pc = 0x3fe410u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 2), (uint16_t)GPR_U32(ctx, 4));
    // 0x3fe414: 0xa4640004  sh          $a0, 0x4($v1)
    ctx->pc = 0x3fe414u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4), (uint16_t)GPR_U32(ctx, 4));
    // 0x3fe418: 0xa4440004  sh          $a0, 0x4($v0)
    ctx->pc = 0x3fe418u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 4));
    // 0x3fe41c: 0xa4640006  sh          $a0, 0x6($v1)
    ctx->pc = 0x3fe41cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 6), (uint16_t)GPR_U32(ctx, 4));
    // 0x3fe420: 0xa4440006  sh          $a0, 0x6($v0)
    ctx->pc = 0x3fe420u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 6), (uint16_t)GPR_U32(ctx, 4));
    // 0x3fe424: 0x24630008  addiu       $v1, $v1, 0x8
    ctx->pc = 0x3fe424u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x3fe428: 0x1640fff5  bnez        $s2, . + 4 + (-0xB << 2)
    ctx->pc = 0x3FE428u;
    {
        const bool branch_taken_0x3fe428 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x3FE42Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FE428u;
        // 0x3fe42c: 0x24420008  addiu       $v0, $v0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3fe428) {
            ctx->pc = 0x3FE400u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3fe400;
        }
    }
    ctx->pc = 0x3FE430u;
label_3fe430:
    // 0x3fe430: 0x1a200030  blez        $s1, . + 4 + (0x30 << 2)
    ctx->pc = 0x3FE430u;
    {
        const bool branch_taken_0x3fe430 = (GPR_S32(ctx, 17) <= 0);
        ctx->pc = 0x3FE434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FE430u;
        // 0x3fe434: 0x220902d  daddu       $s2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3fe430) {
            ctx->pc = 0x3FE4F4u;
            goto label_3fe4f4;
        }
    }
    ctx->pc = 0x3FE438u;
    // 0x3fe438: 0x341e80e0  ori         $fp, $zero, 0x80E0
    ctx->pc = 0x3fe438u;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32992);
    // 0x3fe43c: 0x1ef3fc  dsll32      $fp, $fp, 15
    ctx->pc = 0x3fe43cu;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 30) << (32 + 15));
    // 0x3fe440: 0x3417ff80  ori         $s7, $zero, 0xFF80
    ctx->pc = 0x3fe440u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65408);
    // 0x3fe444: 0x17bbbc  dsll32      $s7, $s7, 14
    ctx->pc = 0x3fe444u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 23) << (32 + 14));
    // 0x3fe448: 0x24160100  addiu       $s6, $zero, 0x100
    ctx->pc = 0x3fe448u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x3fe44c: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x3fe44cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3fe450:
    // 0x3fe450: 0xde840000  ld          $a0, 0x0($s4)
    ctx->pc = 0x3fe450u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x3fe454: 0xc0beed6  jal         func_2FBB58
    ctx->pc = 0x3FE454u;
    SET_GPR_U32(ctx, 31, 0x3FE45Cu);
    ctx->pc = 0x3FE458u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FE454u;
    // 0x3fe458: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FBB58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FBB58u, 0x3FE454u, 0x3FE45Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FE45Cu;
label_3fe45c:
    // 0x3fe45c: 0x4430008  bgezl       $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x3FE45Cu;
    {
        const bool branch_taken_0x3fe45c = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x3fe45c) {
            ctx->pc = 0x3FE460u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3FE45Cu;
            // 0x3fe460: 0x8e7102a8  lw          $s1, 0x2A8($s3) (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 680)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3FE480u;
            goto label_3fe480;
        }
    }
    ctx->pc = 0x3FE464u;
    // 0x3fe464: 0x8e6202a4  lw          $v0, 0x2A4($s3)
    ctx->pc = 0x3fe464u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 676)));
    // 0x3fe468: 0x8e6302a8  lw          $v1, 0x2A8($s3)
    ctx->pc = 0x3fe468u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 680)));
    // 0x3fe46c: 0x2a21021  addu        $v0, $s5, $v0
    ctx->pc = 0x3fe46cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x3fe470: 0x2a31821  addu        $v1, $s5, $v1
    ctx->pc = 0x3fe470u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 3)));
    // 0x3fe474: 0xa4560000  sh          $s6, 0x0($v0)
    ctx->pc = 0x3fe474u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 22));
    // 0x3fe478: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x3FE478u;
    {
        const bool branch_taken_0x3fe478 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3FE47Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FE478u;
        // 0x3fe47c: 0xa4760000  sh          $s6, 0x0($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 22));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3fe478) {
            ctx->pc = 0x3FE4E4u;
            goto label_3fe4e4;
        }
    }
    ctx->pc = 0x3FE480u;
label_3fe480:
    // 0x3fe480: 0x3c0282d  daddu       $a1, $fp, $zero
    ctx->pc = 0x3fe480u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3fe484: 0xde840000  ld          $a0, 0x0($s4)
    ctx->pc = 0x3fe484u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x3fe488: 0xc0bed9c  jal         func_2FB670
    ctx->pc = 0x3FE488u;
    SET_GPR_U32(ctx, 31, 0x3FE490u);
    ctx->pc = 0x3FE48Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FE488u;
    // 0x3fe48c: 0x2b18821  addu        $s1, $s5, $s1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 17)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FB670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB670u, 0x3FE488u, 0x3FE490u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FE490u;
label_3fe490:
    // 0x3fe490: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x3fe490u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3fe494: 0xc0bed6c  jal         func_2FB5B0
    ctx->pc = 0x3FE494u;
    SET_GPR_U32(ctx, 31, 0x3FE49Cu);
    ctx->pc = 0x3FE498u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FE494u;
    // 0x3fe498: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FB5B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB5B0u, 0x3FE494u, 0x3FE49Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FE49Cu;
label_3fe49c:
    // 0x3fe49c: 0xc0bef4c  jal         func_2FBD30
    ctx->pc = 0x3FE49Cu;
    SET_GPR_U32(ctx, 31, 0x3FE4A4u);
    ctx->pc = 0x3FE4A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FE49Cu;
    // 0x3fe4a0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FBD30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FBD30u, 0x3FE49Cu, 0x3FE4A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FE4A4u;
label_3fe4a4:
    // 0x3fe4a4: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3fe4a4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x3fe4a8: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x3fe4a8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x3fe4ac: 0x8e7002a4  lw          $s0, 0x2A4($s3)
    ctx->pc = 0x3fe4acu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 676)));
    // 0x3fe4b0: 0xde850000  ld          $a1, 0x0($s4)
    ctx->pc = 0x3fe4b0u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x3fe4b4: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x3fe4b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3fe4b8: 0x2b08021  addu        $s0, $s5, $s0
    ctx->pc = 0x3fe4b8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 16)));
    // 0x3fe4bc: 0xc0bee3e  jal         func_2FB8F8
    ctx->pc = 0x3FE4BCu;
    SET_GPR_U32(ctx, 31, 0x3FE4C4u);
    ctx->pc = 0x3FE4C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FE4BCu;
    // 0x3fe4c0: 0xa6220000  sh          $v0, 0x0($s1) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 17), 0), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FB8F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB8F8u, 0x3FE4BCu, 0x3FE4C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FE4C4u;
label_3fe4c4:
    // 0x3fe4c4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3fe4c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3fe4c8: 0xc0bed6c  jal         func_2FB5B0
    ctx->pc = 0x3FE4C8u;
    SET_GPR_U32(ctx, 31, 0x3FE4D0u);
    ctx->pc = 0x3FE4CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FE4C8u;
    // 0x3fe4cc: 0x2e0282d  daddu       $a1, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FB5B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB5B0u, 0x3FE4C8u, 0x3FE4D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FE4D0u;
label_3fe4d0:
    // 0x3fe4d0: 0xc0bef4c  jal         func_2FBD30
    ctx->pc = 0x3FE4D0u;
    SET_GPR_U32(ctx, 31, 0x3FE4D8u);
    ctx->pc = 0x3FE4D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FE4D0u;
    // 0x3fe4d4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FBD30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FBD30u, 0x3FE4D0u, 0x3FE4D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FE4D8u;
label_3fe4d8:
    // 0x3fe4d8: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3fe4d8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x3fe4dc: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x3fe4dcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x3fe4e0: 0xa6020000  sh          $v0, 0x0($s0)
    ctx->pc = 0x3fe4e0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 2));
label_3fe4e4:
    // 0x3fe4e4: 0x26b50002  addiu       $s5, $s5, 0x2
    ctx->pc = 0x3fe4e4u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 2));
    // 0x3fe4e8: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x3fe4e8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    // 0x3fe4ec: 0x1640ffd8  bnez        $s2, . + 4 + (-0x28 << 2)
    ctx->pc = 0x3FE4ECu;
    {
        const bool branch_taken_0x3fe4ec = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x3FE4F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FE4ECu;
        // 0x3fe4f0: 0x26940008  addiu       $s4, $s4, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3fe4ec) {
            ctx->pc = 0x3FE450u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3fe450;
        }
    }
    ctx->pc = 0x3FE4F4u;
label_3fe4f4:
    // 0x3fe4f4: 0x8e6202ac  lw          $v0, 0x2AC($s3)
    ctx->pc = 0x3fe4f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 684)));
    // 0x3fe4f8: 0x14400017  bnez        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x3FE4F8u;
    {
        const bool branch_taken_0x3fe4f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3FE4FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FE4F8u;
        // 0x3fe4fc: 0x8fb20000  lw          $s2, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3fe4f8) {
            ctx->pc = 0x3FE558u;
            goto label_3fe558;
        }
    }
    ctx->pc = 0x3FE500u;
    // 0x3fe500: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3fe500u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3fe504: 0xc0f8ae2  jal         func_3E2B88
    ctx->pc = 0x3FE504u;
    SET_GPR_U32(ctx, 31, 0x3FE50Cu);
    ctx->pc = 0x3FE508u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FE504u;
    // 0x3fe508: 0x2405000a  addiu       $a1, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E2B88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E2B88u, 0x3FE504u, 0x3FE50Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FE50Cu;
label_3fe50c:
    // 0x3fe50c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3fe50cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3fe510: 0xae6202ac  sw          $v0, 0x2AC($s3)
    ctx->pc = 0x3fe510u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 684), GPR_U32(ctx, 2));
    // 0x3fe514: 0xc0f8ae2  jal         func_3E2B88
    ctx->pc = 0x3FE514u;
    SET_GPR_U32(ctx, 31, 0x3FE51Cu);
    ctx->pc = 0x3FE518u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FE514u;
    // 0x3fe518: 0x2405000a  addiu       $a1, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E2B88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E2B88u, 0x3FE514u, 0x3FE51Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FE51Cu;
label_3fe51c:
    // 0x3fe51c: 0x8e6402ac  lw          $a0, 0x2AC($s3)
    ctx->pc = 0x3fe51cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 684)));
    // 0x3fe520: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x3fe520u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x3fe524: 0xae6202b0  sw          $v0, 0x2B0($s3)
    ctx->pc = 0x3fe524u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 688), GPR_U32(ctx, 2));
    // 0x3fe528: 0xa4830000  sh          $v1, 0x0($a0)
    ctx->pc = 0x3fe528u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x3fe52c: 0xa4430000  sh          $v1, 0x0($v0)
    ctx->pc = 0x3fe52cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x3fe530: 0xa4830002  sh          $v1, 0x2($a0)
    ctx->pc = 0x3fe530u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 2), (uint16_t)GPR_U32(ctx, 3));
    // 0x3fe534: 0xa4430002  sh          $v1, 0x2($v0)
    ctx->pc = 0x3fe534u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 2), (uint16_t)GPR_U32(ctx, 3));
    // 0x3fe538: 0xa4830004  sh          $v1, 0x4($a0)
    ctx->pc = 0x3fe538u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4), (uint16_t)GPR_U32(ctx, 3));
    // 0x3fe53c: 0xa4430004  sh          $v1, 0x4($v0)
    ctx->pc = 0x3fe53cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
    // 0x3fe540: 0xa4830006  sh          $v1, 0x6($a0)
    ctx->pc = 0x3fe540u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 6), (uint16_t)GPR_U32(ctx, 3));
    // 0x3fe544: 0xa4430006  sh          $v1, 0x6($v0)
    ctx->pc = 0x3fe544u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 6), (uint16_t)GPR_U32(ctx, 3));
    // 0x3fe548: 0xa4830008  sh          $v1, 0x8($a0)
    ctx->pc = 0x3fe548u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 8), (uint16_t)GPR_U32(ctx, 3));
    // 0x3fe54c: 0xa4430008  sh          $v1, 0x8($v0)
    ctx->pc = 0x3fe54cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 8), (uint16_t)GPR_U32(ctx, 3));
    // 0x3fe550: 0x8fb20000  lw          $s2, 0x0($sp)
    ctx->pc = 0x3fe550u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3fe554: 0x0  nop
    ctx->pc = 0x3fe554u;
    // NOP
label_3fe558:
    // 0x3fe558: 0x24170008  addiu       $s7, $zero, 0x8
    ctx->pc = 0x3fe558u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x3fe55c: 0x341e8040  ori         $fp, $zero, 0x8040
    ctx->pc = 0x3fe55cu;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32832);
    // 0x3fe560: 0x1ef3fc  dsll32      $fp, $fp, 15
    ctx->pc = 0x3fe560u;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 30) << (32 + 15));
    // 0x3fe564: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x3fe564u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3fe568: 0x26420028  addiu       $v0, $s2, 0x28
    ctx->pc = 0x3fe568u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 40));
    // 0x3fe56c: 0x3416ff80  ori         $s6, $zero, 0xFF80
    ctx->pc = 0x3fe56cu;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65408);
    // 0x3fe570: 0x16b3bc  dsll32      $s6, $s6, 14
    ctx->pc = 0x3fe570u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 22) << (32 + 14));
    // 0x3fe574: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x3fe574u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    // 0x3fe578: 0x240a82d  daddu       $s5, $s2, $zero
    ctx->pc = 0x3fe578u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3fe57c: 0x0  nop
    ctx->pc = 0x3fe57cu;
    // NOP
label_3fe580:
    // 0x3fe580: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x3fe580u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3fe584: 0x50600007  beql        $v1, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x3FE584u;
    {
        const bool branch_taken_0x3fe584 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3fe584) {
            ctx->pc = 0x3FE588u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3FE584u;
            // 0x3fe588: 0x8e6202ac  lw          $v0, 0x2AC($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 684)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3FE5A4u;
            goto label_3fe5a4;
        }
    }
    ctx->pc = 0x3FE58Cu;
    // 0x3fe58c: 0xdea40000  ld          $a0, 0x0($s5)
    ctx->pc = 0x3fe58cu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x3fe590: 0xc0beed6  jal         func_2FBB58
    ctx->pc = 0x3FE590u;
    SET_GPR_U32(ctx, 31, 0x3FE598u);
    ctx->pc = 0x3FE594u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FE590u;
    // 0x3fe594: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FBB58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FBB58u, 0x3FE590u, 0x3FE598u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FE598u;
label_3fe598:
    // 0x3fe598: 0x4410008  bgez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x3FE598u;
    {
        const bool branch_taken_0x3fe598 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x3fe598) {
            ctx->pc = 0x3FE5BCu;
            goto label_3fe5bc;
        }
    }
    ctx->pc = 0x3FE5A0u;
    // 0x3fe5a0: 0x8e6202ac  lw          $v0, 0x2AC($s3)
    ctx->pc = 0x3fe5a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 684)));
label_3fe5a4:
    // 0x3fe5a4: 0x8e6302b0  lw          $v1, 0x2B0($s3)
    ctx->pc = 0x3fe5a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 688)));
    // 0x3fe5a8: 0x2821021  addu        $v0, $s4, $v0
    ctx->pc = 0x3fe5a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x3fe5ac: 0x2831821  addu        $v1, $s4, $v1
    ctx->pc = 0x3fe5acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 3)));
    // 0x3fe5b0: 0xa4570000  sh          $s7, 0x0($v0)
    ctx->pc = 0x3fe5b0u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 23));
    // 0x3fe5b4: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x3FE5B4u;
    {
        const bool branch_taken_0x3fe5b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3FE5B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FE5B4u;
        // 0x3fe5b8: 0xa4770000  sh          $s7, 0x0($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 23));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3fe5b4) {
            ctx->pc = 0x3FE638u;
            goto label_3fe638;
        }
    }
    ctx->pc = 0x3FE5BCu;
label_3fe5bc:
    // 0x3fe5bc: 0x3405ffc0  ori         $a1, $zero, 0xFFC0
    ctx->pc = 0x3fe5bcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65472);
    // 0x3fe5c0: 0x52bbc  dsll32      $a1, $a1, 14
    ctx->pc = 0x3fe5c0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 14));
    // 0x3fe5c4: 0xc0beed6  jal         func_2FBB58
    ctx->pc = 0x3FE5C4u;
    SET_GPR_U32(ctx, 31, 0x3FE5CCu);
    ctx->pc = 0x3FE5C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FE5C4u;
    // 0x3fe5c8: 0xde440000  ld          $a0, 0x0($s2) (Delay Slot)
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 18), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FBB58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FBB58u, 0x3FE5C4u, 0x3FE5CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FE5CCu;
label_3fe5cc:
    // 0x3fe5cc: 0x440001a  bltz        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x3FE5CCu;
    {
        const bool branch_taken_0x3fe5cc = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x3FE5D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FE5CCu;
        // 0x3fe5d0: 0xde450000  ld          $a1, 0x0($s2) (Delay Slot)
        SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3fe5cc) {
            ctx->pc = 0x3FE638u;
            goto label_3fe638;
        }
    }
    ctx->pc = 0x3FE5D4u;
    // 0x3fe5d4: 0x8e7102b0  lw          $s1, 0x2B0($s3)
    ctx->pc = 0x3fe5d4u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 688)));
    // 0x3fe5d8: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x3fe5d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3fe5dc: 0xc0bee3e  jal         func_2FB8F8
    ctx->pc = 0x3FE5DCu;
    SET_GPR_U32(ctx, 31, 0x3FE5E4u);
    ctx->pc = 0x3FE5E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FE5DCu;
    // 0x3fe5e0: 0x2918821  addu        $s1, $s4, $s1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 17)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FB8F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB8F8u, 0x3FE5DCu, 0x3FE5E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FE5E4u;
label_3fe5e4:
    // 0x3fe5e4: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x3fe5e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3fe5e8: 0xc0bed6c  jal         func_2FB5B0
    ctx->pc = 0x3FE5E8u;
    SET_GPR_U32(ctx, 31, 0x3FE5F0u);
    ctx->pc = 0x3FE5ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FE5E8u;
    // 0x3fe5ec: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FB5B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB5B0u, 0x3FE5E8u, 0x3FE5F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FE5F0u;
label_3fe5f0:
    // 0x3fe5f0: 0xc0bef4c  jal         func_2FBD30
    ctx->pc = 0x3FE5F0u;
    SET_GPR_U32(ctx, 31, 0x3FE5F8u);
    ctx->pc = 0x3FE5F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FE5F0u;
    // 0x3fe5f4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FBD30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FBD30u, 0x3FE5F0u, 0x3FE5F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FE5F8u;
label_3fe5f8:
    // 0x3fe5f8: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3fe5f8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x3fe5fc: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x3fe5fcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x3fe600: 0x8e7002ac  lw          $s0, 0x2AC($s3)
    ctx->pc = 0x3fe600u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 684)));
    // 0x3fe604: 0xde440000  ld          $a0, 0x0($s2)
    ctx->pc = 0x3fe604u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x3fe608: 0x3c0282d  daddu       $a1, $fp, $zero
    ctx->pc = 0x3fe608u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3fe60c: 0x2908021  addu        $s0, $s4, $s0
    ctx->pc = 0x3fe60cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 16)));
    // 0x3fe610: 0xc0bed9c  jal         func_2FB670
    ctx->pc = 0x3FE610u;
    SET_GPR_U32(ctx, 31, 0x3FE618u);
    ctx->pc = 0x3FE614u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FE610u;
    // 0x3fe614: 0xa6220000  sh          $v0, 0x0($s1) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 17), 0), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FB670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB670u, 0x3FE610u, 0x3FE618u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FE618u;
label_3fe618:
    // 0x3fe618: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3fe618u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3fe61c: 0xc0bed6c  jal         func_2FB5B0
    ctx->pc = 0x3FE61Cu;
    SET_GPR_U32(ctx, 31, 0x3FE624u);
    ctx->pc = 0x3FE620u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FE61Cu;
    // 0x3fe620: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FB5B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB5B0u, 0x3FE61Cu, 0x3FE624u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FE624u;
label_3fe624:
    // 0x3fe624: 0xc0bef4c  jal         func_2FBD30
    ctx->pc = 0x3FE624u;
    SET_GPR_U32(ctx, 31, 0x3FE62Cu);
    ctx->pc = 0x3FE628u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FE624u;
    // 0x3fe628: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FBD30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FBD30u, 0x3FE624u, 0x3FE62Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FE62Cu;
label_3fe62c:
    // 0x3fe62c: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3fe62cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x3fe630: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x3fe630u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x3fe634: 0xa6020000  sh          $v0, 0x0($s0)
    ctx->pc = 0x3fe634u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 2));
label_3fe638:
    // 0x3fe638: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x3fe638u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x3fe63c: 0x26520008  addiu       $s2, $s2, 0x8
    ctx->pc = 0x3fe63cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 8));
    // 0x3fe640: 0x26940002  addiu       $s4, $s4, 0x2
    ctx->pc = 0x3fe640u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 2));
    // 0x3fe644: 0x243102a  slt         $v0, $s2, $v1
    ctx->pc = 0x3fe644u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x3fe648: 0x1440ffcd  bnez        $v0, . + 4 + (-0x33 << 2)
    ctx->pc = 0x3FE648u;
    {
        const bool branch_taken_0x3fe648 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3FE64Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FE648u;
        // 0x3fe64c: 0x26b50008  addiu       $s5, $s5, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3fe648) {
            ctx->pc = 0x3FE580u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3fe580;
        }
    }
    ctx->pc = 0x3FE650u;
    // 0x3fe650: 0x7bb000a0  lq          $s0, 0xA0($sp)
    ctx->pc = 0x3fe650u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_3fe654:
    // 0x3fe654: 0x7bb10090  lq          $s1, 0x90($sp)
    ctx->pc = 0x3fe654u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x3fe658: 0x7bb20080  lq          $s2, 0x80($sp)
    ctx->pc = 0x3fe658u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x3fe65c: 0x7bb30070  lq          $s3, 0x70($sp)
    ctx->pc = 0x3fe65cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x3fe660: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x3fe660u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x3fe664: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x3fe664u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x3fe668: 0x7bb60040  lq          $s6, 0x40($sp)
    ctx->pc = 0x3fe668u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3fe66c: 0x7bb70030  lq          $s7, 0x30($sp)
    ctx->pc = 0x3fe66cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3fe670: 0x7bbe0020  lq          $fp, 0x20($sp)
    ctx->pc = 0x3fe670u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3fe674: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3fe674u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3fe678: 0x3e00008  jr          $ra
    ctx->pc = 0x3FE678u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3FE67Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FE678u;
        // 0x3fe67c: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3FE678u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3FE680u;
label_3fe680:
    // 0x3fe680: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3fe680u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3fe684: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x3fe684u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3fe688: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3fe688u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3fe68c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x3fe68cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3fe690: 0xc0ff6dc  jal         func_3FDB70
    ctx->pc = 0x3FE690u;
    SET_GPR_U32(ctx, 31, 0x3FE698u);
    ctx->pc = 0x3FE694u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FE690u;
    // 0x3fe694: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3FDB70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3FDB70u, 0x3FE690u, 0x3FE698u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FE698u;
label_3fe698:
    // 0x3fe698: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3fe698u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3fe69c: 0x3e00008  jr          $ra
    ctx->pc = 0x3FE69Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3FE6A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FE69Cu;
        // 0x3fe6a0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3FE69Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3FE6A4u;
    // 0x3fe6a4: 0x0  nop
    ctx->pc = 0x3fe6a4u;
    // NOP
    // 0x3fe6a8: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x3fe6a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x3fe6ac: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x3fe6acu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3fe6b0: 0x45102a  slt         $v0, $v0, $a1
    ctx->pc = 0x3fe6b0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x3fe6b4: 0xa2180b  movn        $v1, $a1, $v0
    ctx->pc = 0x3fe6b4u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 5));
    // 0x3fe6b8: 0x3e00008  jr          $ra
    ctx->pc = 0x3FE6B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3FE6BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FE6B8u;
        // 0x3fe6bc: 0xfc830238  sd          $v1, 0x238($a0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 4), 568), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3FE6B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3FE6C0u;
}
