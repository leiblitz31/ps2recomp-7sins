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

// Function: sub_0045B100
// Address: 0x45b100 - 0x45b2b0
void sub_0045B100_0x45b100(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0045B100_0x45b100");
#endif

    switch (ctx->pc) {
        case 0x45b120u: goto label_45b120;
        case 0x45b12cu: goto label_45b12c;
        default: break;
    }

    ctx->pc = 0x45b100u;

    // 0x45b100: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x45b100u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x45b104: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x45b104u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x45b108: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x45b108u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x45b10c: 0xaf80bf48  sw          $zero, -0x40B8($gp)
    ctx->pc = 0x45b10cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950728), GPR_U32(ctx, 0));
    // 0x45b110: 0xaf80bf4c  sw          $zero, -0x40B4($gp)
    ctx->pc = 0x45b110u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950732), GPR_U32(ctx, 0));
    // 0x45b114: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x45b114u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x45b118: 0x10000058  b           . + 4 + (0x58 << 2)
    ctx->pc = 0x45B118u;
    {
        const bool branch_taken_0x45b118 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x45b118) {
            ctx->pc = 0x45B27Cu;
            goto label_45b27c;
        }
    }
    ctx->pc = 0x45B120u;
label_45b120:
    // 0x45b120: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x45b120u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x45b124: 0x10000051  b           . + 4 + (0x51 << 2)
    ctx->pc = 0x45B124u;
    {
        const bool branch_taken_0x45b124 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x45b124) {
            ctx->pc = 0x45B26Cu;
            goto label_45b26c;
        }
    }
    ctx->pc = 0x45B12Cu;
label_45b12c:
    // 0x45b12c: 0x101940  sll         $v1, $s0, 5
    ctx->pc = 0x45b12cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 5));
    // 0x45b130: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x45b130u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x45b134: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x45b134u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x45b138: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x45b138u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
    // 0x45b13c: 0x246343e0  addiu       $v1, $v1, 0x43E0
    ctx->pc = 0x45b13cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 17376));
    // 0x45b140: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x45b140u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x45b144: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x45b144u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x45b148: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x45b148u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x45b14c: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x45b14cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x45b150: 0x101940  sll         $v1, $s0, 5
    ctx->pc = 0x45b150u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 5));
    // 0x45b154: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x45b154u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x45b158: 0x320c0  sll         $a0, $v1, 3
    ctx->pc = 0x45b158u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x45b15c: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x45b15cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
    // 0x45b160: 0x246344f0  addiu       $v1, $v1, 0x44F0
    ctx->pc = 0x45b160u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 17648));
    // 0x45b164: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x45b164u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x45b168: 0x1118c0  sll         $v1, $s1, 3
    ctx->pc = 0x45b168u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 3));
    // 0x45b16c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x45b16cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x45b170: 0xfc600000  sd          $zero, 0x0($v1)
    ctx->pc = 0x45b170u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 0));
    // 0x45b174: 0x101940  sll         $v1, $s0, 5
    ctx->pc = 0x45b174u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 5));
    // 0x45b178: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x45b178u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x45b17c: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x45b17cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x45b180: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x45b180u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
    // 0x45b184: 0x24634700  addiu       $v1, $v1, 0x4700
    ctx->pc = 0x45b184u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 18176));
    // 0x45b188: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x45b188u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x45b18c: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x45b18cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x45b190: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x45b190u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x45b194: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x45b194u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x45b198: 0x24030012  addiu       $v1, $zero, 0x12
    ctx->pc = 0x45b198u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x45b19c: 0x1203000a  beq         $s0, $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x45B19Cu;
    {
        const bool branch_taken_0x45b19c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        if (branch_taken_0x45b19c) {
            ctx->pc = 0x45B1C8u;
            goto label_45b1c8;
        }
    }
    ctx->pc = 0x45B1A4u;
    // 0x45b1a4: 0x24030013  addiu       $v1, $zero, 0x13
    ctx->pc = 0x45b1a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x45b1a8: 0x12030007  beq         $s0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x45B1A8u;
    {
        const bool branch_taken_0x45b1a8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        if (branch_taken_0x45b1a8) {
            ctx->pc = 0x45B1C8u;
            goto label_45b1c8;
        }
    }
    ctx->pc = 0x45B1B0u;
    // 0x45b1b0: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x45b1b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x45b1b4: 0x12030004  beq         $s0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x45B1B4u;
    {
        const bool branch_taken_0x45b1b4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        if (branch_taken_0x45b1b4) {
            ctx->pc = 0x45B1C8u;
            goto label_45b1c8;
        }
    }
    ctx->pc = 0x45B1BCu;
    // 0x45b1bc: 0x24030011  addiu       $v1, $zero, 0x11
    ctx->pc = 0x45b1bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x45b1c0: 0x16030017  bne         $s0, $v1, . + 4 + (0x17 << 2)
    ctx->pc = 0x45B1C0u;
    {
        const bool branch_taken_0x45b1c0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 3));
        if (branch_taken_0x45b1c0) {
            ctx->pc = 0x45B220u;
            goto label_45b220;
        }
    }
    ctx->pc = 0x45B1C8u;
label_45b1c8:
    // 0x45b1c8: 0x2405007f  addiu       $a1, $zero, 0x7F
    ctx->pc = 0x45b1c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
    // 0x45b1cc: 0x101940  sll         $v1, $s0, 5
    ctx->pc = 0x45b1ccu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 5));
    // 0x45b1d0: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x45b1d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x45b1d4: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x45b1d4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x45b1d8: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x45b1d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
    // 0x45b1dc: 0x24634810  addiu       $v1, $v1, 0x4810
    ctx->pc = 0x45b1dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 18448));
    // 0x45b1e0: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x45b1e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x45b1e4: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x45b1e4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x45b1e8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x45b1e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x45b1ec: 0xac650000  sw          $a1, 0x0($v1)
    ctx->pc = 0x45b1ecu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
    // 0x45b1f0: 0x2405007f  addiu       $a1, $zero, 0x7F
    ctx->pc = 0x45b1f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
    // 0x45b1f4: 0x101940  sll         $v1, $s0, 5
    ctx->pc = 0x45b1f4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 5));
    // 0x45b1f8: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x45b1f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x45b1fc: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x45b1fcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x45b200: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x45b200u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
    // 0x45b204: 0x24634920  addiu       $v1, $v1, 0x4920
    ctx->pc = 0x45b204u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 18720));
    // 0x45b208: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x45b208u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x45b20c: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x45b20cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x45b210: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x45b210u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x45b214: 0xac650000  sw          $a1, 0x0($v1)
    ctx->pc = 0x45b214u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
    // 0x45b218: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x45B218u;
    {
        const bool branch_taken_0x45b218 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x45b218) {
            ctx->pc = 0x45B268u;
            goto label_45b268;
        }
    }
    ctx->pc = 0x45B220u;
label_45b220:
    // 0x45b220: 0x101940  sll         $v1, $s0, 5
    ctx->pc = 0x45b220u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 5));
    // 0x45b224: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x45b224u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x45b228: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x45b228u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x45b22c: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x45b22cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
    // 0x45b230: 0x24634810  addiu       $v1, $v1, 0x4810
    ctx->pc = 0x45b230u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 18448));
    // 0x45b234: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x45b234u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x45b238: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x45b238u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x45b23c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x45b23cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x45b240: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x45b240u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x45b244: 0x101940  sll         $v1, $s0, 5
    ctx->pc = 0x45b244u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 5));
    // 0x45b248: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x45b248u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x45b24c: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x45b24cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x45b250: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x45b250u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
    // 0x45b254: 0x24634920  addiu       $v1, $v1, 0x4920
    ctx->pc = 0x45b254u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 18720));
    // 0x45b258: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x45b258u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x45b25c: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x45b25cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x45b260: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x45b260u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x45b264: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x45b264u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
label_45b268:
    // 0x45b268: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x45b268u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_45b26c:
    // 0x45b26c: 0x2e230021  sltiu       $v1, $s1, 0x21
    ctx->pc = 0x45b26cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)33) ? 1 : 0);
    // 0x45b270: 0x1460ffae  bnez        $v1, . + 4 + (-0x52 << 2)
    ctx->pc = 0x45B270u;
    {
        const bool branch_taken_0x45b270 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x45b270) {
            ctx->pc = 0x45B12Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_45b12c;
        }
    }
    ctx->pc = 0x45B278u;
    // 0x45b278: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x45b278u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_45b27c:
    // 0x45b27c: 0x2e030002  sltiu       $v1, $s0, 0x2
    ctx->pc = 0x45b27cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x45b280: 0x1460ffa7  bnez        $v1, . + 4 + (-0x59 << 2)
    ctx->pc = 0x45B280u;
    {
        const bool branch_taken_0x45b280 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x45b280) {
            ctx->pc = 0x45B120u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_45b120;
        }
    }
    ctx->pc = 0x45B288u;
    // 0x45b288: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x45b288u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x45b28c: 0xaf83bf58  sw          $v1, -0x40A8($gp)
    ctx->pc = 0x45b28cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950744), GPR_U32(ctx, 3));
    // 0x45b290: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x45b290u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x45b294: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x45b294u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x45b298: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x45b298u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x45b29c: 0x3e00008  jr          $ra
    ctx->pc = 0x45B29Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x45B29Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x45B2A4u;
    // 0x45b2a4: 0x0  nop
    ctx->pc = 0x45b2a4u;
    // NOP
    // 0x45b2a8: 0x0  nop
    ctx->pc = 0x45b2a8u;
    // NOP
    // 0x45b2ac: 0x0  nop
    ctx->pc = 0x45b2acu;
    // NOP
    ctx->pc = 0x45b2b0u;
}
