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

// Function: sub_003FF230
// Address: 0x3ff230 - 0x3ff808
void sub_003FF230_0x3ff230(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003FF230_0x3ff230");
#endif

    switch (ctx->pc) {
        case 0x3ff378u: goto label_3ff378;
        case 0x3ff528u: goto label_3ff528;
        case 0x3ff6e8u: goto label_3ff6e8;
        case 0x3ff7d4u: goto label_3ff7d4;
        case 0x3ff7e8u: goto label_3ff7e8;
        default: break;
    }

    ctx->pc = 0x3ff230u;

    // 0x3ff230: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3ff230u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3ff234: 0x3c0200ff  lui         $v0, 0xFF
    ctx->pc = 0x3ff234u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)255 << 16));
    // 0x3ff238: 0x3442ff00  ori         $v0, $v0, 0xFF00
    ctx->pc = 0x3ff238u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65280);
    // 0x3ff23c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x3ff23cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x3ff240: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3ff240u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3ff244: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3ff244u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ff248: 0x3c040001  lui         $a0, 0x1
    ctx->pc = 0x3ff248u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1 << 16));
    // 0x3ff24c: 0x34840800  ori         $a0, $a0, 0x800
    ctx->pc = 0x3ff24cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)2048);
    // 0x3ff250: 0xde030010  ld          $v1, 0x10($s0)
    ctx->pc = 0x3ff250u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x3ff254: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x3ff254u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x3ff258: 0x14640166  bne         $v1, $a0, . + 4 + (0x166 << 2)
    ctx->pc = 0x3FF258u;
    {
        const bool branch_taken_0x3ff258 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x3FF25Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FF258u;
        // 0x3ff25c: 0xa0602d  daddu       $t4, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ff258) {
            ctx->pc = 0x3FF7F4u;
            goto label_3ff7f4;
        }
    }
    ctx->pc = 0x3FF260u;
    // 0x3ff260: 0x6183c  dsll32      $v1, $a2, 0
    ctx->pc = 0x3ff260u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) << (32 + 0));
    // 0x3ff264: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x3ff264u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x3ff268: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x3ff268u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3ff26c: 0x10620077  beq         $v1, $v0, . + 4 + (0x77 << 2)
    ctx->pc = 0x3FF26Cu;
    {
        const bool branch_taken_0x3ff26c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x3FF270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FF26Cu;
        // 0x3ff270: 0x28620003  slti        $v0, $v1, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ff26c) {
            ctx->pc = 0x3FF44Cu;
            goto label_3ff44c;
        }
    }
    ctx->pc = 0x3FF274u;
    // 0x3ff274: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3FF274u;
    {
        const bool branch_taken_0x3ff274 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3FF278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FF274u;
        // 0x3ff278: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ff274) {
            ctx->pc = 0x3FF28Cu;
            goto label_3ff28c;
        }
    }
    ctx->pc = 0x3FF27Cu;
    // 0x3ff27c: 0x10620008  beq         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x3FF27Cu;
    {
        const bool branch_taken_0x3ff27c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x3FF280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FF27Cu;
        // 0x3ff280: 0x30cf00ff  andi        $t7, $a2, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 15, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ff27c) {
            ctx->pc = 0x3FF2A0u;
            goto label_3ff2a0;
        }
    }
    ctx->pc = 0x3FF284u;
    // 0x3ff284: 0x10000150  b           . + 4 + (0x150 << 2)
    ctx->pc = 0x3FF284u;
    {
        const bool branch_taken_0x3ff284 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3FF288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FF284u;
        // 0x3ff288: 0x92050012  lbu         $a1, 0x12($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 18)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ff284) {
            ctx->pc = 0x3FF7C8u;
            goto label_3ff7c8;
        }
    }
    ctx->pc = 0x3FF28Cu;
label_3ff28c:
    // 0x3ff28c: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x3ff28cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x3ff290: 0x106200de  beq         $v1, $v0, . + 4 + (0xDE << 2)
    ctx->pc = 0x3FF290u;
    {
        const bool branch_taken_0x3ff290 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x3FF294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FF290u;
        // 0x3ff294: 0x30cf00ff  andi        $t7, $a2, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 15, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ff290) {
            ctx->pc = 0x3FF60Cu;
            goto label_3ff60c;
        }
    }
    ctx->pc = 0x3FF298u;
    // 0x3ff298: 0x1000014b  b           . + 4 + (0x14B << 2)
    ctx->pc = 0x3FF298u;
    {
        const bool branch_taken_0x3ff298 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3FF29Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FF298u;
        // 0x3ff29c: 0x92050012  lbu         $a1, 0x12($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 18)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ff298) {
            ctx->pc = 0x3FF7C8u;
            goto label_3ff7c8;
        }
    }
    ctx->pc = 0x3FF2A0u;
label_3ff2a0:
    // 0x3ff2a0: 0xde0e0000  ld          $t6, 0x0($s0)
    ctx->pc = 0x3ff2a0u;
    SET_GPR_U64(ctx, 14, READ64(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x3ff2a4: 0x180502d  daddu       $t2, $t4, $zero
    ctx->pc = 0x3ff2a4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ff2a8: 0x24080080  addiu       $t0, $zero, 0x80
    ctx->pc = 0x3ff2a8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x3ff2ac: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3ff2acu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ff2b0: 0x11c00061  beqz        $t6, . + 4 + (0x61 << 2)
    ctx->pc = 0x3FF2B0u;
    {
        const bool branch_taken_0x3ff2b0 = (GPR_U64(ctx, 14) == GPR_U64(ctx, 0));
        ctx->pc = 0x3FF2B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FF2B0u;
        // 0x3ff2b4: 0x682d  daddu       $t5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ff2b0) {
            ctx->pc = 0x3FF438u;
            goto label_3ff438;
        }
    }
    ctx->pc = 0x3FF2B8u;
    // 0x3ff2b8: 0x180482d  daddu       $t1, $t4, $zero
    ctx->pc = 0x3ff2b8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ff2bc: 0x180582d  daddu       $t3, $t4, $zero
    ctx->pc = 0x3ff2bcu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ff2c0: 0x19c0001b  blez        $t6, . + 4 + (0x1B << 2)
    ctx->pc = 0x3FF2C0u;
    {
        const bool branch_taken_0x3ff2c0 = (GPR_S32(ctx, 14) <= 0);
        ctx->pc = 0x3FF2C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FF2C0u;
        // 0x3ff2c4: 0x31c30003  andi        $v1, $t6, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 14) & (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ff2c0) {
            ctx->pc = 0x3FF330u;
            goto label_3ff330;
        }
    }
    ctx->pc = 0x3FF2C8u;
    // 0x3ff2c8: 0x10600029  beqz        $v1, . + 4 + (0x29 << 2)
    ctx->pc = 0x3FF2C8u;
    {
        const bool branch_taken_0x3ff2c8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3FF2CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FF2C8u;
        // 0x3ff2cc: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ff2c8) {
            ctx->pc = 0x3FF370u;
            goto label_3ff370;
        }
    }
    ctx->pc = 0x3FF2D0u;
    // 0x3ff2d0: 0x54400018  bnel        $v0, $zero, . + 4 + (0x18 << 2)
    ctx->pc = 0x3FF2D0u;
    {
        const bool branch_taken_0x3ff2d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3ff2d0) {
            ctx->pc = 0x3FF2D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3FF2D0u;
            // 0x3ff2d4: 0x91620000  lbu         $v0, 0x0($t3) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 11), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3FF334u;
            goto label_3ff334;
        }
    }
    ctx->pc = 0x3FF2D8u;
    // 0x3ff2d8: 0x28620003  slti        $v0, $v1, 0x3
    ctx->pc = 0x3ff2d8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x3ff2dc: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x3FF2DCu;
    {
        const bool branch_taken_0x3ff2dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3ff2dc) {
            ctx->pc = 0x3FF2E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3FF2DCu;
            // 0x3ff2e0: 0x91620000  lbu         $v0, 0x0($t3) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 11), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3FF300u;
            goto label_3ff300;
        }
    }
    ctx->pc = 0x3FF2E4u;
    // 0x3ff2e4: 0x91820000  lbu         $v0, 0x0($t4)
    ctx->pc = 0x3ff2e4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x3ff2e8: 0x100382d  daddu       $a3, $t0, $zero
    ctx->pc = 0x3ff2e8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ff2ec: 0x258b0001  addiu       $t3, $t4, 0x1
    ctx->pc = 0x3ff2ecu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 12), 1));
    // 0x3ff2f0: 0x240d0001  addiu       $t5, $zero, 0x1
    ctx->pc = 0x3ff2f0u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3ff2f4: 0x2380a  movz        $a3, $zero, $v0
    ctx->pc = 0x3ff2f4u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 0));
    // 0x3ff2f8: 0x24080040  addiu       $t0, $zero, 0x40
    ctx->pc = 0x3ff2f8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x3ff2fc: 0x91620000  lbu         $v0, 0x0($t3)
    ctx->pc = 0x3ff2fcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 11), 0)));
label_3ff300:
    // 0x3ff300: 0xe81825  or          $v1, $a3, $t0
    ctx->pc = 0x3ff300u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) | GPR_U64(ctx, 8));
    // 0x3ff304: 0x29040002  slti        $a0, $t0, 0x2
    ctx->pc = 0x3ff304u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x3ff308: 0x256b0001  addiu       $t3, $t3, 0x1
    ctx->pc = 0x3ff308u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
    // 0x3ff30c: 0x62380b  movn        $a3, $v1, $v0
    ctx->pc = 0x3ff30cu;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 3));
    // 0x3ff310: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3FF310u;
    {
        const bool branch_taken_0x3ff310 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x3FF314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FF310u;
        // 0x3ff314: 0x84043  sra         $t0, $t0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 8, SRA32(GPR_S32(ctx, 8), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ff310) {
            ctx->pc = 0x3FF32Cu;
            goto label_3ff32c;
        }
    }
    ctx->pc = 0x3FF318u;
    // 0x3ff318: 0xa1270000  sb          $a3, 0x0($t1)
    ctx->pc = 0x3ff318u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 0), (uint8_t)GPR_U32(ctx, 7));
    // 0x3ff31c: 0x24080080  addiu       $t0, $zero, 0x80
    ctx->pc = 0x3ff31cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x3ff320: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x3ff320u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x3ff324: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x3ff324u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
    // 0x3ff328: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3ff328u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3ff32c:
    // 0x3ff32c: 0x65ad0001  daddiu      $t5, $t5, 0x1
    ctx->pc = 0x3ff32cu;
    SET_GPR_S64(ctx, 13, (int64_t)GPR_S64(ctx, 13) + (int64_t)(int32_t)1);
label_3ff330:
    // 0x3ff330: 0x91620000  lbu         $v0, 0x0($t3)
    ctx->pc = 0x3ff330u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 11), 0)));
label_3ff334:
    // 0x3ff334: 0xe81825  or          $v1, $a3, $t0
    ctx->pc = 0x3ff334u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) | GPR_U64(ctx, 8));
    // 0x3ff338: 0x29040002  slti        $a0, $t0, 0x2
    ctx->pc = 0x3ff338u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x3ff33c: 0x256b0001  addiu       $t3, $t3, 0x1
    ctx->pc = 0x3ff33cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
    // 0x3ff340: 0x62380b  movn        $a3, $v1, $v0
    ctx->pc = 0x3ff340u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 3));
    // 0x3ff344: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3FF344u;
    {
        const bool branch_taken_0x3ff344 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x3FF348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FF344u;
        // 0x3ff348: 0x84043  sra         $t0, $t0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 8, SRA32(GPR_S32(ctx, 8), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ff344) {
            ctx->pc = 0x3FF360u;
            goto label_3ff360;
        }
    }
    ctx->pc = 0x3FF34Cu;
    // 0x3ff34c: 0xa1270000  sb          $a3, 0x0($t1)
    ctx->pc = 0x3ff34cu;
    WRITE8(ADD32(GPR_U32(ctx, 9), 0), (uint8_t)GPR_U32(ctx, 7));
    // 0x3ff350: 0x24080080  addiu       $t0, $zero, 0x80
    ctx->pc = 0x3ff350u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x3ff354: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x3ff354u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x3ff358: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x3ff358u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
    // 0x3ff35c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3ff35cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3ff360:
    // 0x3ff360: 0x65ad0001  daddiu      $t5, $t5, 0x1
    ctx->pc = 0x3ff360u;
    SET_GPR_S64(ctx, 13, (int64_t)GPR_S64(ctx, 13) + (int64_t)(int32_t)1);
    // 0x3ff364: 0x1ae102b  sltu        $v0, $t5, $t6
    ctx->pc = 0x3ff364u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 13) < (uint64_t)GPR_U64(ctx, 14)) ? 1 : 0);
    // 0x3ff368: 0x10400034  beqz        $v0, . + 4 + (0x34 << 2)
    ctx->pc = 0x3FF368u;
    {
        const bool branch_taken_0x3ff368 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3FF36Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FF368u;
        // 0x3ff36c: 0x24020080  addiu       $v0, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ff368) {
            ctx->pc = 0x3FF43Cu;
            goto label_3ff43c;
        }
    }
    ctx->pc = 0x3FF370u;
label_3ff370:
    // 0x3ff370: 0x160282d  daddu       $a1, $t3, $zero
    ctx->pc = 0x3ff370u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ff374: 0x90a20000  lbu         $v0, 0x0($a1)
    ctx->pc = 0x3ff374u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
label_3ff378:
    // 0x3ff378: 0xe81825  or          $v1, $a3, $t0
    ctx->pc = 0x3ff378u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) | GPR_U64(ctx, 8));
    // 0x3ff37c: 0x29040002  slti        $a0, $t0, 0x2
    ctx->pc = 0x3ff37cu;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x3ff380: 0x62380b  movn        $a3, $v1, $v0
    ctx->pc = 0x3ff380u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 3));
    // 0x3ff384: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3FF384u;
    {
        const bool branch_taken_0x3ff384 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x3FF388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FF384u;
        // 0x3ff388: 0x84043  sra         $t0, $t0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 8, SRA32(GPR_S32(ctx, 8), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ff384) {
            ctx->pc = 0x3FF3A0u;
            goto label_3ff3a0;
        }
    }
    ctx->pc = 0x3FF38Cu;
    // 0x3ff38c: 0xa1270000  sb          $a3, 0x0($t1)
    ctx->pc = 0x3ff38cu;
    WRITE8(ADD32(GPR_U32(ctx, 9), 0), (uint8_t)GPR_U32(ctx, 7));
    // 0x3ff390: 0x24080080  addiu       $t0, $zero, 0x80
    ctx->pc = 0x3ff390u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x3ff394: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x3ff394u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x3ff398: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x3ff398u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
    // 0x3ff39c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3ff39cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3ff3a0:
    // 0x3ff3a0: 0x90a20001  lbu         $v0, 0x1($a1)
    ctx->pc = 0x3ff3a0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 1)));
    // 0x3ff3a4: 0xe81825  or          $v1, $a3, $t0
    ctx->pc = 0x3ff3a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) | GPR_U64(ctx, 8));
    // 0x3ff3a8: 0x29040002  slti        $a0, $t0, 0x2
    ctx->pc = 0x3ff3a8u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x3ff3ac: 0x62380b  movn        $a3, $v1, $v0
    ctx->pc = 0x3ff3acu;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 3));
    // 0x3ff3b0: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3FF3B0u;
    {
        const bool branch_taken_0x3ff3b0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x3FF3B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FF3B0u;
        // 0x3ff3b4: 0x84043  sra         $t0, $t0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 8, SRA32(GPR_S32(ctx, 8), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ff3b0) {
            ctx->pc = 0x3FF3CCu;
            goto label_3ff3cc;
        }
    }
    ctx->pc = 0x3FF3B8u;
    // 0x3ff3b8: 0xa1270000  sb          $a3, 0x0($t1)
    ctx->pc = 0x3ff3b8u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 0), (uint8_t)GPR_U32(ctx, 7));
    // 0x3ff3bc: 0x24080080  addiu       $t0, $zero, 0x80
    ctx->pc = 0x3ff3bcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x3ff3c0: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x3ff3c0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x3ff3c4: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x3ff3c4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
    // 0x3ff3c8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3ff3c8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3ff3cc:
    // 0x3ff3cc: 0x90a20002  lbu         $v0, 0x2($a1)
    ctx->pc = 0x3ff3ccu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 2)));
    // 0x3ff3d0: 0xe81825  or          $v1, $a3, $t0
    ctx->pc = 0x3ff3d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) | GPR_U64(ctx, 8));
    // 0x3ff3d4: 0x29040002  slti        $a0, $t0, 0x2
    ctx->pc = 0x3ff3d4u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x3ff3d8: 0x62380b  movn        $a3, $v1, $v0
    ctx->pc = 0x3ff3d8u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 3));
    // 0x3ff3dc: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3FF3DCu;
    {
        const bool branch_taken_0x3ff3dc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x3FF3E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FF3DCu;
        // 0x3ff3e0: 0x84043  sra         $t0, $t0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 8, SRA32(GPR_S32(ctx, 8), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ff3dc) {
            ctx->pc = 0x3FF3F8u;
            goto label_3ff3f8;
        }
    }
    ctx->pc = 0x3FF3E4u;
    // 0x3ff3e4: 0xa1270000  sb          $a3, 0x0($t1)
    ctx->pc = 0x3ff3e4u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 0), (uint8_t)GPR_U32(ctx, 7));
    // 0x3ff3e8: 0x24080080  addiu       $t0, $zero, 0x80
    ctx->pc = 0x3ff3e8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x3ff3ec: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x3ff3ecu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x3ff3f0: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x3ff3f0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
    // 0x3ff3f4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3ff3f4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3ff3f8:
    // 0x3ff3f8: 0x90a20003  lbu         $v0, 0x3($a1)
    ctx->pc = 0x3ff3f8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 3)));
    // 0x3ff3fc: 0xe81825  or          $v1, $a3, $t0
    ctx->pc = 0x3ff3fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) | GPR_U64(ctx, 8));
    // 0x3ff400: 0x29040002  slti        $a0, $t0, 0x2
    ctx->pc = 0x3ff400u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x3ff404: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x3ff404u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x3ff408: 0x62380b  movn        $a3, $v1, $v0
    ctx->pc = 0x3ff408u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 3));
    // 0x3ff40c: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3FF40Cu;
    {
        const bool branch_taken_0x3ff40c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x3FF410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FF40Cu;
        // 0x3ff410: 0x84043  sra         $t0, $t0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 8, SRA32(GPR_S32(ctx, 8), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ff40c) {
            ctx->pc = 0x3FF428u;
            goto label_3ff428;
        }
    }
    ctx->pc = 0x3FF414u;
    // 0x3ff414: 0xa1270000  sb          $a3, 0x0($t1)
    ctx->pc = 0x3ff414u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 0), (uint8_t)GPR_U32(ctx, 7));
    // 0x3ff418: 0x24080080  addiu       $t0, $zero, 0x80
    ctx->pc = 0x3ff418u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x3ff41c: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x3ff41cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x3ff420: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x3ff420u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
    // 0x3ff424: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3ff424u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3ff428:
    // 0x3ff428: 0x65ad0004  daddiu      $t5, $t5, 0x4
    ctx->pc = 0x3ff428u;
    SET_GPR_S64(ctx, 13, (int64_t)GPR_S64(ctx, 13) + (int64_t)(int32_t)4);
    // 0x3ff42c: 0x1ae102b  sltu        $v0, $t5, $t6
    ctx->pc = 0x3ff42cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 13) < (uint64_t)GPR_U64(ctx, 14)) ? 1 : 0);
    // 0x3ff430: 0x5440ffd1  bnel        $v0, $zero, . + 4 + (-0x2F << 2)
    ctx->pc = 0x3FF430u;
    {
        const bool branch_taken_0x3ff430 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3ff430) {
            ctx->pc = 0x3FF434u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3FF430u;
            // 0x3ff434: 0x90a20000  lbu         $v0, 0x0($a1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3FF378u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3ff378;
        }
    }
    ctx->pc = 0x3FF438u;
label_3ff438:
    // 0x3ff438: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x3ff438u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_3ff43c:
    // 0x3ff43c: 0x550200e1  bnel        $t0, $v0, . + 4 + (0xE1 << 2)
    ctx->pc = 0x3FF43Cu;
    {
        const bool branch_taken_0x3ff43c = (GPR_U64(ctx, 8) != GPR_U64(ctx, 2));
        if (branch_taken_0x3ff43c) {
            ctx->pc = 0x3FF440u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3FF43Cu;
            // 0x3ff440: 0xa1470000  sb          $a3, 0x0($t2) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 10), 0), (uint8_t)GPR_U32(ctx, 7));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3FF7C4u;
            goto label_3ff7c4;
        }
    }
    ctx->pc = 0x3FF444u;
    // 0x3ff444: 0x100000e0  b           . + 4 + (0xE0 << 2)
    ctx->pc = 0x3FF444u;
    {
        const bool branch_taken_0x3ff444 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3FF448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FF444u;
        // 0x3ff448: 0x92050012  lbu         $a1, 0x12($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 18)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ff444) {
            ctx->pc = 0x3FF7C8u;
            goto label_3ff7c8;
        }
    }
    ctx->pc = 0x3FF44Cu;
label_3ff44c:
    // 0x3ff44c: 0xde0b0000  ld          $t3, 0x0($s0)
    ctx->pc = 0x3ff44cu;
    SET_GPR_U64(ctx, 11, READ64(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x3ff450: 0x180402d  daddu       $t0, $t4, $zero
    ctx->pc = 0x3ff450u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ff454: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x3ff454u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x3ff458: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3ff458u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ff45c: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x3ff45cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ff460: 0x11600065  beqz        $t3, . + 4 + (0x65 << 2)
    ctx->pc = 0x3FF460u;
    {
        const bool branch_taken_0x3ff460 = (GPR_U64(ctx, 11) == GPR_U64(ctx, 0));
        ctx->pc = 0x3FF464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FF460u;
        // 0x3ff464: 0x30cf00ff  andi        $t7, $a2, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 15, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ff460) {
            ctx->pc = 0x3FF5F8u;
            goto label_3ff5f8;
        }
    }
    ctx->pc = 0x3FF468u;
    // 0x3ff468: 0x180482d  daddu       $t1, $t4, $zero
    ctx->pc = 0x3ff468u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ff46c: 0x180382d  daddu       $a3, $t4, $zero
    ctx->pc = 0x3ff46cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ff470: 0x1960001c  blez        $t3, . + 4 + (0x1C << 2)
    ctx->pc = 0x3FF470u;
    {
        const bool branch_taken_0x3ff470 = (GPR_S32(ctx, 11) <= 0);
        ctx->pc = 0x3FF474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FF470u;
        // 0x3ff474: 0x31640003  andi        $a0, $t3, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ff470) {
            ctx->pc = 0x3FF4E4u;
            goto label_3ff4e4;
        }
    }
    ctx->pc = 0x3FF478u;
    // 0x3ff478: 0x1080002a  beqz        $a0, . + 4 + (0x2A << 2)
    ctx->pc = 0x3FF478u;
    {
        const bool branch_taken_0x3ff478 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x3FF47Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FF478u;
        // 0x3ff47c: 0x28820002  slti        $v0, $a0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ff478) {
            ctx->pc = 0x3FF524u;
            goto label_3ff524;
        }
    }
    ctx->pc = 0x3FF480u;
    // 0x3ff480: 0x54400019  bnel        $v0, $zero, . + 4 + (0x19 << 2)
    ctx->pc = 0x3FF480u;
    {
        const bool branch_taken_0x3ff480 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3ff480) {
            ctx->pc = 0x3FF484u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3FF480u;
            // 0x3ff484: 0x91220000  lbu         $v0, 0x0($t1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3FF4E8u;
            goto label_3ff4e8;
        }
    }
    ctx->pc = 0x3FF488u;
    // 0x3ff488: 0x28820003  slti        $v0, $a0, 0x3
    ctx->pc = 0x3ff488u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x3ff48c: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x3FF48Cu;
    {
        const bool branch_taken_0x3ff48c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3ff48c) {
            ctx->pc = 0x3FF490u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3FF48Cu;
            // 0x3ff490: 0x91220000  lbu         $v0, 0x0($t1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3FF4B0u;
            goto label_3ff4b0;
        }
    }
    ctx->pc = 0x3FF494u;
    // 0x3ff494: 0x91820000  lbu         $v0, 0x0($t4)
    ctx->pc = 0x3ff494u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x3ff498: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x3ff498u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x3ff49c: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x3ff49cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x3ff4a0: 0x654a0001  daddiu      $t2, $t2, 0x1
    ctx->pc = 0x3ff4a0u;
    SET_GPR_S64(ctx, 10, (int64_t)GPR_S64(ctx, 10) + (int64_t)(int32_t)1);
    // 0x3ff4a4: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x3ff4a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x3ff4a8: 0x22980  sll         $a1, $v0, 6
    ctx->pc = 0x3ff4a8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x3ff4ac: 0x91220000  lbu         $v0, 0x0($t1)
    ctx->pc = 0x3ff4acu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
label_3ff4b0:
    // 0x3ff4b0: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x3ff4b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x3ff4b4: 0x621004  sllv        $v0, $v0, $v1
    ctx->pc = 0x3ff4b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 3) & 0x1F));
    // 0x3ff4b8: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x3FF4B8u;
    {
        const bool branch_taken_0x3ff4b8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3FF4BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FF4B8u;
        // 0x3ff4bc: 0xa22825  or          $a1, $a1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ff4b8) {
            ctx->pc = 0x3FF4D8u;
            goto label_3ff4d8;
        }
    }
    ctx->pc = 0x3FF4C0u;
    // 0x3ff4c0: 0xa0e50000  sb          $a1, 0x0($a3)
    ctx->pc = 0x3ff4c0u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 0), (uint8_t)GPR_U32(ctx, 5));
    // 0x3ff4c4: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x3ff4c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x3ff4c8: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x3ff4c8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x3ff4cc: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x3ff4ccu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x3ff4d0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x3FF4D0u;
    {
        const bool branch_taken_0x3ff4d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3FF4D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FF4D0u;
        // 0x3ff4d4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ff4d0) {
            ctx->pc = 0x3FF4DCu;
            goto label_3ff4dc;
        }
    }
    ctx->pc = 0x3FF4D8u;
label_3ff4d8:
    // 0x3ff4d8: 0x2463fffe  addiu       $v1, $v1, -0x2
    ctx->pc = 0x3ff4d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967294));
label_3ff4dc:
    // 0x3ff4dc: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x3ff4dcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x3ff4e0: 0x654a0001  daddiu      $t2, $t2, 0x1
    ctx->pc = 0x3ff4e0u;
    SET_GPR_S64(ctx, 10, (int64_t)GPR_S64(ctx, 10) + (int64_t)(int32_t)1);
label_3ff4e4:
    // 0x3ff4e4: 0x91220000  lbu         $v0, 0x0($t1)
    ctx->pc = 0x3ff4e4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
label_3ff4e8:
    // 0x3ff4e8: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x3ff4e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x3ff4ec: 0x621004  sllv        $v0, $v0, $v1
    ctx->pc = 0x3ff4ecu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 3) & 0x1F));
    // 0x3ff4f0: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x3FF4F0u;
    {
        const bool branch_taken_0x3ff4f0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3FF4F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FF4F0u;
        // 0x3ff4f4: 0xa22825  or          $a1, $a1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ff4f0) {
            ctx->pc = 0x3FF510u;
            goto label_3ff510;
        }
    }
    ctx->pc = 0x3FF4F8u;
    // 0x3ff4f8: 0xa0e50000  sb          $a1, 0x0($a3)
    ctx->pc = 0x3ff4f8u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 0), (uint8_t)GPR_U32(ctx, 5));
    // 0x3ff4fc: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x3ff4fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x3ff500: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x3ff500u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x3ff504: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x3ff504u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x3ff508: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x3FF508u;
    {
        const bool branch_taken_0x3ff508 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3FF50Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FF508u;
        // 0x3ff50c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ff508) {
            ctx->pc = 0x3FF514u;
            goto label_3ff514;
        }
    }
    ctx->pc = 0x3FF510u;
label_3ff510:
    // 0x3ff510: 0x2463fffe  addiu       $v1, $v1, -0x2
    ctx->pc = 0x3ff510u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967294));
label_3ff514:
    // 0x3ff514: 0x654a0001  daddiu      $t2, $t2, 0x1
    ctx->pc = 0x3ff514u;
    SET_GPR_S64(ctx, 10, (int64_t)GPR_S64(ctx, 10) + (int64_t)(int32_t)1);
    // 0x3ff518: 0x14b102b  sltu        $v0, $t2, $t3
    ctx->pc = 0x3ff518u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 10) < (uint64_t)GPR_U64(ctx, 11)) ? 1 : 0);
    // 0x3ff51c: 0x10400036  beqz        $v0, . + 4 + (0x36 << 2)
    ctx->pc = 0x3FF51Cu;
    {
        const bool branch_taken_0x3ff51c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3FF520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FF51Cu;
        // 0x3ff520: 0x25290001  addiu       $t1, $t1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ff51c) {
            ctx->pc = 0x3FF5F8u;
            goto label_3ff5f8;
        }
    }
    ctx->pc = 0x3FF524u;
label_3ff524:
    // 0x3ff524: 0x120202d  daddu       $a0, $t1, $zero
    ctx->pc = 0x3ff524u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_3ff528:
    // 0x3ff528: 0x90820000  lbu         $v0, 0x0($a0)
    ctx->pc = 0x3ff528u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3ff52c: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x3ff52cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x3ff530: 0x621004  sllv        $v0, $v0, $v1
    ctx->pc = 0x3ff530u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 3) & 0x1F));
    // 0x3ff534: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x3FF534u;
    {
        const bool branch_taken_0x3ff534 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3FF538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FF534u;
        // 0x3ff538: 0xa22825  or          $a1, $a1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ff534) {
            ctx->pc = 0x3FF554u;
            goto label_3ff554;
        }
    }
    ctx->pc = 0x3FF53Cu;
    // 0x3ff53c: 0xa0e50000  sb          $a1, 0x0($a3)
    ctx->pc = 0x3ff53cu;
    WRITE8(ADD32(GPR_U32(ctx, 7), 0), (uint8_t)GPR_U32(ctx, 5));
    // 0x3ff540: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x3ff540u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x3ff544: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x3ff544u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x3ff548: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x3ff548u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x3ff54c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x3FF54Cu;
    {
        const bool branch_taken_0x3ff54c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3FF550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FF54Cu;
        // 0x3ff550: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ff54c) {
            ctx->pc = 0x3FF558u;
            goto label_3ff558;
        }
    }
    ctx->pc = 0x3FF554u;
label_3ff554:
    // 0x3ff554: 0x2463fffe  addiu       $v1, $v1, -0x2
    ctx->pc = 0x3ff554u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967294));
label_3ff558:
    // 0x3ff558: 0x90820001  lbu         $v0, 0x1($a0)
    ctx->pc = 0x3ff558u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1)));
    // 0x3ff55c: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x3ff55cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x3ff560: 0x621004  sllv        $v0, $v0, $v1
    ctx->pc = 0x3ff560u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 3) & 0x1F));
    // 0x3ff564: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x3FF564u;
    {
        const bool branch_taken_0x3ff564 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3FF568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FF564u;
        // 0x3ff568: 0xa22825  or          $a1, $a1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ff564) {
            ctx->pc = 0x3FF584u;
            goto label_3ff584;
        }
    }
    ctx->pc = 0x3FF56Cu;
    // 0x3ff56c: 0xa0e50000  sb          $a1, 0x0($a3)
    ctx->pc = 0x3ff56cu;
    WRITE8(ADD32(GPR_U32(ctx, 7), 0), (uint8_t)GPR_U32(ctx, 5));
    // 0x3ff570: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x3ff570u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x3ff574: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x3ff574u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x3ff578: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x3ff578u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x3ff57c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x3FF57Cu;
    {
        const bool branch_taken_0x3ff57c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3FF580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FF57Cu;
        // 0x3ff580: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ff57c) {
            ctx->pc = 0x3FF588u;
            goto label_3ff588;
        }
    }
    ctx->pc = 0x3FF584u;
label_3ff584:
    // 0x3ff584: 0x2463fffe  addiu       $v1, $v1, -0x2
    ctx->pc = 0x3ff584u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967294));
label_3ff588:
    // 0x3ff588: 0x90820002  lbu         $v0, 0x2($a0)
    ctx->pc = 0x3ff588u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x3ff58c: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x3ff58cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x3ff590: 0x621004  sllv        $v0, $v0, $v1
    ctx->pc = 0x3ff590u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 3) & 0x1F));
    // 0x3ff594: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x3FF594u;
    {
        const bool branch_taken_0x3ff594 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3FF598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FF594u;
        // 0x3ff598: 0xa22825  or          $a1, $a1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ff594) {
            ctx->pc = 0x3FF5B4u;
            goto label_3ff5b4;
        }
    }
    ctx->pc = 0x3FF59Cu;
    // 0x3ff59c: 0xa0e50000  sb          $a1, 0x0($a3)
    ctx->pc = 0x3ff59cu;
    WRITE8(ADD32(GPR_U32(ctx, 7), 0), (uint8_t)GPR_U32(ctx, 5));
    // 0x3ff5a0: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x3ff5a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x3ff5a4: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x3ff5a4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x3ff5a8: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x3ff5a8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x3ff5ac: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x3FF5ACu;
    {
        const bool branch_taken_0x3ff5ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3FF5B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FF5ACu;
        // 0x3ff5b0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ff5ac) {
            ctx->pc = 0x3FF5B8u;
            goto label_3ff5b8;
        }
    }
    ctx->pc = 0x3FF5B4u;
label_3ff5b4:
    // 0x3ff5b4: 0x2463fffe  addiu       $v1, $v1, -0x2
    ctx->pc = 0x3ff5b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967294));
label_3ff5b8:
    // 0x3ff5b8: 0x90820003  lbu         $v0, 0x3($a0)
    ctx->pc = 0x3ff5b8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 3)));
    // 0x3ff5bc: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x3ff5bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x3ff5c0: 0x621004  sllv        $v0, $v0, $v1
    ctx->pc = 0x3ff5c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 3) & 0x1F));
    // 0x3ff5c4: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x3FF5C4u;
    {
        const bool branch_taken_0x3ff5c4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3FF5C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FF5C4u;
        // 0x3ff5c8: 0xa22825  or          $a1, $a1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ff5c4) {
            ctx->pc = 0x3FF5E4u;
            goto label_3ff5e4;
        }
    }
    ctx->pc = 0x3FF5CCu;
    // 0x3ff5cc: 0xa0e50000  sb          $a1, 0x0($a3)
    ctx->pc = 0x3ff5ccu;
    WRITE8(ADD32(GPR_U32(ctx, 7), 0), (uint8_t)GPR_U32(ctx, 5));
    // 0x3ff5d0: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x3ff5d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x3ff5d4: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x3ff5d4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x3ff5d8: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x3ff5d8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x3ff5dc: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x3FF5DCu;
    {
        const bool branch_taken_0x3ff5dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3FF5E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FF5DCu;
        // 0x3ff5e0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ff5dc) {
            ctx->pc = 0x3FF5E8u;
            goto label_3ff5e8;
        }
    }
    ctx->pc = 0x3FF5E4u;
label_3ff5e4:
    // 0x3ff5e4: 0x2463fffe  addiu       $v1, $v1, -0x2
    ctx->pc = 0x3ff5e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967294));
label_3ff5e8:
    // 0x3ff5e8: 0x654a0004  daddiu      $t2, $t2, 0x4
    ctx->pc = 0x3ff5e8u;
    SET_GPR_S64(ctx, 10, (int64_t)GPR_S64(ctx, 10) + (int64_t)(int32_t)4);
    // 0x3ff5ec: 0x14b102b  sltu        $v0, $t2, $t3
    ctx->pc = 0x3ff5ecu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 10) < (uint64_t)GPR_U64(ctx, 11)) ? 1 : 0);
    // 0x3ff5f0: 0x1440ffcd  bnez        $v0, . + 4 + (-0x33 << 2)
    ctx->pc = 0x3FF5F0u;
    {
        const bool branch_taken_0x3ff5f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3FF5F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FF5F0u;
        // 0x3ff5f4: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ff5f0) {
            ctx->pc = 0x3FF528u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3ff528;
        }
    }
    ctx->pc = 0x3FF5F8u;
label_3ff5f8:
    // 0x3ff5f8: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x3ff5f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x3ff5fc: 0x54620071  bnel        $v1, $v0, . + 4 + (0x71 << 2)
    ctx->pc = 0x3FF5FCu;
    {
        const bool branch_taken_0x3ff5fc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x3ff5fc) {
            ctx->pc = 0x3FF600u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3FF5FCu;
            // 0x3ff600: 0xa1050000  sb          $a1, 0x0($t0) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 8), 0), (uint8_t)GPR_U32(ctx, 5));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3FF7C4u;
            goto label_3ff7c4;
        }
    }
    ctx->pc = 0x3FF604u;
    // 0x3ff604: 0x10000070  b           . + 4 + (0x70 << 2)
    ctx->pc = 0x3FF604u;
    {
        const bool branch_taken_0x3ff604 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3FF608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FF604u;
        // 0x3ff608: 0x92050012  lbu         $a1, 0x12($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 18)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ff604) {
            ctx->pc = 0x3FF7C8u;
            goto label_3ff7c8;
        }
    }
    ctx->pc = 0x3FF60Cu;
label_3ff60c:
    // 0x3ff60c: 0xde0b0000  ld          $t3, 0x0($s0)
    ctx->pc = 0x3ff60cu;
    SET_GPR_U64(ctx, 11, READ64(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x3ff610: 0x180282d  daddu       $a1, $t4, $zero
    ctx->pc = 0x3ff610u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ff614: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x3ff614u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x3ff618: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3ff618u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ff61c: 0x11600066  beqz        $t3, . + 4 + (0x66 << 2)
    ctx->pc = 0x3FF61Cu;
    {
        const bool branch_taken_0x3ff61c = (GPR_U64(ctx, 11) == GPR_U64(ctx, 0));
        ctx->pc = 0x3FF620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FF61Cu;
        // 0x3ff620: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ff61c) {
            ctx->pc = 0x3FF7B8u;
            goto label_3ff7b8;
        }
    }
    ctx->pc = 0x3FF624u;
    // 0x3ff624: 0xa0482d  daddu       $t1, $a1, $zero
    ctx->pc = 0x3ff624u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ff628: 0xa0402d  daddu       $t0, $a1, $zero
    ctx->pc = 0x3ff628u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ff62c: 0x1960001c  blez        $t3, . + 4 + (0x1C << 2)
    ctx->pc = 0x3FF62Cu;
    {
        const bool branch_taken_0x3ff62c = (GPR_S32(ctx, 11) <= 0);
        ctx->pc = 0x3FF630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FF62Cu;
        // 0x3ff630: 0x31640003  andi        $a0, $t3, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ff62c) {
            ctx->pc = 0x3FF6A0u;
            goto label_3ff6a0;
        }
    }
    ctx->pc = 0x3FF634u;
    // 0x3ff634: 0x1080002a  beqz        $a0, . + 4 + (0x2A << 2)
    ctx->pc = 0x3FF634u;
    {
        const bool branch_taken_0x3ff634 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x3FF638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FF634u;
        // 0x3ff638: 0x28820002  slti        $v0, $a0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ff634) {
            ctx->pc = 0x3FF6E0u;
            goto label_3ff6e0;
        }
    }
    ctx->pc = 0x3FF63Cu;
    // 0x3ff63c: 0x54400019  bnel        $v0, $zero, . + 4 + (0x19 << 2)
    ctx->pc = 0x3FF63Cu;
    {
        const bool branch_taken_0x3ff63c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3ff63c) {
            ctx->pc = 0x3FF640u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3FF63Cu;
            // 0x3ff640: 0x91220000  lbu         $v0, 0x0($t1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3FF6A4u;
            goto label_3ff6a4;
        }
    }
    ctx->pc = 0x3FF644u;
    // 0x3ff644: 0x28820003  slti        $v0, $a0, 0x3
    ctx->pc = 0x3ff644u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x3ff648: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x3FF648u;
    {
        const bool branch_taken_0x3ff648 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3ff648) {
            ctx->pc = 0x3FF64Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3FF648u;
            // 0x3ff64c: 0x91220000  lbu         $v0, 0x0($t1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3FF66Cu;
            goto label_3ff66c;
        }
    }
    ctx->pc = 0x3FF650u;
    // 0x3ff650: 0x90a20000  lbu         $v0, 0x0($a1)
    ctx->pc = 0x3ff650u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3ff654: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x3ff654u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ff658: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x3ff658u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x3ff65c: 0x654a0001  daddiu      $t2, $t2, 0x1
    ctx->pc = 0x3ff65cu;
    SET_GPR_S64(ctx, 10, (int64_t)GPR_S64(ctx, 10) + (int64_t)(int32_t)1);
    // 0x3ff660: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x3ff660u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x3ff664: 0x23900  sll         $a3, $v0, 4
    ctx->pc = 0x3ff664u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x3ff668: 0x91220000  lbu         $v0, 0x0($t1)
    ctx->pc = 0x3ff668u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
label_3ff66c:
    // 0x3ff66c: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x3ff66cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x3ff670: 0x621004  sllv        $v0, $v0, $v1
    ctx->pc = 0x3ff670u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 3) & 0x1F));
    // 0x3ff674: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x3FF674u;
    {
        const bool branch_taken_0x3ff674 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3FF678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FF674u;
        // 0x3ff678: 0xe23825  or          $a3, $a3, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ff674) {
            ctx->pc = 0x3FF694u;
            goto label_3ff694;
        }
    }
    ctx->pc = 0x3FF67Cu;
    // 0x3ff67c: 0xa1070000  sb          $a3, 0x0($t0)
    ctx->pc = 0x3ff67cu;
    WRITE8(ADD32(GPR_U32(ctx, 8), 0), (uint8_t)GPR_U32(ctx, 7));
    // 0x3ff680: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x3ff680u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x3ff684: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x3ff684u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x3ff688: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x3ff688u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x3ff68c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x3FF68Cu;
    {
        const bool branch_taken_0x3ff68c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3FF690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FF68Cu;
        // 0x3ff690: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ff68c) {
            ctx->pc = 0x3FF698u;
            goto label_3ff698;
        }
    }
    ctx->pc = 0x3FF694u;
label_3ff694:
    // 0x3ff694: 0x2463fffc  addiu       $v1, $v1, -0x4
    ctx->pc = 0x3ff694u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967292));
label_3ff698:
    // 0x3ff698: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x3ff698u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x3ff69c: 0x654a0001  daddiu      $t2, $t2, 0x1
    ctx->pc = 0x3ff69cu;
    SET_GPR_S64(ctx, 10, (int64_t)GPR_S64(ctx, 10) + (int64_t)(int32_t)1);
label_3ff6a0:
    // 0x3ff6a0: 0x91220000  lbu         $v0, 0x0($t1)
    ctx->pc = 0x3ff6a0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
label_3ff6a4:
    // 0x3ff6a4: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x3ff6a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x3ff6a8: 0x621004  sllv        $v0, $v0, $v1
    ctx->pc = 0x3ff6a8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 3) & 0x1F));
    // 0x3ff6ac: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x3FF6ACu;
    {
        const bool branch_taken_0x3ff6ac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3FF6B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FF6ACu;
        // 0x3ff6b0: 0xe23825  or          $a3, $a3, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ff6ac) {
            ctx->pc = 0x3FF6CCu;
            goto label_3ff6cc;
        }
    }
    ctx->pc = 0x3FF6B4u;
    // 0x3ff6b4: 0xa1070000  sb          $a3, 0x0($t0)
    ctx->pc = 0x3ff6b4u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 0), (uint8_t)GPR_U32(ctx, 7));
    // 0x3ff6b8: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x3ff6b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x3ff6bc: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x3ff6bcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x3ff6c0: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x3ff6c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x3ff6c4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x3FF6C4u;
    {
        const bool branch_taken_0x3ff6c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3FF6C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FF6C4u;
        // 0x3ff6c8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ff6c4) {
            ctx->pc = 0x3FF6D0u;
            goto label_3ff6d0;
        }
    }
    ctx->pc = 0x3FF6CCu;
label_3ff6cc:
    // 0x3ff6cc: 0x2463fffc  addiu       $v1, $v1, -0x4
    ctx->pc = 0x3ff6ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967292));
label_3ff6d0:
    // 0x3ff6d0: 0x654a0001  daddiu      $t2, $t2, 0x1
    ctx->pc = 0x3ff6d0u;
    SET_GPR_S64(ctx, 10, (int64_t)GPR_S64(ctx, 10) + (int64_t)(int32_t)1);
    // 0x3ff6d4: 0x14b102b  sltu        $v0, $t2, $t3
    ctx->pc = 0x3ff6d4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 10) < (uint64_t)GPR_U64(ctx, 11)) ? 1 : 0);
    // 0x3ff6d8: 0x10400037  beqz        $v0, . + 4 + (0x37 << 2)
    ctx->pc = 0x3FF6D8u;
    {
        const bool branch_taken_0x3ff6d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3FF6DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FF6D8u;
        // 0x3ff6dc: 0x25290001  addiu       $t1, $t1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ff6d8) {
            ctx->pc = 0x3FF7B8u;
            goto label_3ff7b8;
        }
    }
    ctx->pc = 0x3FF6E0u;
label_3ff6e0:
    // 0x3ff6e0: 0x120202d  daddu       $a0, $t1, $zero
    ctx->pc = 0x3ff6e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ff6e4: 0x0  nop
    ctx->pc = 0x3ff6e4u;
    // NOP
label_3ff6e8:
    // 0x3ff6e8: 0x90820000  lbu         $v0, 0x0($a0)
    ctx->pc = 0x3ff6e8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3ff6ec: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x3ff6ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x3ff6f0: 0x621004  sllv        $v0, $v0, $v1
    ctx->pc = 0x3ff6f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 3) & 0x1F));
    // 0x3ff6f4: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x3FF6F4u;
    {
        const bool branch_taken_0x3ff6f4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3FF6F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FF6F4u;
        // 0x3ff6f8: 0xe23825  or          $a3, $a3, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ff6f4) {
            ctx->pc = 0x3FF714u;
            goto label_3ff714;
        }
    }
    ctx->pc = 0x3FF6FCu;
    // 0x3ff6fc: 0xa1070000  sb          $a3, 0x0($t0)
    ctx->pc = 0x3ff6fcu;
    WRITE8(ADD32(GPR_U32(ctx, 8), 0), (uint8_t)GPR_U32(ctx, 7));
    // 0x3ff700: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x3ff700u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x3ff704: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x3ff704u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x3ff708: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x3ff708u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x3ff70c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x3FF70Cu;
    {
        const bool branch_taken_0x3ff70c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3FF710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FF70Cu;
        // 0x3ff710: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ff70c) {
            ctx->pc = 0x3FF718u;
            goto label_3ff718;
        }
    }
    ctx->pc = 0x3FF714u;
label_3ff714:
    // 0x3ff714: 0x2463fffc  addiu       $v1, $v1, -0x4
    ctx->pc = 0x3ff714u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967292));
label_3ff718:
    // 0x3ff718: 0x90820001  lbu         $v0, 0x1($a0)
    ctx->pc = 0x3ff718u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1)));
    // 0x3ff71c: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x3ff71cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x3ff720: 0x621004  sllv        $v0, $v0, $v1
    ctx->pc = 0x3ff720u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 3) & 0x1F));
    // 0x3ff724: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x3FF724u;
    {
        const bool branch_taken_0x3ff724 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3FF728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FF724u;
        // 0x3ff728: 0xe23825  or          $a3, $a3, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ff724) {
            ctx->pc = 0x3FF744u;
            goto label_3ff744;
        }
    }
    ctx->pc = 0x3FF72Cu;
    // 0x3ff72c: 0xa1070000  sb          $a3, 0x0($t0)
    ctx->pc = 0x3ff72cu;
    WRITE8(ADD32(GPR_U32(ctx, 8), 0), (uint8_t)GPR_U32(ctx, 7));
    // 0x3ff730: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x3ff730u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x3ff734: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x3ff734u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x3ff738: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x3ff738u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x3ff73c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x3FF73Cu;
    {
        const bool branch_taken_0x3ff73c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3FF740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FF73Cu;
        // 0x3ff740: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ff73c) {
            ctx->pc = 0x3FF748u;
            goto label_3ff748;
        }
    }
    ctx->pc = 0x3FF744u;
label_3ff744:
    // 0x3ff744: 0x2463fffc  addiu       $v1, $v1, -0x4
    ctx->pc = 0x3ff744u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967292));
label_3ff748:
    // 0x3ff748: 0x90820002  lbu         $v0, 0x2($a0)
    ctx->pc = 0x3ff748u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x3ff74c: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x3ff74cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x3ff750: 0x621004  sllv        $v0, $v0, $v1
    ctx->pc = 0x3ff750u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 3) & 0x1F));
    // 0x3ff754: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x3FF754u;
    {
        const bool branch_taken_0x3ff754 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3FF758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FF754u;
        // 0x3ff758: 0xe23825  or          $a3, $a3, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ff754) {
            ctx->pc = 0x3FF774u;
            goto label_3ff774;
        }
    }
    ctx->pc = 0x3FF75Cu;
    // 0x3ff75c: 0xa1070000  sb          $a3, 0x0($t0)
    ctx->pc = 0x3ff75cu;
    WRITE8(ADD32(GPR_U32(ctx, 8), 0), (uint8_t)GPR_U32(ctx, 7));
    // 0x3ff760: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x3ff760u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x3ff764: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x3ff764u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x3ff768: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x3ff768u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x3ff76c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x3FF76Cu;
    {
        const bool branch_taken_0x3ff76c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3FF770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FF76Cu;
        // 0x3ff770: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ff76c) {
            ctx->pc = 0x3FF778u;
            goto label_3ff778;
        }
    }
    ctx->pc = 0x3FF774u;
label_3ff774:
    // 0x3ff774: 0x2463fffc  addiu       $v1, $v1, -0x4
    ctx->pc = 0x3ff774u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967292));
label_3ff778:
    // 0x3ff778: 0x90820003  lbu         $v0, 0x3($a0)
    ctx->pc = 0x3ff778u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 3)));
    // 0x3ff77c: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x3ff77cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x3ff780: 0x621004  sllv        $v0, $v0, $v1
    ctx->pc = 0x3ff780u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 3) & 0x1F));
    // 0x3ff784: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x3FF784u;
    {
        const bool branch_taken_0x3ff784 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3FF788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FF784u;
        // 0x3ff788: 0xe23825  or          $a3, $a3, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ff784) {
            ctx->pc = 0x3FF7A4u;
            goto label_3ff7a4;
        }
    }
    ctx->pc = 0x3FF78Cu;
    // 0x3ff78c: 0xa1070000  sb          $a3, 0x0($t0)
    ctx->pc = 0x3ff78cu;
    WRITE8(ADD32(GPR_U32(ctx, 8), 0), (uint8_t)GPR_U32(ctx, 7));
    // 0x3ff790: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x3ff790u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x3ff794: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x3ff794u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x3ff798: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x3ff798u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x3ff79c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x3FF79Cu;
    {
        const bool branch_taken_0x3ff79c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3FF7A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FF79Cu;
        // 0x3ff7a0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ff79c) {
            ctx->pc = 0x3FF7A8u;
            goto label_3ff7a8;
        }
    }
    ctx->pc = 0x3FF7A4u;
label_3ff7a4:
    // 0x3ff7a4: 0x2463fffc  addiu       $v1, $v1, -0x4
    ctx->pc = 0x3ff7a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967292));
label_3ff7a8:
    // 0x3ff7a8: 0x654a0004  daddiu      $t2, $t2, 0x4
    ctx->pc = 0x3ff7a8u;
    SET_GPR_S64(ctx, 10, (int64_t)GPR_S64(ctx, 10) + (int64_t)(int32_t)4);
    // 0x3ff7ac: 0x14b102b  sltu        $v0, $t2, $t3
    ctx->pc = 0x3ff7acu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 10) < (uint64_t)GPR_U64(ctx, 11)) ? 1 : 0);
    // 0x3ff7b0: 0x1440ffcd  bnez        $v0, . + 4 + (-0x33 << 2)
    ctx->pc = 0x3FF7B0u;
    {
        const bool branch_taken_0x3ff7b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3FF7B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FF7B0u;
        // 0x3ff7b4: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ff7b0) {
            ctx->pc = 0x3FF6E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3ff6e8;
        }
    }
    ctx->pc = 0x3FF7B8u;
label_3ff7b8:
    // 0x3ff7b8: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x3ff7b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x3ff7bc: 0x54620001  bnel        $v1, $v0, . + 4 + (0x1 << 2)
    ctx->pc = 0x3FF7BCu;
    {
        const bool branch_taken_0x3ff7bc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x3ff7bc) {
            ctx->pc = 0x3FF7C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3FF7BCu;
            // 0x3ff7c0: 0xa0a70000  sb          $a3, 0x0($a1) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 7));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3FF7C4u;
            goto label_3ff7c4;
        }
    }
    ctx->pc = 0x3FF7C4u;
label_3ff7c4:
    // 0x3ff7c4: 0x92050012  lbu         $a1, 0x12($s0)
    ctx->pc = 0x3ff7c4u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 18)));
label_3ff7c8:
    // 0x3ff7c8: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x3ff7c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ff7cc: 0xc0be4b8  jal         func_2F92E0
    ctx->pc = 0x3FF7CCu;
    SET_GPR_U32(ctx, 31, 0x3FF7D4u);
    ctx->pc = 0x3FF7D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FF7CCu;
    // 0x3ff7d0: 0xa20f0011  sb          $t7, 0x11($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 17), (uint8_t)GPR_U32(ctx, 15));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F92E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F92E0u, 0x3FF7CCu, 0x3FF7D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FF7D4u;
label_3ff7d4:
    // 0x3ff7d4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x3ff7d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x3ff7d8: 0xde040000  ld          $a0, 0x0($s0)
    ctx->pc = 0x3ff7d8u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x3ff7dc: 0xa2020013  sb          $v0, 0x13($s0)
    ctx->pc = 0x3ff7dcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 19), (uint8_t)GPR_U32(ctx, 2));
    // 0x3ff7e0: 0xc0be4b8  jal         func_2F92E0
    ctx->pc = 0x3FF7E0u;
    SET_GPR_U32(ctx, 31, 0x3FF7E8u);
    ctx->pc = 0x3FF7E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FF7E0u;
    // 0x3ff7e4: 0x304500ff  andi        $a1, $v0, 0xFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F92E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F92E0u, 0x3FF7E0u, 0x3FF7E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FF7E8u;
label_3ff7e8:
    // 0x3ff7e8: 0x64420007  daddiu      $v0, $v0, 0x7
    ctx->pc = 0x3ff7e8u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 2) + (int64_t)(int32_t)7);
    // 0x3ff7ec: 0x210fa  dsrl        $v0, $v0, 3
    ctx->pc = 0x3ff7ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 3);
    // 0x3ff7f0: 0xfe020008  sd          $v0, 0x8($s0)
    ctx->pc = 0x3ff7f0u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 8), GPR_U64(ctx, 2));
label_3ff7f4:
    // 0x3ff7f4: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x3ff7f4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3ff7f8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3ff7f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3ff7fc: 0x3e00008  jr          $ra
    ctx->pc = 0x3FF7FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3FF800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FF7FCu;
        // 0x3ff800: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3FF7FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3FF804u;
    // 0x3ff804: 0x0  nop
    ctx->pc = 0x3ff804u;
    // NOP
    ctx->pc = 0x3ff808u;
}
