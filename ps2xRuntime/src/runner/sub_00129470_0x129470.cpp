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

// Function: sub_00129470
// Address: 0x129470 - 0x129700
void sub_00129470_0x129470(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00129470_0x129470");
#endif

    ctx->pc = 0x129470u;

    // 0x129470: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x129470u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x129474: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x129474u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x129478: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x129478u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12947c: 0x1060009d  beqz        $v1, . + 4 + (0x9D << 2)
    ctx->pc = 0x12947Cu;
    {
        const bool branch_taken_0x12947c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x12947c) {
            ctx->pc = 0x1296F4u;
            goto label_1296f4;
        }
    }
    ctx->pc = 0x129484u;
    // 0x129484: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x129484u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x129488: 0x90630001  lbu         $v1, 0x1($v1)
    ctx->pc = 0x129488u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 1)));
    // 0x12948c: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x12948cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x129490: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x129490u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x129494: 0x3086000f  andi        $a2, $a0, 0xF
    ctx->pc = 0x129494u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)15);
    // 0x129498: 0x4810004  bgez        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x129498u;
    {
        const bool branch_taken_0x129498 = (GPR_S32(ctx, 4) >= 0);
        if (branch_taken_0x129498) {
            ctx->pc = 0x1294ACu;
            goto label_1294ac;
        }
    }
    ctx->pc = 0x1294A0u;
    // 0x1294a0: 0x10c00002  beqz        $a2, . + 4 + (0x2 << 2)
    ctx->pc = 0x1294A0u;
    {
        const bool branch_taken_0x1294a0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x1294a0) {
            ctx->pc = 0x1294ACu;
            goto label_1294ac;
        }
    }
    ctx->pc = 0x1294A8u;
    // 0x1294a8: 0x24c6fff0  addiu       $a2, $a2, -0x10
    ctx->pc = 0x1294a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967280));
label_1294ac:
    // 0x1294ac: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x1294acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1294b0: 0x90630001  lbu         $v1, 0x1($v1)
    ctx->pc = 0x1294b0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 1)));
    // 0x1294b4: 0x306500ff  andi        $a1, $v1, 0xFF
    ctx->pc = 0x1294b4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1294b8: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x1294b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1294bc: 0x52103  sra         $a0, $a1, 4
    ctx->pc = 0x1294bcu;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 5), 4));
    // 0x1294c0: 0x4a10003  bgez        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1294C0u;
    {
        const bool branch_taken_0x1294c0 = (GPR_S32(ctx, 5) >= 0);
        if (branch_taken_0x1294c0) {
            ctx->pc = 0x1294D0u;
            goto label_1294d0;
        }
    }
    ctx->pc = 0x1294C8u;
    // 0x1294c8: 0x24a3000f  addiu       $v1, $a1, 0xF
    ctx->pc = 0x1294c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 15));
    // 0x1294cc: 0x32103  sra         $a0, $v1, 4
    ctx->pc = 0x1294ccu;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 3), 4));
label_1294d0:
    // 0x1294d0: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x1294d0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1294d4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1294d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1294d8: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x1294d8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x1294dc: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x1294dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x1294e0: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x1294e0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1294e4: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x1294e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1294e8: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x1294e8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x1294ec: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x1294ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1294f0: 0x90630002  lbu         $v1, 0x2($v1)
    ctx->pc = 0x1294f0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x1294f4: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x1294f4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1294f8: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x1294f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1294fc: 0x3086000f  andi        $a2, $a0, 0xF
    ctx->pc = 0x1294fcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)15);
    // 0x129500: 0x4810004  bgez        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x129500u;
    {
        const bool branch_taken_0x129500 = (GPR_S32(ctx, 4) >= 0);
        if (branch_taken_0x129500) {
            ctx->pc = 0x129514u;
            goto label_129514;
        }
    }
    ctx->pc = 0x129508u;
    // 0x129508: 0x10c00002  beqz        $a2, . + 4 + (0x2 << 2)
    ctx->pc = 0x129508u;
    {
        const bool branch_taken_0x129508 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x129508) {
            ctx->pc = 0x129514u;
            goto label_129514;
        }
    }
    ctx->pc = 0x129510u;
    // 0x129510: 0x24c6fff0  addiu       $a2, $a2, -0x10
    ctx->pc = 0x129510u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967280));
label_129514:
    // 0x129514: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x129514u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x129518: 0x90630002  lbu         $v1, 0x2($v1)
    ctx->pc = 0x129518u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x12951c: 0x306500ff  andi        $a1, $v1, 0xFF
    ctx->pc = 0x12951cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x129520: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x129520u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x129524: 0x52103  sra         $a0, $a1, 4
    ctx->pc = 0x129524u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 5), 4));
    // 0x129528: 0x4a10003  bgez        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x129528u;
    {
        const bool branch_taken_0x129528 = (GPR_S32(ctx, 5) >= 0);
        if (branch_taken_0x129528) {
            ctx->pc = 0x129538u;
            goto label_129538;
        }
    }
    ctx->pc = 0x129530u;
    // 0x129530: 0x24a3000f  addiu       $v1, $a1, 0xF
    ctx->pc = 0x129530u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 15));
    // 0x129534: 0x32103  sra         $a0, $v1, 4
    ctx->pc = 0x129534u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 3), 4));
label_129538:
    // 0x129538: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x129538u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x12953c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x12953cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x129540: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x129540u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x129544: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x129544u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x129548: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x129548u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x12954c: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x12954cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x129550: 0xa0640002  sb          $a0, 0x2($v1)
    ctx->pc = 0x129550u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 4));
    // 0x129554: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x129554u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x129558: 0x90630003  lbu         $v1, 0x3($v1)
    ctx->pc = 0x129558u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 3)));
    // 0x12955c: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x12955cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x129560: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x129560u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x129564: 0x3086000f  andi        $a2, $a0, 0xF
    ctx->pc = 0x129564u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)15);
    // 0x129568: 0x4810004  bgez        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x129568u;
    {
        const bool branch_taken_0x129568 = (GPR_S32(ctx, 4) >= 0);
        if (branch_taken_0x129568) {
            ctx->pc = 0x12957Cu;
            goto label_12957c;
        }
    }
    ctx->pc = 0x129570u;
    // 0x129570: 0x10c00002  beqz        $a2, . + 4 + (0x2 << 2)
    ctx->pc = 0x129570u;
    {
        const bool branch_taken_0x129570 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x129570) {
            ctx->pc = 0x12957Cu;
            goto label_12957c;
        }
    }
    ctx->pc = 0x129578u;
    // 0x129578: 0x24c6fff0  addiu       $a2, $a2, -0x10
    ctx->pc = 0x129578u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967280));
label_12957c:
    // 0x12957c: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x12957cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x129580: 0x90630003  lbu         $v1, 0x3($v1)
    ctx->pc = 0x129580u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 3)));
    // 0x129584: 0x306500ff  andi        $a1, $v1, 0xFF
    ctx->pc = 0x129584u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x129588: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x129588u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x12958c: 0x52103  sra         $a0, $a1, 4
    ctx->pc = 0x12958cu;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 5), 4));
    // 0x129590: 0x4a10003  bgez        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x129590u;
    {
        const bool branch_taken_0x129590 = (GPR_S32(ctx, 5) >= 0);
        if (branch_taken_0x129590) {
            ctx->pc = 0x1295A0u;
            goto label_1295a0;
        }
    }
    ctx->pc = 0x129598u;
    // 0x129598: 0x24a3000f  addiu       $v1, $a1, 0xF
    ctx->pc = 0x129598u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 15));
    // 0x12959c: 0x32103  sra         $a0, $v1, 4
    ctx->pc = 0x12959cu;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 3), 4));
label_1295a0:
    // 0x1295a0: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x1295a0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1295a4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1295a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1295a8: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x1295a8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x1295ac: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x1295acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x1295b0: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x1295b0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1295b4: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x1295b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1295b8: 0xa0640003  sb          $a0, 0x3($v1)
    ctx->pc = 0x1295b8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 4));
    // 0x1295bc: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x1295bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1295c0: 0x90630005  lbu         $v1, 0x5($v1)
    ctx->pc = 0x1295c0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 5)));
    // 0x1295c4: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x1295c4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1295c8: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x1295c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1295cc: 0x3086000f  andi        $a2, $a0, 0xF
    ctx->pc = 0x1295ccu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)15);
    // 0x1295d0: 0x4810004  bgez        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1295D0u;
    {
        const bool branch_taken_0x1295d0 = (GPR_S32(ctx, 4) >= 0);
        if (branch_taken_0x1295d0) {
            ctx->pc = 0x1295E4u;
            goto label_1295e4;
        }
    }
    ctx->pc = 0x1295D8u;
    // 0x1295d8: 0x10c00002  beqz        $a2, . + 4 + (0x2 << 2)
    ctx->pc = 0x1295D8u;
    {
        const bool branch_taken_0x1295d8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x1295d8) {
            ctx->pc = 0x1295E4u;
            goto label_1295e4;
        }
    }
    ctx->pc = 0x1295E0u;
    // 0x1295e0: 0x24c6fff0  addiu       $a2, $a2, -0x10
    ctx->pc = 0x1295e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967280));
label_1295e4:
    // 0x1295e4: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x1295e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1295e8: 0x90630005  lbu         $v1, 0x5($v1)
    ctx->pc = 0x1295e8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 5)));
    // 0x1295ec: 0x306500ff  andi        $a1, $v1, 0xFF
    ctx->pc = 0x1295ecu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1295f0: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x1295f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1295f4: 0x52103  sra         $a0, $a1, 4
    ctx->pc = 0x1295f4u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 5), 4));
    // 0x1295f8: 0x4a10003  bgez        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1295F8u;
    {
        const bool branch_taken_0x1295f8 = (GPR_S32(ctx, 5) >= 0);
        if (branch_taken_0x1295f8) {
            ctx->pc = 0x129608u;
            goto label_129608;
        }
    }
    ctx->pc = 0x129600u;
    // 0x129600: 0x24a3000f  addiu       $v1, $a1, 0xF
    ctx->pc = 0x129600u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 15));
    // 0x129604: 0x32103  sra         $a0, $v1, 4
    ctx->pc = 0x129604u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 3), 4));
label_129608:
    // 0x129608: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x129608u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x12960c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x12960cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x129610: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x129610u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x129614: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x129614u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x129618: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x129618u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x12961c: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x12961cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x129620: 0xa0640005  sb          $a0, 0x5($v1)
    ctx->pc = 0x129620u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 5), (uint8_t)GPR_U32(ctx, 4));
    // 0x129624: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x129624u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x129628: 0x90630006  lbu         $v1, 0x6($v1)
    ctx->pc = 0x129628u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 6)));
    // 0x12962c: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x12962cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x129630: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x129630u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x129634: 0x3086000f  andi        $a2, $a0, 0xF
    ctx->pc = 0x129634u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)15);
    // 0x129638: 0x4810004  bgez        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x129638u;
    {
        const bool branch_taken_0x129638 = (GPR_S32(ctx, 4) >= 0);
        if (branch_taken_0x129638) {
            ctx->pc = 0x12964Cu;
            goto label_12964c;
        }
    }
    ctx->pc = 0x129640u;
    // 0x129640: 0x10c00002  beqz        $a2, . + 4 + (0x2 << 2)
    ctx->pc = 0x129640u;
    {
        const bool branch_taken_0x129640 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x129640) {
            ctx->pc = 0x12964Cu;
            goto label_12964c;
        }
    }
    ctx->pc = 0x129648u;
    // 0x129648: 0x24c6fff0  addiu       $a2, $a2, -0x10
    ctx->pc = 0x129648u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967280));
label_12964c:
    // 0x12964c: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x12964cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x129650: 0x90630006  lbu         $v1, 0x6($v1)
    ctx->pc = 0x129650u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 6)));
    // 0x129654: 0x306500ff  andi        $a1, $v1, 0xFF
    ctx->pc = 0x129654u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x129658: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x129658u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x12965c: 0x52103  sra         $a0, $a1, 4
    ctx->pc = 0x12965cu;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 5), 4));
    // 0x129660: 0x4a10003  bgez        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x129660u;
    {
        const bool branch_taken_0x129660 = (GPR_S32(ctx, 5) >= 0);
        if (branch_taken_0x129660) {
            ctx->pc = 0x129670u;
            goto label_129670;
        }
    }
    ctx->pc = 0x129668u;
    // 0x129668: 0x24a3000f  addiu       $v1, $a1, 0xF
    ctx->pc = 0x129668u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 15));
    // 0x12966c: 0x32103  sra         $a0, $v1, 4
    ctx->pc = 0x12966cu;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 3), 4));
label_129670:
    // 0x129670: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x129670u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x129674: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x129674u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x129678: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x129678u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x12967c: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x12967cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x129680: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x129680u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x129684: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x129684u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x129688: 0xa0640006  sb          $a0, 0x6($v1)
    ctx->pc = 0x129688u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 6), (uint8_t)GPR_U32(ctx, 4));
    // 0x12968c: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x12968cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x129690: 0x90630007  lbu         $v1, 0x7($v1)
    ctx->pc = 0x129690u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 7)));
    // 0x129694: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x129694u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x129698: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x129698u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x12969c: 0x3086000f  andi        $a2, $a0, 0xF
    ctx->pc = 0x12969cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)15);
    // 0x1296a0: 0x4810004  bgez        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1296A0u;
    {
        const bool branch_taken_0x1296a0 = (GPR_S32(ctx, 4) >= 0);
        if (branch_taken_0x1296a0) {
            ctx->pc = 0x1296B4u;
            goto label_1296b4;
        }
    }
    ctx->pc = 0x1296A8u;
    // 0x1296a8: 0x10c00002  beqz        $a2, . + 4 + (0x2 << 2)
    ctx->pc = 0x1296A8u;
    {
        const bool branch_taken_0x1296a8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x1296a8) {
            ctx->pc = 0x1296B4u;
            goto label_1296b4;
        }
    }
    ctx->pc = 0x1296B0u;
    // 0x1296b0: 0x24c6fff0  addiu       $a2, $a2, -0x10
    ctx->pc = 0x1296b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967280));
label_1296b4:
    // 0x1296b4: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x1296b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1296b8: 0x90630007  lbu         $v1, 0x7($v1)
    ctx->pc = 0x1296b8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 7)));
    // 0x1296bc: 0x306500ff  andi        $a1, $v1, 0xFF
    ctx->pc = 0x1296bcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1296c0: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x1296c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1296c4: 0x52103  sra         $a0, $a1, 4
    ctx->pc = 0x1296c4u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 5), 4));
    // 0x1296c8: 0x4a10003  bgez        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1296C8u;
    {
        const bool branch_taken_0x1296c8 = (GPR_S32(ctx, 5) >= 0);
        if (branch_taken_0x1296c8) {
            ctx->pc = 0x1296D8u;
            goto label_1296d8;
        }
    }
    ctx->pc = 0x1296D0u;
    // 0x1296d0: 0x24a3000f  addiu       $v1, $a1, 0xF
    ctx->pc = 0x1296d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 15));
    // 0x1296d4: 0x32103  sra         $a0, $v1, 4
    ctx->pc = 0x1296d4u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 3), 4));
label_1296d8:
    // 0x1296d8: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x1296d8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1296dc: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1296dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1296e0: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x1296e0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x1296e4: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x1296e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x1296e8: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x1296e8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1296ec: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x1296ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1296f0: 0xa0640007  sb          $a0, 0x7($v1)
    ctx->pc = 0x1296f0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 7), (uint8_t)GPR_U32(ctx, 4));
label_1296f4:
    // 0x1296f4: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x1296f4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1296f8: 0x3e00008  jr          $ra
    ctx->pc = 0x1296F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1296F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x129700u;
}
