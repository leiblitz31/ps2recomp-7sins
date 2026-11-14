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

// Function: sub_003BF668
// Address: 0x3bf668 - 0x3bfe98
void sub_003BF668_0x3bf668(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003BF668_0x3bf668");
#endif

    ctx->pc = 0x3bf668u;

    // 0x3bf668: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x3bf668u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x3bf66c: 0x80502d  daddu       $t2, $a0, $zero
    ctx->pc = 0x3bf66cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3bf670: 0x94a80008  lhu         $t0, 0x8($a1)
    ctx->pc = 0x3bf670u;
    SET_GPR_ZE32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x3bf674: 0x31028000  andi        $v0, $t0, 0x8000
    ctx->pc = 0x3bf674u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)32768);
    // 0x3bf678: 0x31037fff  andi        $v1, $t0, 0x7FFF
    ctx->pc = 0x3bf678u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)32767);
    // 0x3bf67c: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x3BF67Cu;
    {
        const bool branch_taken_0x3bf67c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BF680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BF67Cu;
        // 0x3bf680: 0x24c00  sll         $t1, $v0, 16 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bf67c) {
            ctx->pc = 0x3BF6A8u;
            goto label_3bf6a8;
        }
    }
    ctx->pc = 0x3BF684u;
    // 0x3bf684: 0x31027800  andi        $v0, $t0, 0x7800
    ctx->pc = 0x3bf684u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)30720);
    // 0x3bf688: 0x3c043800  lui         $a0, 0x3800
    ctx->pc = 0x3bf688u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)14336 << 16));
    // 0x3bf68c: 0x21300  sll         $v0, $v0, 12
    ctx->pc = 0x3bf68cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 12));
    // 0x3bf690: 0x310307ff  andi        $v1, $t0, 0x7FF
    ctx->pc = 0x3bf690u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)2047);
    // 0x3bf694: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x3bf694u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x3bf698: 0x31b00  sll         $v1, $v1, 12
    ctx->pc = 0x3bf698u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 12));
    // 0x3bf69c: 0x1224825  or          $t1, $t1, $v0
    ctx->pc = 0x3bf69cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | GPR_U64(ctx, 2));
    // 0x3bf6a0: 0x1234825  or          $t1, $t1, $v1
    ctx->pc = 0x3bf6a0u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | GPR_U64(ctx, 3));
    // 0x3bf6a4: 0x0  nop
    ctx->pc = 0x3bf6a4u;
    // NOP
label_3bf6a8:
    // 0x3bf6a8: 0xafa90000  sw          $t1, 0x0($sp)
    ctx->pc = 0x3bf6a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 9));
    // 0x3bf6ac: 0x94a8000a  lhu         $t0, 0xA($a1)
    ctx->pc = 0x3bf6acu;
    SET_GPR_ZE32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 10)));
    // 0x3bf6b0: 0x31028000  andi        $v0, $t0, 0x8000
    ctx->pc = 0x3bf6b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)32768);
    // 0x3bf6b4: 0x31037fff  andi        $v1, $t0, 0x7FFF
    ctx->pc = 0x3bf6b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)32767);
    // 0x3bf6b8: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x3BF6B8u;
    {
        const bool branch_taken_0x3bf6b8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BF6BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BF6B8u;
        // 0x3bf6bc: 0x24c00  sll         $t1, $v0, 16 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bf6b8) {
            ctx->pc = 0x3BF6E0u;
            goto label_3bf6e0;
        }
    }
    ctx->pc = 0x3BF6C0u;
    // 0x3bf6c0: 0x31027800  andi        $v0, $t0, 0x7800
    ctx->pc = 0x3bf6c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)30720);
    // 0x3bf6c4: 0x3c043800  lui         $a0, 0x3800
    ctx->pc = 0x3bf6c4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)14336 << 16));
    // 0x3bf6c8: 0x21300  sll         $v0, $v0, 12
    ctx->pc = 0x3bf6c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 12));
    // 0x3bf6cc: 0x310307ff  andi        $v1, $t0, 0x7FF
    ctx->pc = 0x3bf6ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)2047);
    // 0x3bf6d0: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x3bf6d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x3bf6d4: 0x31b00  sll         $v1, $v1, 12
    ctx->pc = 0x3bf6d4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 12));
    // 0x3bf6d8: 0x1224825  or          $t1, $t1, $v0
    ctx->pc = 0x3bf6d8u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | GPR_U64(ctx, 2));
    // 0x3bf6dc: 0x1234825  or          $t1, $t1, $v1
    ctx->pc = 0x3bf6dcu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | GPR_U64(ctx, 3));
label_3bf6e0:
    // 0x3bf6e0: 0xafa90004  sw          $t1, 0x4($sp)
    ctx->pc = 0x3bf6e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 9));
    // 0x3bf6e4: 0x94a8000c  lhu         $t0, 0xC($a1)
    ctx->pc = 0x3bf6e4u;
    SET_GPR_ZE32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x3bf6e8: 0x31028000  andi        $v0, $t0, 0x8000
    ctx->pc = 0x3bf6e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)32768);
    // 0x3bf6ec: 0x31037fff  andi        $v1, $t0, 0x7FFF
    ctx->pc = 0x3bf6ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)32767);
    // 0x3bf6f0: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x3BF6F0u;
    {
        const bool branch_taken_0x3bf6f0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BF6F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BF6F0u;
        // 0x3bf6f4: 0x24c00  sll         $t1, $v0, 16 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bf6f0) {
            ctx->pc = 0x3BF718u;
            goto label_3bf718;
        }
    }
    ctx->pc = 0x3BF6F8u;
    // 0x3bf6f8: 0x31027800  andi        $v0, $t0, 0x7800
    ctx->pc = 0x3bf6f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)30720);
    // 0x3bf6fc: 0x3c043800  lui         $a0, 0x3800
    ctx->pc = 0x3bf6fcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)14336 << 16));
    // 0x3bf700: 0x21300  sll         $v0, $v0, 12
    ctx->pc = 0x3bf700u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 12));
    // 0x3bf704: 0x310307ff  andi        $v1, $t0, 0x7FF
    ctx->pc = 0x3bf704u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)2047);
    // 0x3bf708: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x3bf708u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x3bf70c: 0x31b00  sll         $v1, $v1, 12
    ctx->pc = 0x3bf70cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 12));
    // 0x3bf710: 0x1224825  or          $t1, $t1, $v0
    ctx->pc = 0x3bf710u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | GPR_U64(ctx, 2));
    // 0x3bf714: 0x1234825  or          $t1, $t1, $v1
    ctx->pc = 0x3bf714u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | GPR_U64(ctx, 3));
label_3bf718:
    // 0x3bf718: 0xafa90008  sw          $t1, 0x8($sp)
    ctx->pc = 0x3bf718u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 9));
    // 0x3bf71c: 0x94a8000e  lhu         $t0, 0xE($a1)
    ctx->pc = 0x3bf71cu;
    SET_GPR_ZE32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 14)));
    // 0x3bf720: 0x31028000  andi        $v0, $t0, 0x8000
    ctx->pc = 0x3bf720u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)32768);
    // 0x3bf724: 0x31037fff  andi        $v1, $t0, 0x7FFF
    ctx->pc = 0x3bf724u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)32767);
    // 0x3bf728: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x3BF728u;
    {
        const bool branch_taken_0x3bf728 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BF72Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BF728u;
        // 0x3bf72c: 0x24c00  sll         $t1, $v0, 16 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bf728) {
            ctx->pc = 0x3BF750u;
            goto label_3bf750;
        }
    }
    ctx->pc = 0x3BF730u;
    // 0x3bf730: 0x31027800  andi        $v0, $t0, 0x7800
    ctx->pc = 0x3bf730u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)30720);
    // 0x3bf734: 0x3c043800  lui         $a0, 0x3800
    ctx->pc = 0x3bf734u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)14336 << 16));
    // 0x3bf738: 0x21300  sll         $v0, $v0, 12
    ctx->pc = 0x3bf738u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 12));
    // 0x3bf73c: 0x310307ff  andi        $v1, $t0, 0x7FF
    ctx->pc = 0x3bf73cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)2047);
    // 0x3bf740: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x3bf740u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x3bf744: 0x31b00  sll         $v1, $v1, 12
    ctx->pc = 0x3bf744u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 12));
    // 0x3bf748: 0x1224825  or          $t1, $t1, $v0
    ctx->pc = 0x3bf748u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | GPR_U64(ctx, 2));
    // 0x3bf74c: 0x1234825  or          $t1, $t1, $v1
    ctx->pc = 0x3bf74cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | GPR_U64(ctx, 3));
label_3bf750:
    // 0x3bf750: 0xafa9000c  sw          $t1, 0xC($sp)
    ctx->pc = 0x3bf750u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 9));
    // 0x3bf754: 0x94a80010  lhu         $t0, 0x10($a1)
    ctx->pc = 0x3bf754u;
    SET_GPR_ZE32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x3bf758: 0x31028000  andi        $v0, $t0, 0x8000
    ctx->pc = 0x3bf758u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)32768);
    // 0x3bf75c: 0x31037fff  andi        $v1, $t0, 0x7FFF
    ctx->pc = 0x3bf75cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)32767);
    // 0x3bf760: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x3BF760u;
    {
        const bool branch_taken_0x3bf760 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BF764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BF760u;
        // 0x3bf764: 0x24c00  sll         $t1, $v0, 16 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bf760) {
            ctx->pc = 0x3BF788u;
            goto label_3bf788;
        }
    }
    ctx->pc = 0x3BF768u;
    // 0x3bf768: 0x31027800  andi        $v0, $t0, 0x7800
    ctx->pc = 0x3bf768u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)30720);
    // 0x3bf76c: 0x3c043800  lui         $a0, 0x3800
    ctx->pc = 0x3bf76cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)14336 << 16));
    // 0x3bf770: 0x21300  sll         $v0, $v0, 12
    ctx->pc = 0x3bf770u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 12));
    // 0x3bf774: 0x310307ff  andi        $v1, $t0, 0x7FF
    ctx->pc = 0x3bf774u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)2047);
    // 0x3bf778: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x3bf778u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x3bf77c: 0x31b00  sll         $v1, $v1, 12
    ctx->pc = 0x3bf77cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 12));
    // 0x3bf780: 0x1224825  or          $t1, $t1, $v0
    ctx->pc = 0x3bf780u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | GPR_U64(ctx, 2));
    // 0x3bf784: 0x1234825  or          $t1, $t1, $v1
    ctx->pc = 0x3bf784u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | GPR_U64(ctx, 3));
label_3bf788:
    // 0x3bf788: 0xafa90020  sw          $t1, 0x20($sp)
    ctx->pc = 0x3bf788u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 9));
    // 0x3bf78c: 0x94a80012  lhu         $t0, 0x12($a1)
    ctx->pc = 0x3bf78cu;
    SET_GPR_ZE32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 18)));
    // 0x3bf790: 0x31028000  andi        $v0, $t0, 0x8000
    ctx->pc = 0x3bf790u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)32768);
    // 0x3bf794: 0x31037fff  andi        $v1, $t0, 0x7FFF
    ctx->pc = 0x3bf794u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)32767);
    // 0x3bf798: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x3BF798u;
    {
        const bool branch_taken_0x3bf798 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BF79Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BF798u;
        // 0x3bf79c: 0x24c00  sll         $t1, $v0, 16 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bf798) {
            ctx->pc = 0x3BF7C0u;
            goto label_3bf7c0;
        }
    }
    ctx->pc = 0x3BF7A0u;
    // 0x3bf7a0: 0x31027800  andi        $v0, $t0, 0x7800
    ctx->pc = 0x3bf7a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)30720);
    // 0x3bf7a4: 0x3c043800  lui         $a0, 0x3800
    ctx->pc = 0x3bf7a4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)14336 << 16));
    // 0x3bf7a8: 0x21300  sll         $v0, $v0, 12
    ctx->pc = 0x3bf7a8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 12));
    // 0x3bf7ac: 0x310307ff  andi        $v1, $t0, 0x7FF
    ctx->pc = 0x3bf7acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)2047);
    // 0x3bf7b0: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x3bf7b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x3bf7b4: 0x31b00  sll         $v1, $v1, 12
    ctx->pc = 0x3bf7b4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 12));
    // 0x3bf7b8: 0x1224825  or          $t1, $t1, $v0
    ctx->pc = 0x3bf7b8u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | GPR_U64(ctx, 2));
    // 0x3bf7bc: 0x1234825  or          $t1, $t1, $v1
    ctx->pc = 0x3bf7bcu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | GPR_U64(ctx, 3));
label_3bf7c0:
    // 0x3bf7c0: 0xafa90024  sw          $t1, 0x24($sp)
    ctx->pc = 0x3bf7c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 9));
    // 0x3bf7c4: 0x94a80014  lhu         $t0, 0x14($a1)
    ctx->pc = 0x3bf7c4u;
    SET_GPR_ZE32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 20)));
    // 0x3bf7c8: 0x31028000  andi        $v0, $t0, 0x8000
    ctx->pc = 0x3bf7c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)32768);
    // 0x3bf7cc: 0x31037fff  andi        $v1, $t0, 0x7FFF
    ctx->pc = 0x3bf7ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)32767);
    // 0x3bf7d0: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x3BF7D0u;
    {
        const bool branch_taken_0x3bf7d0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BF7D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BF7D0u;
        // 0x3bf7d4: 0x24c00  sll         $t1, $v0, 16 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bf7d0) {
            ctx->pc = 0x3BF7F8u;
            goto label_3bf7f8;
        }
    }
    ctx->pc = 0x3BF7D8u;
    // 0x3bf7d8: 0x31027800  andi        $v0, $t0, 0x7800
    ctx->pc = 0x3bf7d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)30720);
    // 0x3bf7dc: 0x3c043800  lui         $a0, 0x3800
    ctx->pc = 0x3bf7dcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)14336 << 16));
    // 0x3bf7e0: 0x21300  sll         $v0, $v0, 12
    ctx->pc = 0x3bf7e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 12));
    // 0x3bf7e4: 0x310307ff  andi        $v1, $t0, 0x7FF
    ctx->pc = 0x3bf7e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)2047);
    // 0x3bf7e8: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x3bf7e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x3bf7ec: 0x31b00  sll         $v1, $v1, 12
    ctx->pc = 0x3bf7ecu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 12));
    // 0x3bf7f0: 0x1224825  or          $t1, $t1, $v0
    ctx->pc = 0x3bf7f0u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | GPR_U64(ctx, 2));
    // 0x3bf7f4: 0x1234825  or          $t1, $t1, $v1
    ctx->pc = 0x3bf7f4u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | GPR_U64(ctx, 3));
label_3bf7f8:
    // 0x3bf7f8: 0xafa90028  sw          $t1, 0x28($sp)
    ctx->pc = 0x3bf7f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 9));
    // 0x3bf7fc: 0x94c80008  lhu         $t0, 0x8($a2)
    ctx->pc = 0x3bf7fcu;
    SET_GPR_ZE32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x3bf800: 0x31028000  andi        $v0, $t0, 0x8000
    ctx->pc = 0x3bf800u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)32768);
    // 0x3bf804: 0x31037fff  andi        $v1, $t0, 0x7FFF
    ctx->pc = 0x3bf804u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)32767);
    // 0x3bf808: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x3BF808u;
    {
        const bool branch_taken_0x3bf808 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BF80Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BF808u;
        // 0x3bf80c: 0x24c00  sll         $t1, $v0, 16 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bf808) {
            ctx->pc = 0x3BF830u;
            goto label_3bf830;
        }
    }
    ctx->pc = 0x3BF810u;
    // 0x3bf810: 0x31027800  andi        $v0, $t0, 0x7800
    ctx->pc = 0x3bf810u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)30720);
    // 0x3bf814: 0x3c043800  lui         $a0, 0x3800
    ctx->pc = 0x3bf814u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)14336 << 16));
    // 0x3bf818: 0x21300  sll         $v0, $v0, 12
    ctx->pc = 0x3bf818u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 12));
    // 0x3bf81c: 0x310307ff  andi        $v1, $t0, 0x7FF
    ctx->pc = 0x3bf81cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)2047);
    // 0x3bf820: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x3bf820u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x3bf824: 0x31b00  sll         $v1, $v1, 12
    ctx->pc = 0x3bf824u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 12));
    // 0x3bf828: 0x1224825  or          $t1, $t1, $v0
    ctx->pc = 0x3bf828u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | GPR_U64(ctx, 2));
    // 0x3bf82c: 0x1234825  or          $t1, $t1, $v1
    ctx->pc = 0x3bf82cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | GPR_U64(ctx, 3));
label_3bf830:
    // 0x3bf830: 0xafa90010  sw          $t1, 0x10($sp)
    ctx->pc = 0x3bf830u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 9));
    // 0x3bf834: 0x94c8000a  lhu         $t0, 0xA($a2)
    ctx->pc = 0x3bf834u;
    SET_GPR_ZE32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 10)));
    // 0x3bf838: 0x31028000  andi        $v0, $t0, 0x8000
    ctx->pc = 0x3bf838u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)32768);
    // 0x3bf83c: 0x31037fff  andi        $v1, $t0, 0x7FFF
    ctx->pc = 0x3bf83cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)32767);
    // 0x3bf840: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x3BF840u;
    {
        const bool branch_taken_0x3bf840 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BF844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BF840u;
        // 0x3bf844: 0x24c00  sll         $t1, $v0, 16 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bf840) {
            ctx->pc = 0x3BF868u;
            goto label_3bf868;
        }
    }
    ctx->pc = 0x3BF848u;
    // 0x3bf848: 0x31027800  andi        $v0, $t0, 0x7800
    ctx->pc = 0x3bf848u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)30720);
    // 0x3bf84c: 0x3c043800  lui         $a0, 0x3800
    ctx->pc = 0x3bf84cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)14336 << 16));
    // 0x3bf850: 0x21300  sll         $v0, $v0, 12
    ctx->pc = 0x3bf850u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 12));
    // 0x3bf854: 0x310307ff  andi        $v1, $t0, 0x7FF
    ctx->pc = 0x3bf854u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)2047);
    // 0x3bf858: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x3bf858u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x3bf85c: 0x31b00  sll         $v1, $v1, 12
    ctx->pc = 0x3bf85cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 12));
    // 0x3bf860: 0x1224825  or          $t1, $t1, $v0
    ctx->pc = 0x3bf860u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | GPR_U64(ctx, 2));
    // 0x3bf864: 0x1234825  or          $t1, $t1, $v1
    ctx->pc = 0x3bf864u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | GPR_U64(ctx, 3));
label_3bf868:
    // 0x3bf868: 0xafa90014  sw          $t1, 0x14($sp)
    ctx->pc = 0x3bf868u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 9));
    // 0x3bf86c: 0x94c8000c  lhu         $t0, 0xC($a2)
    ctx->pc = 0x3bf86cu;
    SET_GPR_ZE32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 12)));
    // 0x3bf870: 0x31028000  andi        $v0, $t0, 0x8000
    ctx->pc = 0x3bf870u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)32768);
    // 0x3bf874: 0x31037fff  andi        $v1, $t0, 0x7FFF
    ctx->pc = 0x3bf874u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)32767);
    // 0x3bf878: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x3BF878u;
    {
        const bool branch_taken_0x3bf878 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BF87Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BF878u;
        // 0x3bf87c: 0x24c00  sll         $t1, $v0, 16 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bf878) {
            ctx->pc = 0x3BF8A0u;
            goto label_3bf8a0;
        }
    }
    ctx->pc = 0x3BF880u;
    // 0x3bf880: 0x31027800  andi        $v0, $t0, 0x7800
    ctx->pc = 0x3bf880u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)30720);
    // 0x3bf884: 0x3c043800  lui         $a0, 0x3800
    ctx->pc = 0x3bf884u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)14336 << 16));
    // 0x3bf888: 0x21300  sll         $v0, $v0, 12
    ctx->pc = 0x3bf888u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 12));
    // 0x3bf88c: 0x310307ff  andi        $v1, $t0, 0x7FF
    ctx->pc = 0x3bf88cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)2047);
    // 0x3bf890: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x3bf890u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x3bf894: 0x31b00  sll         $v1, $v1, 12
    ctx->pc = 0x3bf894u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 12));
    // 0x3bf898: 0x1224825  or          $t1, $t1, $v0
    ctx->pc = 0x3bf898u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | GPR_U64(ctx, 2));
    // 0x3bf89c: 0x1234825  or          $t1, $t1, $v1
    ctx->pc = 0x3bf89cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | GPR_U64(ctx, 3));
label_3bf8a0:
    // 0x3bf8a0: 0xafa90018  sw          $t1, 0x18($sp)
    ctx->pc = 0x3bf8a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 9));
    // 0x3bf8a4: 0x94c8000e  lhu         $t0, 0xE($a2)
    ctx->pc = 0x3bf8a4u;
    SET_GPR_ZE32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 14)));
    // 0x3bf8a8: 0x31028000  andi        $v0, $t0, 0x8000
    ctx->pc = 0x3bf8a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)32768);
    // 0x3bf8ac: 0x31037fff  andi        $v1, $t0, 0x7FFF
    ctx->pc = 0x3bf8acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)32767);
    // 0x3bf8b0: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x3BF8B0u;
    {
        const bool branch_taken_0x3bf8b0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BF8B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BF8B0u;
        // 0x3bf8b4: 0x24c00  sll         $t1, $v0, 16 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bf8b0) {
            ctx->pc = 0x3BF8D8u;
            goto label_3bf8d8;
        }
    }
    ctx->pc = 0x3BF8B8u;
    // 0x3bf8b8: 0x31027800  andi        $v0, $t0, 0x7800
    ctx->pc = 0x3bf8b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)30720);
    // 0x3bf8bc: 0x3c043800  lui         $a0, 0x3800
    ctx->pc = 0x3bf8bcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)14336 << 16));
    // 0x3bf8c0: 0x21300  sll         $v0, $v0, 12
    ctx->pc = 0x3bf8c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 12));
    // 0x3bf8c4: 0x310307ff  andi        $v1, $t0, 0x7FF
    ctx->pc = 0x3bf8c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)2047);
    // 0x3bf8c8: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x3bf8c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x3bf8cc: 0x31b00  sll         $v1, $v1, 12
    ctx->pc = 0x3bf8ccu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 12));
    // 0x3bf8d0: 0x1224825  or          $t1, $t1, $v0
    ctx->pc = 0x3bf8d0u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | GPR_U64(ctx, 2));
    // 0x3bf8d4: 0x1234825  or          $t1, $t1, $v1
    ctx->pc = 0x3bf8d4u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | GPR_U64(ctx, 3));
label_3bf8d8:
    // 0x3bf8d8: 0xafa9001c  sw          $t1, 0x1C($sp)
    ctx->pc = 0x3bf8d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 9));
    // 0x3bf8dc: 0x94c80010  lhu         $t0, 0x10($a2)
    ctx->pc = 0x3bf8dcu;
    SET_GPR_ZE32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x3bf8e0: 0x31028000  andi        $v0, $t0, 0x8000
    ctx->pc = 0x3bf8e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)32768);
    // 0x3bf8e4: 0x31037fff  andi        $v1, $t0, 0x7FFF
    ctx->pc = 0x3bf8e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)32767);
    // 0x3bf8e8: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x3BF8E8u;
    {
        const bool branch_taken_0x3bf8e8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BF8ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BF8E8u;
        // 0x3bf8ec: 0x24c00  sll         $t1, $v0, 16 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bf8e8) {
            ctx->pc = 0x3BF910u;
            goto label_3bf910;
        }
    }
    ctx->pc = 0x3BF8F0u;
    // 0x3bf8f0: 0x31027800  andi        $v0, $t0, 0x7800
    ctx->pc = 0x3bf8f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)30720);
    // 0x3bf8f4: 0x3c043800  lui         $a0, 0x3800
    ctx->pc = 0x3bf8f4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)14336 << 16));
    // 0x3bf8f8: 0x21300  sll         $v0, $v0, 12
    ctx->pc = 0x3bf8f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 12));
    // 0x3bf8fc: 0x310307ff  andi        $v1, $t0, 0x7FF
    ctx->pc = 0x3bf8fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)2047);
    // 0x3bf900: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x3bf900u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x3bf904: 0x31b00  sll         $v1, $v1, 12
    ctx->pc = 0x3bf904u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 12));
    // 0x3bf908: 0x1224825  or          $t1, $t1, $v0
    ctx->pc = 0x3bf908u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | GPR_U64(ctx, 2));
    // 0x3bf90c: 0x1234825  or          $t1, $t1, $v1
    ctx->pc = 0x3bf90cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | GPR_U64(ctx, 3));
label_3bf910:
    // 0x3bf910: 0xafa90030  sw          $t1, 0x30($sp)
    ctx->pc = 0x3bf910u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 9));
    // 0x3bf914: 0x94c80012  lhu         $t0, 0x12($a2)
    ctx->pc = 0x3bf914u;
    SET_GPR_ZE32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 18)));
    // 0x3bf918: 0x31028000  andi        $v0, $t0, 0x8000
    ctx->pc = 0x3bf918u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)32768);
    // 0x3bf91c: 0x31037fff  andi        $v1, $t0, 0x7FFF
    ctx->pc = 0x3bf91cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)32767);
    // 0x3bf920: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x3BF920u;
    {
        const bool branch_taken_0x3bf920 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BF924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BF920u;
        // 0x3bf924: 0x24c00  sll         $t1, $v0, 16 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bf920) {
            ctx->pc = 0x3BF948u;
            goto label_3bf948;
        }
    }
    ctx->pc = 0x3BF928u;
    // 0x3bf928: 0x31027800  andi        $v0, $t0, 0x7800
    ctx->pc = 0x3bf928u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)30720);
    // 0x3bf92c: 0x3c043800  lui         $a0, 0x3800
    ctx->pc = 0x3bf92cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)14336 << 16));
    // 0x3bf930: 0x21300  sll         $v0, $v0, 12
    ctx->pc = 0x3bf930u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 12));
    // 0x3bf934: 0x310307ff  andi        $v1, $t0, 0x7FF
    ctx->pc = 0x3bf934u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)2047);
    // 0x3bf938: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x3bf938u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x3bf93c: 0x31b00  sll         $v1, $v1, 12
    ctx->pc = 0x3bf93cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 12));
    // 0x3bf940: 0x1224825  or          $t1, $t1, $v0
    ctx->pc = 0x3bf940u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | GPR_U64(ctx, 2));
    // 0x3bf944: 0x1234825  or          $t1, $t1, $v1
    ctx->pc = 0x3bf944u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | GPR_U64(ctx, 3));
label_3bf948:
    // 0x3bf948: 0xafa90034  sw          $t1, 0x34($sp)
    ctx->pc = 0x3bf948u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 9));
    // 0x3bf94c: 0x94c80014  lhu         $t0, 0x14($a2)
    ctx->pc = 0x3bf94cu;
    SET_GPR_ZE32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 20)));
    // 0x3bf950: 0x31028000  andi        $v0, $t0, 0x8000
    ctx->pc = 0x3bf950u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)32768);
    // 0x3bf954: 0x31037fff  andi        $v1, $t0, 0x7FFF
    ctx->pc = 0x3bf954u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)32767);
    // 0x3bf958: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x3BF958u;
    {
        const bool branch_taken_0x3bf958 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BF95Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BF958u;
        // 0x3bf95c: 0x24c00  sll         $t1, $v0, 16 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bf958) {
            ctx->pc = 0x3BF980u;
            goto label_3bf980;
        }
    }
    ctx->pc = 0x3BF960u;
    // 0x3bf960: 0x31027800  andi        $v0, $t0, 0x7800
    ctx->pc = 0x3bf960u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)30720);
    // 0x3bf964: 0x3c043800  lui         $a0, 0x3800
    ctx->pc = 0x3bf964u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)14336 << 16));
    // 0x3bf968: 0x21300  sll         $v0, $v0, 12
    ctx->pc = 0x3bf968u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 12));
    // 0x3bf96c: 0x310307ff  andi        $v1, $t0, 0x7FF
    ctx->pc = 0x3bf96cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)2047);
    // 0x3bf970: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x3bf970u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x3bf974: 0x31b00  sll         $v1, $v1, 12
    ctx->pc = 0x3bf974u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 12));
    // 0x3bf978: 0x1224825  or          $t1, $t1, $v0
    ctx->pc = 0x3bf978u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | GPR_U64(ctx, 2));
    // 0x3bf97c: 0x1234825  or          $t1, $t1, $v1
    ctx->pc = 0x3bf97cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | GPR_U64(ctx, 3));
label_3bf980:
    // 0x3bf980: 0xafa90038  sw          $t1, 0x38($sp)
    ctx->pc = 0x3bf980u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 9));
    // 0x3bf984: 0xc7a10000  lwc1        $f1, 0x0($sp)
    ctx->pc = 0x3bf984u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3bf988: 0xc7a80010  lwc1        $f8, 0x10($sp)
    ctx->pc = 0x3bf988u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x3bf98c: 0xc7a30004  lwc1        $f3, 0x4($sp)
    ctx->pc = 0x3bf98cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x3bf990: 0xc7a70014  lwc1        $f7, 0x14($sp)
    ctx->pc = 0x3bf990u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x3bf994: 0x46080842  mul.s       $f1, $f1, $f8
    ctx->pc = 0x3bf994u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[8]);
    // 0x3bf998: 0xc4a00004  lwc1        $f0, 0x4($a1)
    ctx->pc = 0x3bf998u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3bf99c: 0x460718c2  mul.s       $f3, $f3, $f7
    ctx->pc = 0x3bf99cu;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[7]);
    // 0x3bf9a0: 0xc4c20004  lwc1        $f2, 0x4($a2)
    ctx->pc = 0x3bf9a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3bf9a4: 0xc7a40008  lwc1        $f4, 0x8($sp)
    ctx->pc = 0x3bf9a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x3bf9a8: 0x46006141  sub.s       $f5, $f12, $f0
    ctx->pc = 0x3bf9a8u;
    ctx->f[5] = FPU_SUB_S(ctx->f[12], ctx->f[0]);
    // 0x3bf9ac: 0xc7a60018  lwc1        $f6, 0x18($sp)
    ctx->pc = 0x3bf9acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x3bf9b0: 0x46001081  sub.s       $f2, $f2, $f0
    ctx->pc = 0x3bf9b0u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x3bf9b4: 0x46030840  add.s       $f1, $f1, $f3
    ctx->pc = 0x3bf9b4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
    // 0x3bf9b8: 0xc7a0000c  lwc1        $f0, 0xC($sp)
    ctx->pc = 0x3bf9b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3bf9bc: 0x46062102  mul.s       $f4, $f4, $f6
    ctx->pc = 0x3bf9bcu;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[6]);
    // 0x3bf9c0: 0xc7a9001c  lwc1        $f9, 0x1C($sp)
    ctx->pc = 0x3bf9c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
    // 0x3bf9c4: 0x46022b03  div.s       $f12, $f5, $f2
    ctx->pc = 0x3bf9c4u;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[5], ctx->f[2]); }
    // 0x3bf9c8: 0x46090002  mul.s       $f0, $f0, $f9
    ctx->pc = 0x3bf9c8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[9]);
    // 0x3bf9cc: 0x46040840  add.s       $f1, $f1, $f4
    ctx->pc = 0x3bf9ccu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[4]);
    // 0x3bf9d0: 0x46000a80  add.s       $f10, $f1, $f0
    ctx->pc = 0x3bf9d0u;
    ctx->f[10] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x3bf9d4: 0xc7a20030  lwc1        $f2, 0x30($sp)
    ctx->pc = 0x3bf9d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3bf9d8: 0xc7a30020  lwc1        $f3, 0x20($sp)
    ctx->pc = 0x3bf9d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x3bf9dc: 0xc7a40024  lwc1        $f4, 0x24($sp)
    ctx->pc = 0x3bf9dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x3bf9e0: 0xc7a50028  lwc1        $f5, 0x28($sp)
    ctx->pc = 0x3bf9e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x3bf9e4: 0x46031081  sub.s       $f2, $f2, $f3
    ctx->pc = 0x3bf9e4u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[3]);
    // 0x3bf9e8: 0xc7a00034  lwc1        $f0, 0x34($sp)
    ctx->pc = 0x3bf9e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3bf9ec: 0xc7a10038  lwc1        $f1, 0x38($sp)
    ctx->pc = 0x3bf9ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3bf9f0: 0x46040001  sub.s       $f0, $f0, $f4
    ctx->pc = 0x3bf9f0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[4]);
    // 0x3bf9f4: 0x46050841  sub.s       $f1, $f1, $f5
    ctx->pc = 0x3bf9f4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[5]);
    // 0x3bf9f8: 0x46026082  mul.s       $f2, $f12, $f2
    ctx->pc = 0x3bf9f8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[12], ctx->f[2]);
    // 0x3bf9fc: 0x46006002  mul.s       $f0, $f12, $f0
    ctx->pc = 0x3bf9fcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    // 0x3bfa00: 0x46016042  mul.s       $f1, $f12, $f1
    ctx->pc = 0x3bfa00u;
    ctx->f[1] = FPU_MUL_S(ctx->f[12], ctx->f[1]);
    // 0x3bfa04: 0x460218c0  add.s       $f3, $f3, $f2
    ctx->pc = 0x3bfa04u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[2]);
    // 0x3bfa08: 0x46002100  add.s       $f4, $f4, $f0
    ctx->pc = 0x3bfa08u;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[0]);
    // 0x3bfa0c: 0x46012940  add.s       $f5, $f5, $f1
    ctx->pc = 0x3bfa0cu;
    ctx->f[5] = FPU_ADD_S(ctx->f[5], ctx->f[1]);
    // 0x3bfa10: 0xe5430018  swc1        $f3, 0x18($t2)
    ctx->pc = 0x3bfa10u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 10), 24), bits); }
    // 0x3bfa14: 0xe544001c  swc1        $f4, 0x1C($t2)
    ctx->pc = 0x3bfa14u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 10), 28), bits); }
    // 0x3bfa18: 0xe5450020  swc1        $f5, 0x20($t2)
    ctx->pc = 0x3bfa18u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 10), 32), bits); }
    // 0x3bfa1c: 0xc4e0000c  lwc1        $f0, 0xC($a3)
    ctx->pc = 0x3bfa1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3bfa20: 0x460018c2  mul.s       $f3, $f3, $f0
    ctx->pc = 0x3bfa20u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x3bfa24: 0xe5430018  swc1        $f3, 0x18($t2)
    ctx->pc = 0x3bfa24u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 10), 24), bits); }
    // 0x3bfa28: 0xc4e00010  lwc1        $f0, 0x10($a3)
    ctx->pc = 0x3bfa28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3bfa2c: 0x46002102  mul.s       $f4, $f4, $f0
    ctx->pc = 0x3bfa2cu;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
    // 0x3bfa30: 0xe544001c  swc1        $f4, 0x1C($t2)
    ctx->pc = 0x3bfa30u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 10), 28), bits); }
    // 0x3bfa34: 0xc4e00014  lwc1        $f0, 0x14($a3)
    ctx->pc = 0x3bfa34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3bfa38: 0x46002942  mul.s       $f5, $f5, $f0
    ctx->pc = 0x3bfa38u;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[0]);
    // 0x3bfa3c: 0xe5450020  swc1        $f5, 0x20($t2)
    ctx->pc = 0x3bfa3cu;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 10), 32), bits); }
    // 0x3bfa40: 0xc4e00000  lwc1        $f0, 0x0($a3)
    ctx->pc = 0x3bfa40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3bfa44: 0x460018c0  add.s       $f3, $f3, $f0
    ctx->pc = 0x3bfa44u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
    // 0x3bfa48: 0xe5430018  swc1        $f3, 0x18($t2)
    ctx->pc = 0x3bfa48u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 10), 24), bits); }
    // 0x3bfa4c: 0xc4e00004  lwc1        $f0, 0x4($a3)
    ctx->pc = 0x3bfa4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3bfa50: 0x46002100  add.s       $f4, $f4, $f0
    ctx->pc = 0x3bfa50u;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[0]);
    // 0x3bfa54: 0xe544001c  swc1        $f4, 0x1C($t2)
    ctx->pc = 0x3bfa54u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 10), 28), bits); }
    // 0x3bfa58: 0xc4e00008  lwc1        $f0, 0x8($a3)
    ctx->pc = 0x3bfa58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3bfa5c: 0x46002940  add.s       $f5, $f5, $f0
    ctx->pc = 0x3bfa5cu;
    ctx->f[5] = FPU_ADD_S(ctx->f[5], ctx->f[0]);
    // 0x3bfa60: 0xe5450020  swc1        $f5, 0x20($t2)
    ctx->pc = 0x3bfa60u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 10), 32), bits); }
    // 0x3bfa64: 0x44801800  mtc1        $zero, $f3
    ctx->pc = 0x3bfa64u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x3bfa68: 0x46035034  c.lt.s      $f10, $f3
    ctx->pc = 0x3bfa68u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[10], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3bfa6c: 0x0  nop
    ctx->pc = 0x3bfa6cu;
    // NOP
    // 0x3bfa70: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x3BFA70u;
    {
        const bool branch_taken_0x3bfa70 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x3BFA74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BFA70u;
        // 0x3bfa74: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bfa70) {
            ctx->pc = 0x3BFA80u;
            goto label_3bfa80;
        }
    }
    ctx->pc = 0x3BFA78u;
    // 0x3bfa78: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3bfa78u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3bfa7c: 0x0  nop
    ctx->pc = 0x3bfa7cu;
    // NOP
label_3bfa80:
    // 0x3bfa80: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x3BFA80u;
    {
        const bool branch_taken_0x3bfa80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3bfa80) {
            ctx->pc = 0x3BFAB0u;
            goto label_3bfab0;
        }
    }
    ctx->pc = 0x3BFA88u;
    // 0x3bfa88: 0x46005287  neg.s       $f10, $f10
    ctx->pc = 0x3bfa88u;
    ctx->f[10] = FPU_NEG_S(ctx->f[10]);
    // 0x3bfa8c: 0x46004007  neg.s       $f0, $f8
    ctx->pc = 0x3bfa8cu;
    ctx->f[0] = FPU_NEG_S(ctx->f[8]);
    // 0x3bfa90: 0x46003887  neg.s       $f2, $f7
    ctx->pc = 0x3bfa90u;
    ctx->f[2] = FPU_NEG_S(ctx->f[7]);
    // 0x3bfa94: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x3bfa94u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x3bfa98: 0x46003047  neg.s       $f1, $f6
    ctx->pc = 0x3bfa98u;
    ctx->f[1] = FPU_NEG_S(ctx->f[6]);
    // 0x3bfa9c: 0xe7a20014  swc1        $f2, 0x14($sp)
    ctx->pc = 0x3bfa9cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x3bfaa0: 0xe7a10018  swc1        $f1, 0x18($sp)
    ctx->pc = 0x3bfaa0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x3bfaa4: 0x46004807  neg.s       $f0, $f9
    ctx->pc = 0x3bfaa4u;
    ctx->f[0] = FPU_NEG_S(ctx->f[9]);
    // 0x3bfaa8: 0xe7a0001c  swc1        $f0, 0x1C($sp)
    ctx->pc = 0x3bfaa8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    // 0x3bfaac: 0x0  nop
    ctx->pc = 0x3bfaacu;
    // NOP
label_3bfab0:
    // 0x3bfab0: 0xc7808220  lwc1        $f0, -0x7DE0($gp)
    ctx->pc = 0x3bfab0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935072)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3bfab4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3bfab4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3bfab8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x3bfab8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x3bfabc: 0x44817800  mtc1        $at, $f15
    ctx->pc = 0x3bfabcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
    // 0x3bfac0: 0x460a0036  c.le.s      $f0, $f10
    ctx->pc = 0x3bfac0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[10])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3bfac4: 0x0  nop
    ctx->pc = 0x3bfac4u;
    // NOP
    // 0x3bfac8: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x3BFAC8u;
    {
        const bool branch_taken_0x3bfac8 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x3BFACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BFAC8u;
        // 0x3bfacc: 0x460c7b81  sub.s       $f14, $f15, $f12 (Delay Slot)
        ctx->f[14] = FPU_SUB_S(ctx->f[15], ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bfac8) {
            ctx->pc = 0x3BFAD4u;
            goto label_3bfad4;
        }
    }
    ctx->pc = 0x3BFAD0u;
    // 0x3bfad0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3bfad0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3bfad4:
    // 0x3bfad4: 0x144000d6  bnez        $v0, . + 4 + (0xD6 << 2)
    ctx->pc = 0x3BFAD4u;
    {
        const bool branch_taken_0x3bfad4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3BFAD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BFAD4u;
        // 0x3bfad8: 0xc7a60000  lwc1        $f6, 0x0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bfad4) {
            ctx->pc = 0x3BFE30u;
            goto label_3bfe30;
        }
    }
    ctx->pc = 0x3BFADCu;
    // 0x3bfadc: 0x44025000  mfc1        $v0, $f10
    ctx->pc = 0x3bfadcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[10], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x3bfae0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3bfae0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3bfae4: 0x3c037fff  lui         $v1, 0x7FFF
    ctx->pc = 0x3bfae4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32767 << 16));
    // 0x3bfae8: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x3bfae8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x3bfaec: 0x3c023f7f  lui         $v0, 0x3F7F
    ctx->pc = 0x3bfaecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16255 << 16));
    // 0x3bfaf0: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x3bfaf0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x3bfaf4: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x3bfaf4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x3bfaf8: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x3bfaf8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x3bfafc: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x3BFAFCu;
    {
        const bool branch_taken_0x3bfafc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3bfafc) {
            ctx->pc = 0x3BFB00u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3BFAFCu;
            // 0x3bfb00: 0x3c023eff  lui         $v0, 0x3EFF (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16127 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3BFB18u;
            goto label_3bfb18;
        }
    }
    ctx->pc = 0x3BFB04u;
    // 0x3bfb04: 0xc78a80b0  lwc1        $f10, -0x7F50($gp)
    ctx->pc = 0x3bfb04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934704)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[10] = f; }
    // 0x3bfb08: 0x5c80008f  bgtzl       $a0, . + 4 + (0x8F << 2)
    ctx->pc = 0x3BFB08u;
    {
        const bool branch_taken_0x3bfb08 = (GPR_S32(ctx, 4) > 0);
        if (branch_taken_0x3bfb08) {
            ctx->pc = 0x3BFB0Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3BFB08u;
            // 0x3bfb0c: 0x46001a86  mov.s       $f10, $f3 (Delay Slot)
            ctx->f[10] = FPU_MOV_S(ctx->f[3]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x3BFD48u;
            goto label_3bfd48;
        }
    }
    ctx->pc = 0x3BFB10u;
    // 0x3bfb10: 0x1000008f  b           . + 4 + (0x8F << 2)
    ctx->pc = 0x3BFB10u;
    {
        const bool branch_taken_0x3bfb10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BFB14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BFB10u;
        // 0x3bfb14: 0x460a5042  mul.s       $f1, $f10, $f10 (Delay Slot)
        ctx->f[1] = FPU_MUL_S(ctx->f[10], ctx->f[10]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bfb10) {
            ctx->pc = 0x3BFD50u;
            goto label_3bfd50;
        }
    }
    ctx->pc = 0x3BFB18u;
label_3bfb18:
    // 0x3bfb18: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x3bfb18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x3bfb1c: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x3bfb1cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x3bfb20: 0x1440002c  bnez        $v0, . + 4 + (0x2C << 2)
    ctx->pc = 0x3BFB20u;
    {
        const bool branch_taken_0x3bfb20 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3BFB24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BFB20u;
        // 0x3bfb24: 0x3c022300  lui         $v0, 0x2300 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8960 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bfb20) {
            ctx->pc = 0x3BFBD4u;
            goto label_3bfbd4;
        }
    }
    ctx->pc = 0x3BFB28u;
    // 0x3bfb28: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x3bfb28u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x3bfb2c: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x3BFB2Cu;
    {
        const bool branch_taken_0x3bfb2c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3bfb2c) {
            ctx->pc = 0x3BFB30u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3BFB2Cu;
            // 0x3bfb30: 0x460a52c2  mul.s       $f11, $f10, $f10 (Delay Slot)
            ctx->f[11] = FPU_MUL_S(ctx->f[10], ctx->f[10]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x3BFB40u;
            goto label_3bfb40;
        }
    }
    ctx->pc = 0x3BFB34u;
    // 0x3bfb34: 0xc78a80b4  lwc1        $f10, -0x7F4C($gp)
    ctx->pc = 0x3bfb34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934708)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[10] = f; }
    // 0x3bfb38: 0x10000085  b           . + 4 + (0x85 << 2)
    ctx->pc = 0x3BFB38u;
    {
        const bool branch_taken_0x3bfb38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BFB3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BFB38u;
        // 0x3bfb3c: 0x460a5042  mul.s       $f1, $f10, $f10 (Delay Slot)
        ctx->f[1] = FPU_MUL_S(ctx->f[10], ctx->f[10]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bfb38) {
            ctx->pc = 0x3BFD50u;
            goto label_3bfd50;
        }
    }
    ctx->pc = 0x3BFB40u;
label_3bfb40:
    // 0x3bfb40: 0xc7808224  lwc1        $f0, -0x7DDC($gp)
    ctx->pc = 0x3bfb40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935076)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3bfb44: 0xc78380bc  lwc1        $f3, -0x7F44($gp)
    ctx->pc = 0x3bfb44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934716)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x3bfb48: 0xc78780c0  lwc1        $f7, -0x7F40($gp)
    ctx->pc = 0x3bfb48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934720)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x3bfb4c: 0x46005802  mul.s       $f0, $f11, $f0
    ctx->pc = 0x3bfb4cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[11], ctx->f[0]);
    // 0x3bfb50: 0xc78180c4  lwc1        $f1, -0x7F3C($gp)
    ctx->pc = 0x3bfb50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934724)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3bfb54: 0xc78281d0  lwc1        $f2, -0x7E30($gp)
    ctx->pc = 0x3bfb54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934992)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3bfb58: 0x46015842  mul.s       $f1, $f11, $f1
    ctx->pc = 0x3bfb58u;
    ctx->f[1] = FPU_MUL_S(ctx->f[11], ctx->f[1]);
    // 0x3bfb5c: 0xc7858228  lwc1        $f5, -0x7DD8($gp)
    ctx->pc = 0x3bfb5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935080)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x3bfb60: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x3bfb60u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x3bfb64: 0xc78481d8  lwc1        $f4, -0x7E28($gp)
    ctx->pc = 0x3bfb64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935000)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x3bfb68: 0xc78880d4  lwc1        $f8, -0x7F2C($gp)
    ctx->pc = 0x3bfb68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934740)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x3bfb6c: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x3bfb6cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x3bfb70: 0xc78380d8  lwc1        $f3, -0x7F28($gp)
    ctx->pc = 0x3bfb70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x3bfb74: 0x46005802  mul.s       $f0, $f11, $f0
    ctx->pc = 0x3bfb74u;
    ctx->f[0] = FPU_MUL_S(ctx->f[11], ctx->f[0]);
    // 0x3bfb78: 0xc78680dc  lwc1        $f6, -0x7F24($gp)
    ctx->pc = 0x3bfb78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934748)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x3bfb7c: 0xc78280e0  lwc1        $f2, -0x7F20($gp)
    ctx->pc = 0x3bfb7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3bfb80: 0x46015842  mul.s       $f1, $f11, $f1
    ctx->pc = 0x3bfb80u;
    ctx->f[1] = FPU_MUL_S(ctx->f[11], ctx->f[1]);
    // 0x3bfb84: 0xc78980e4  lwc1        $f9, -0x7F1C($gp)
    ctx->pc = 0x3bfb84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934756)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
    // 0x3bfb88: 0x46070000  add.s       $f0, $f0, $f7
    ctx->pc = 0x3bfb88u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[7]);
    // 0x3bfb8c: 0x46040840  add.s       $f1, $f1, $f4
    ctx->pc = 0x3bfb8cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[4]);
    // 0x3bfb90: 0x46005802  mul.s       $f0, $f11, $f0
    ctx->pc = 0x3bfb90u;
    ctx->f[0] = FPU_MUL_S(ctx->f[11], ctx->f[0]);
    // 0x3bfb94: 0x46015842  mul.s       $f1, $f11, $f1
    ctx->pc = 0x3bfb94u;
    ctx->f[1] = FPU_MUL_S(ctx->f[11], ctx->f[1]);
    // 0x3bfb98: 0x46050000  add.s       $f0, $f0, $f5
    ctx->pc = 0x3bfb98u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[5]);
    // 0x3bfb9c: 0x46030840  add.s       $f1, $f1, $f3
    ctx->pc = 0x3bfb9cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
    // 0x3bfba0: 0x46005802  mul.s       $f0, $f11, $f0
    ctx->pc = 0x3bfba0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[11], ctx->f[0]);
    // 0x3bfba4: 0x46015842  mul.s       $f1, $f11, $f1
    ctx->pc = 0x3bfba4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[11], ctx->f[1]);
    // 0x3bfba8: 0x46080000  add.s       $f0, $f0, $f8
    ctx->pc = 0x3bfba8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[8]);
    // 0x3bfbac: 0x460f0840  add.s       $f1, $f1, $f15
    ctx->pc = 0x3bfbacu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[15]);
    // 0x3bfbb0: 0x46005802  mul.s       $f0, $f11, $f0
    ctx->pc = 0x3bfbb0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[11], ctx->f[0]);
    // 0x3bfbb4: 0x46060000  add.s       $f0, $f0, $f6
    ctx->pc = 0x3bfbb4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[6]);
    // 0x3bfbb8: 0x46005802  mul.s       $f0, $f11, $f0
    ctx->pc = 0x3bfbb8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[11], ctx->f[0]);
    // 0x3bfbbc: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x3bfbbcu;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x3bfbc0: 0x46005002  mul.s       $f0, $f10, $f0
    ctx->pc = 0x3bfbc0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[10], ctx->f[0]);
    // 0x3bfbc4: 0x46001081  sub.s       $f2, $f2, $f0
    ctx->pc = 0x3bfbc4u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x3bfbc8: 0x46025081  sub.s       $f2, $f10, $f2
    ctx->pc = 0x3bfbc8u;
    ctx->f[2] = FPU_SUB_S(ctx->f[10], ctx->f[2]);
    // 0x3bfbcc: 0x1000005e  b           . + 4 + (0x5E << 2)
    ctx->pc = 0x3BFBCCu;
    {
        const bool branch_taken_0x3bfbcc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BFBD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BFBCCu;
        // 0x3bfbd0: 0x46024a81  sub.s       $f10, $f9, $f2 (Delay Slot)
        ctx->f[10] = FPU_SUB_S(ctx->f[9], ctx->f[2]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bfbcc) {
            ctx->pc = 0x3BFD48u;
            goto label_3bfd48;
        }
    }
    ctx->pc = 0x3BFBD4u;
label_3bfbd4:
    // 0x3bfbd4: 0x483002c  bgezl       $a0, . + 4 + (0x2C << 2)
    ctx->pc = 0x3BFBD4u;
    {
        const bool branch_taken_0x3bfbd4 = (GPR_S32(ctx, 4) >= 0);
        if (branch_taken_0x3bfbd4) {
            ctx->pc = 0x3BFBD8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3BFBD4u;
            // 0x3bfbd8: 0x460a7841  sub.s       $f1, $f15, $f10 (Delay Slot)
            ctx->f[1] = FPU_SUB_S(ctx->f[15], ctx->f[10]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x3BFC88u;
            goto label_3bfc88;
        }
    }
    ctx->pc = 0x3BFBDCu;
    // 0x3bfbdc: 0x460f5080  add.s       $f2, $f10, $f15
    ctx->pc = 0x3bfbdcu;
    ctx->f[2] = FPU_ADD_S(ctx->f[10], ctx->f[15]);
    // 0x3bfbe0: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x3bfbe0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x3bfbe4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x3bfbe4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3bfbe8: 0xc7808224  lwc1        $f0, -0x7DDC($gp)
    ctx->pc = 0x3bfbe8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935076)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3bfbec: 0xc78480bc  lwc1        $f4, -0x7F44($gp)
    ctx->pc = 0x3bfbecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934716)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x3bfbf0: 0x460112c2  mul.s       $f11, $f2, $f1
    ctx->pc = 0x3bfbf0u;
    ctx->f[11] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x3bfbf4: 0xc78680c0  lwc1        $f6, -0x7F40($gp)
    ctx->pc = 0x3bfbf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934720)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x3bfbf8: 0xc78180c4  lwc1        $f1, -0x7F3C($gp)
    ctx->pc = 0x3bfbf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934724)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3bfbfc: 0xc78281d0  lwc1        $f2, -0x7E30($gp)
    ctx->pc = 0x3bfbfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934992)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3bfc00: 0x46005802  mul.s       $f0, $f11, $f0
    ctx->pc = 0x3bfc00u;
    ctx->f[0] = FPU_MUL_S(ctx->f[11], ctx->f[0]);
    // 0x3bfc04: 0xc7878228  lwc1        $f7, -0x7DD8($gp)
    ctx->pc = 0x3bfc04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935080)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x3bfc08: 0x46015842  mul.s       $f1, $f11, $f1
    ctx->pc = 0x3bfc08u;
    ctx->f[1] = FPU_MUL_S(ctx->f[11], ctx->f[1]);
    // 0x3bfc0c: 0xc78381d8  lwc1        $f3, -0x7E28($gp)
    ctx->pc = 0x3bfc0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935000)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x3bfc10: 0xc78880d4  lwc1        $f8, -0x7F2C($gp)
    ctx->pc = 0x3bfc10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934740)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x3bfc14: 0x46040000  add.s       $f0, $f0, $f4
    ctx->pc = 0x3bfc14u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[4]);
    // 0x3bfc18: 0xc78580d8  lwc1        $f5, -0x7F28($gp)
    ctx->pc = 0x3bfc18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x3bfc1c: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x3bfc1cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x3bfc20: 0xc78480dc  lwc1        $f4, -0x7F24($gp)
    ctx->pc = 0x3bfc20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934748)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x3bfc24: 0x46005802  mul.s       $f0, $f11, $f0
    ctx->pc = 0x3bfc24u;
    ctx->f[0] = FPU_MUL_S(ctx->f[11], ctx->f[0]);
    // 0x3bfc28: 0x46015842  mul.s       $f1, $f11, $f1
    ctx->pc = 0x3bfc28u;
    ctx->f[1] = FPU_MUL_S(ctx->f[11], ctx->f[1]);
    // 0x3bfc2c: 0x46060000  add.s       $f0, $f0, $f6
    ctx->pc = 0x3bfc2cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[6]);
    // 0x3bfc30: 0x46030840  add.s       $f1, $f1, $f3
    ctx->pc = 0x3bfc30u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
    // 0x3bfc34: 0x46005802  mul.s       $f0, $f11, $f0
    ctx->pc = 0x3bfc34u;
    ctx->f[0] = FPU_MUL_S(ctx->f[11], ctx->f[0]);
    // 0x3bfc38: 0x46015842  mul.s       $f1, $f11, $f1
    ctx->pc = 0x3bfc38u;
    ctx->f[1] = FPU_MUL_S(ctx->f[11], ctx->f[1]);
    // 0x3bfc3c: 0x46070000  add.s       $f0, $f0, $f7
    ctx->pc = 0x3bfc3cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[7]);
    // 0x3bfc40: 0x46050840  add.s       $f1, $f1, $f5
    ctx->pc = 0x3bfc40u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[5]);
    // 0x3bfc44: 0x46005802  mul.s       $f0, $f11, $f0
    ctx->pc = 0x3bfc44u;
    ctx->f[0] = FPU_MUL_S(ctx->f[11], ctx->f[0]);
    // 0x3bfc48: 0x46015842  mul.s       $f1, $f11, $f1
    ctx->pc = 0x3bfc48u;
    ctx->f[1] = FPU_MUL_S(ctx->f[11], ctx->f[1]);
    // 0x3bfc4c: 0x46080000  add.s       $f0, $f0, $f8
    ctx->pc = 0x3bfc4cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[8]);
    // 0x3bfc50: 0x460f0840  add.s       $f1, $f1, $f15
    ctx->pc = 0x3bfc50u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[15]);
    // 0x3bfc54: 0x46005802  mul.s       $f0, $f11, $f0
    ctx->pc = 0x3bfc54u;
    ctx->f[0] = FPU_MUL_S(ctx->f[11], ctx->f[0]);
    // 0x3bfc58: 0x46040000  add.s       $f0, $f0, $f4
    ctx->pc = 0x3bfc58u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[4]);
    // 0x3bfc5c: 0x46005802  mul.s       $f0, $f11, $f0
    ctx->pc = 0x3bfc5cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[11], ctx->f[0]);
    // 0x3bfc60: 0x460b0344  c1          0xB0344
    ctx->pc = 0x3bfc60u;
    ctx->f[13] = FPU_SQRT_S(ctx->f[0]);
    // 0x3bfc64: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x3bfc64u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x3bfc68: 0xc78280e0  lwc1        $f2, -0x7F20($gp)
    ctx->pc = 0x3bfc68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3bfc6c: 0xc78380e8  lwc1        $f3, -0x7F18($gp)
    ctx->pc = 0x3bfc6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934760)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x3bfc70: 0x460d0042  mul.s       $f1, $f0, $f13
    ctx->pc = 0x3bfc70u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[13]);
    // 0x3bfc74: 0x46020801  sub.s       $f0, $f1, $f2
    ctx->pc = 0x3bfc74u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
    // 0x3bfc78: 0x46006800  add.s       $f0, $f13, $f0
    ctx->pc = 0x3bfc78u;
    ctx->f[0] = FPU_ADD_S(ctx->f[13], ctx->f[0]);
    // 0x3bfc7c: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x3bfc7cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x3bfc80: 0x10000031  b           . + 4 + (0x31 << 2)
    ctx->pc = 0x3BFC80u;
    {
        const bool branch_taken_0x3bfc80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BFC84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BFC80u;
        // 0x3bfc84: 0x46001a81  sub.s       $f10, $f3, $f0 (Delay Slot)
        ctx->f[10] = FPU_SUB_S(ctx->f[3], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bfc80) {
            ctx->pc = 0x3BFD48u;
            goto label_3bfd48;
        }
    }
    ctx->pc = 0x3BFC88u;
label_3bfc88:
    // 0x3bfc88: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x3bfc88u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x3bfc8c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3bfc8cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3bfc90: 0x46000ac2  mul.s       $f11, $f1, $f0
    ctx->pc = 0x3bfc90u;
    ctx->f[11] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x3bfc94: 0x460b0344  c1          0xB0344
    ctx->pc = 0x3bfc94u;
    ctx->f[13] = FPU_SQRT_S(ctx->f[0]);
    // 0x3bfc98: 0x44026800  mfc1        $v0, $f13
    ctx->pc = 0x3bfc98u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[13], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x3bfc9c: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x3bfc9cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3bfca0: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x3bfca0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x3bfca4: 0x3442f000  ori         $v0, $v0, 0xF000
    ctx->pc = 0x3bfca4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)61440);
    // 0x3bfca8: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x3bfca8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x3bfcac: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x3bfcacu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x3bfcb0: 0x46021142  mul.s       $f5, $f2, $f2
    ctx->pc = 0x3bfcb0u;
    ctx->f[5] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
    // 0x3bfcb4: 0xc7808224  lwc1        $f0, -0x7DDC($gp)
    ctx->pc = 0x3bfcb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935076)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3bfcb8: 0xc78480bc  lwc1        $f4, -0x7F44($gp)
    ctx->pc = 0x3bfcb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934716)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x3bfcbc: 0x46005802  mul.s       $f0, $f11, $f0
    ctx->pc = 0x3bfcbcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[11], ctx->f[0]);
    // 0x3bfcc0: 0xc78a80c0  lwc1        $f10, -0x7F40($gp)
    ctx->pc = 0x3bfcc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934720)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[10] = f; }
    // 0x3bfcc4: 0xc78180c4  lwc1        $f1, -0x7F3C($gp)
    ctx->pc = 0x3bfcc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934724)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3bfcc8: 0x460268c0  add.s       $f3, $f13, $f2
    ctx->pc = 0x3bfcc8u;
    ctx->f[3] = FPU_ADD_S(ctx->f[13], ctx->f[2]);
    // 0x3bfccc: 0xc78681d0  lwc1        $f6, -0x7E30($gp)
    ctx->pc = 0x3bfcccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934992)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x3bfcd0: 0x46055941  sub.s       $f5, $f11, $f5
    ctx->pc = 0x3bfcd0u;
    ctx->f[5] = FPU_SUB_S(ctx->f[11], ctx->f[5]);
    // 0x3bfcd4: 0x46040000  add.s       $f0, $f0, $f4
    ctx->pc = 0x3bfcd4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[4]);
    // 0x3bfcd8: 0xc7878228  lwc1        $f7, -0x7DD8($gp)
    ctx->pc = 0x3bfcd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935080)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x3bfcdc: 0x46015842  mul.s       $f1, $f11, $f1
    ctx->pc = 0x3bfcdcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[11], ctx->f[1]);
    // 0x3bfce0: 0xc78481d8  lwc1        $f4, -0x7E28($gp)
    ctx->pc = 0x3bfce0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935000)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x3bfce4: 0xc78980d4  lwc1        $f9, -0x7F2C($gp)
    ctx->pc = 0x3bfce4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934740)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
    // 0x3bfce8: 0x46032943  div.s       $f5, $f5, $f3
    ctx->pc = 0x3bfce8u;
    { if (ctx->f[3] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[5] = FPU_DIV_S(ctx->f[5], ctx->f[3]); }
    // 0x3bfcec: 0x46005802  mul.s       $f0, $f11, $f0
    ctx->pc = 0x3bfcecu;
    ctx->f[0] = FPU_MUL_S(ctx->f[11], ctx->f[0]);
    // 0x3bfcf0: 0xc78380d8  lwc1        $f3, -0x7F28($gp)
    ctx->pc = 0x3bfcf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x3bfcf4: 0x46060840  add.s       $f1, $f1, $f6
    ctx->pc = 0x3bfcf4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[6]);
    // 0x3bfcf8: 0xc78880dc  lwc1        $f8, -0x7F24($gp)
    ctx->pc = 0x3bfcf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934748)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x3bfcfc: 0x460a0000  add.s       $f0, $f0, $f10
    ctx->pc = 0x3bfcfcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[10]);
    // 0x3bfd00: 0x46015842  mul.s       $f1, $f11, $f1
    ctx->pc = 0x3bfd00u;
    ctx->f[1] = FPU_MUL_S(ctx->f[11], ctx->f[1]);
    // 0x3bfd04: 0x46005802  mul.s       $f0, $f11, $f0
    ctx->pc = 0x3bfd04u;
    ctx->f[0] = FPU_MUL_S(ctx->f[11], ctx->f[0]);
    // 0x3bfd08: 0x46040840  add.s       $f1, $f1, $f4
    ctx->pc = 0x3bfd08u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[4]);
    // 0x3bfd0c: 0x46070000  add.s       $f0, $f0, $f7
    ctx->pc = 0x3bfd0cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[7]);
    // 0x3bfd10: 0x46015842  mul.s       $f1, $f11, $f1
    ctx->pc = 0x3bfd10u;
    ctx->f[1] = FPU_MUL_S(ctx->f[11], ctx->f[1]);
    // 0x3bfd14: 0x46005802  mul.s       $f0, $f11, $f0
    ctx->pc = 0x3bfd14u;
    ctx->f[0] = FPU_MUL_S(ctx->f[11], ctx->f[0]);
    // 0x3bfd18: 0x46030840  add.s       $f1, $f1, $f3
    ctx->pc = 0x3bfd18u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
    // 0x3bfd1c: 0x46090000  add.s       $f0, $f0, $f9
    ctx->pc = 0x3bfd1cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[9]);
    // 0x3bfd20: 0x46015842  mul.s       $f1, $f11, $f1
    ctx->pc = 0x3bfd20u;
    ctx->f[1] = FPU_MUL_S(ctx->f[11], ctx->f[1]);
    // 0x3bfd24: 0x46005802  mul.s       $f0, $f11, $f0
    ctx->pc = 0x3bfd24u;
    ctx->f[0] = FPU_MUL_S(ctx->f[11], ctx->f[0]);
    // 0x3bfd28: 0x460f0840  add.s       $f1, $f1, $f15
    ctx->pc = 0x3bfd28u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[15]);
    // 0x3bfd2c: 0x46080000  add.s       $f0, $f0, $f8
    ctx->pc = 0x3bfd2cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[8]);
    // 0x3bfd30: 0x46005802  mul.s       $f0, $f11, $f0
    ctx->pc = 0x3bfd30u;
    ctx->f[0] = FPU_MUL_S(ctx->f[11], ctx->f[0]);
    // 0x3bfd34: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x3bfd34u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x3bfd38: 0x460d0002  mul.s       $f0, $f0, $f13
    ctx->pc = 0x3bfd38u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[13]);
    // 0x3bfd3c: 0x46050000  add.s       $f0, $f0, $f5
    ctx->pc = 0x3bfd3cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[5]);
    // 0x3bfd40: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x3bfd40u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x3bfd44: 0x46021280  add.s       $f10, $f2, $f2
    ctx->pc = 0x3bfd44u;
    ctx->f[10] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_3bfd48:
    // 0x3bfd48: 0x460a5042  mul.s       $f1, $f10, $f10
    ctx->pc = 0x3bfd48u;
    ctx->f[1] = FPU_MUL_S(ctx->f[10], ctx->f[10]);
    // 0x3bfd4c: 0x0  nop
    ctx->pc = 0x3bfd4cu;
    // NOP
label_3bfd50:
    // 0x3bfd50: 0xc782822c  lwc1        $f2, -0x7DD4($gp)
    ctx->pc = 0x3bfd50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935084)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3bfd54: 0xc78581e4  lwc1        $f5, -0x7E1C($gp)
    ctx->pc = 0x3bfd54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935012)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x3bfd58: 0xc78681e8  lwc1        $f6, -0x7E18($gp)
    ctx->pc = 0x3bfd58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935016)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x3bfd5c: 0x46020802  mul.s       $f0, $f1, $f2
    ctx->pc = 0x3bfd5cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x3bfd60: 0xc78781ec  lwc1        $f7, -0x7E14($gp)
    ctx->pc = 0x3bfd60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935020)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x3bfd64: 0xc78881f0  lwc1        $f8, -0x7E10($gp)
    ctx->pc = 0x3bfd64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935024)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x3bfd68: 0x460a0902  mul.s       $f4, $f1, $f10
    ctx->pc = 0x3bfd68u;
    ctx->f[4] = FPU_MUL_S(ctx->f[1], ctx->f[10]);
    // 0x3bfd6c: 0xc78981f4  lwc1        $f9, -0x7E0C($gp)
    ctx->pc = 0x3bfd6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935028)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
    // 0x3bfd70: 0x46050000  add.s       $f0, $f0, $f5
    ctx->pc = 0x3bfd70u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[5]);
    // 0x3bfd74: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x3bfd74u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x3bfd78: 0x46060000  add.s       $f0, $f0, $f6
    ctx->pc = 0x3bfd78u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[6]);
    // 0x3bfd7c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x3bfd7cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x3bfd80: 0x46070000  add.s       $f0, $f0, $f7
    ctx->pc = 0x3bfd80u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[7]);
    // 0x3bfd84: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x3bfd84u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x3bfd88: 0x46080000  add.s       $f0, $f0, $f8
    ctx->pc = 0x3bfd88u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[8]);
    // 0x3bfd8c: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x3bfd8cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x3bfd90: 0x46090840  add.s       $f1, $f1, $f9
    ctx->pc = 0x3bfd90u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[9]);
    // 0x3bfd94: 0x46012102  mul.s       $f4, $f4, $f1
    ctx->pc = 0x3bfd94u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[1]);
    // 0x3bfd98: 0x46045100  add.s       $f4, $f10, $f4
    ctx->pc = 0x3bfd98u;
    ctx->f[4] = FPU_ADD_S(ctx->f[10], ctx->f[4]);
    // 0x3bfd9c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x3bfd9cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x3bfda0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3bfda0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3bfda4: 0x46040103  div.s       $f4, $f0, $f4
    ctx->pc = 0x3bfda4u;
    { if (ctx->f[4] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[4] = FPU_DIV_S(ctx->f[0], ctx->f[4]); }
    // 0x3bfda8: 0x460a7382  mul.s       $f14, $f14, $f10
    ctx->pc = 0x3bfda8u;
    ctx->f[14] = FPU_MUL_S(ctx->f[14], ctx->f[10]);
    // 0x3bfdac: 0x460e7042  mul.s       $f1, $f14, $f14
    ctx->pc = 0x3bfdacu;
    ctx->f[1] = FPU_MUL_S(ctx->f[14], ctx->f[14]);
    // 0x3bfdb0: 0x46020802  mul.s       $f0, $f1, $f2
    ctx->pc = 0x3bfdb0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x3bfdb4: 0x460e08c2  mul.s       $f3, $f1, $f14
    ctx->pc = 0x3bfdb4u;
    ctx->f[3] = FPU_MUL_S(ctx->f[1], ctx->f[14]);
    // 0x3bfdb8: 0x46050000  add.s       $f0, $f0, $f5
    ctx->pc = 0x3bfdb8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[5]);
    // 0x3bfdbc: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x3bfdbcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x3bfdc0: 0x46060000  add.s       $f0, $f0, $f6
    ctx->pc = 0x3bfdc0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[6]);
    // 0x3bfdc4: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x3bfdc4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x3bfdc8: 0x46070000  add.s       $f0, $f0, $f7
    ctx->pc = 0x3bfdc8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[7]);
    // 0x3bfdcc: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x3bfdccu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x3bfdd0: 0x46080000  add.s       $f0, $f0, $f8
    ctx->pc = 0x3bfdd0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[8]);
    // 0x3bfdd4: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x3bfdd4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x3bfdd8: 0x46090840  add.s       $f1, $f1, $f9
    ctx->pc = 0x3bfdd8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[9]);
    // 0x3bfddc: 0x460118c2  mul.s       $f3, $f3, $f1
    ctx->pc = 0x3bfddcu;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
    // 0x3bfde0: 0x46037380  add.s       $f14, $f14, $f3
    ctx->pc = 0x3bfde0u;
    ctx->f[14] = FPU_ADD_S(ctx->f[14], ctx->f[3]);
    // 0x3bfde4: 0x46047382  mul.s       $f14, $f14, $f4
    ctx->pc = 0x3bfde4u;
    ctx->f[14] = FPU_MUL_S(ctx->f[14], ctx->f[4]);
    // 0x3bfde8: 0x460a6302  mul.s       $f12, $f12, $f10
    ctx->pc = 0x3bfde8u;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[10]);
    // 0x3bfdec: 0x460c6002  mul.s       $f0, $f12, $f12
    ctx->pc = 0x3bfdecu;
    ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[12]);
    // 0x3bfdf0: 0x46020082  mul.s       $f2, $f0, $f2
    ctx->pc = 0x3bfdf0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x3bfdf4: 0x460c0042  mul.s       $f1, $f0, $f12
    ctx->pc = 0x3bfdf4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    // 0x3bfdf8: 0x46051080  add.s       $f2, $f2, $f5
    ctx->pc = 0x3bfdf8u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[5]);
    // 0x3bfdfc: 0x46020082  mul.s       $f2, $f0, $f2
    ctx->pc = 0x3bfdfcu;
    ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x3bfe00: 0x46061080  add.s       $f2, $f2, $f6
    ctx->pc = 0x3bfe00u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[6]);
    // 0x3bfe04: 0x46020082  mul.s       $f2, $f0, $f2
    ctx->pc = 0x3bfe04u;
    ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x3bfe08: 0x46071080  add.s       $f2, $f2, $f7
    ctx->pc = 0x3bfe08u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[7]);
    // 0x3bfe0c: 0x46020082  mul.s       $f2, $f0, $f2
    ctx->pc = 0x3bfe0cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x3bfe10: 0x46081080  add.s       $f2, $f2, $f8
    ctx->pc = 0x3bfe10u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[8]);
    // 0x3bfe14: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x3bfe14u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x3bfe18: 0x46090000  add.s       $f0, $f0, $f9
    ctx->pc = 0x3bfe18u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[9]);
    // 0x3bfe1c: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x3bfe1cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x3bfe20: 0x46016300  add.s       $f12, $f12, $f1
    ctx->pc = 0x3bfe20u;
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[1]);
    // 0x3bfe24: 0x46046302  mul.s       $f12, $f12, $f4
    ctx->pc = 0x3bfe24u;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[4]);
    // 0x3bfe28: 0xc7a60000  lwc1        $f6, 0x0($sp)
    ctx->pc = 0x3bfe28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x3bfe2c: 0x0  nop
    ctx->pc = 0x3bfe2cu;
    // NOP
label_3bfe30:
    // 0x3bfe30: 0xc7a70010  lwc1        $f7, 0x10($sp)
    ctx->pc = 0x3bfe30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x3bfe34: 0xc7a40004  lwc1        $f4, 0x4($sp)
    ctx->pc = 0x3bfe34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x3bfe38: 0x46067182  mul.s       $f6, $f14, $f6
    ctx->pc = 0x3bfe38u;
    ctx->f[6] = FPU_MUL_S(ctx->f[14], ctx->f[6]);
    // 0x3bfe3c: 0xc7a50014  lwc1        $f5, 0x14($sp)
    ctx->pc = 0x3bfe3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x3bfe40: 0x460761c2  mul.s       $f7, $f12, $f7
    ctx->pc = 0x3bfe40u;
    ctx->f[7] = FPU_MUL_S(ctx->f[12], ctx->f[7]);
    // 0x3bfe44: 0xc7a30008  lwc1        $f3, 0x8($sp)
    ctx->pc = 0x3bfe44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x3bfe48: 0x46047102  mul.s       $f4, $f14, $f4
    ctx->pc = 0x3bfe48u;
    ctx->f[4] = FPU_MUL_S(ctx->f[14], ctx->f[4]);
    // 0x3bfe4c: 0xc7a20018  lwc1        $f2, 0x18($sp)
    ctx->pc = 0x3bfe4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3bfe50: 0x46056142  mul.s       $f5, $f12, $f5
    ctx->pc = 0x3bfe50u;
    ctx->f[5] = FPU_MUL_S(ctx->f[12], ctx->f[5]);
    // 0x3bfe54: 0xc7a1000c  lwc1        $f1, 0xC($sp)
    ctx->pc = 0x3bfe54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3bfe58: 0x460370c2  mul.s       $f3, $f14, $f3
    ctx->pc = 0x3bfe58u;
    ctx->f[3] = FPU_MUL_S(ctx->f[14], ctx->f[3]);
    // 0x3bfe5c: 0xc7a0001c  lwc1        $f0, 0x1C($sp)
    ctx->pc = 0x3bfe5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3bfe60: 0x46026082  mul.s       $f2, $f12, $f2
    ctx->pc = 0x3bfe60u;
    ctx->f[2] = FPU_MUL_S(ctx->f[12], ctx->f[2]);
    // 0x3bfe64: 0x46017042  mul.s       $f1, $f14, $f1
    ctx->pc = 0x3bfe64u;
    ctx->f[1] = FPU_MUL_S(ctx->f[14], ctx->f[1]);
    // 0x3bfe68: 0x46006002  mul.s       $f0, $f12, $f0
    ctx->pc = 0x3bfe68u;
    ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    // 0x3bfe6c: 0x46073180  add.s       $f6, $f6, $f7
    ctx->pc = 0x3bfe6cu;
    ctx->f[6] = FPU_ADD_S(ctx->f[6], ctx->f[7]);
    // 0x3bfe70: 0x46052100  add.s       $f4, $f4, $f5
    ctx->pc = 0x3bfe70u;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[5]);
    // 0x3bfe74: 0x460218c0  add.s       $f3, $f3, $f2
    ctx->pc = 0x3bfe74u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[2]);
    // 0x3bfe78: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x3bfe78u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x3bfe7c: 0xe5460008  swc1        $f6, 0x8($t2)
    ctx->pc = 0x3bfe7cu;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 10), 8), bits); }
    // 0x3bfe80: 0xe544000c  swc1        $f4, 0xC($t2)
    ctx->pc = 0x3bfe80u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 10), 12), bits); }
    // 0x3bfe84: 0xe5430010  swc1        $f3, 0x10($t2)
    ctx->pc = 0x3bfe84u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 10), 16), bits); }
    // 0x3bfe88: 0xe5410014  swc1        $f1, 0x14($t2)
    ctx->pc = 0x3bfe88u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 10), 20), bits); }
    // 0x3bfe8c: 0x3e00008  jr          $ra
    ctx->pc = 0x3BFE8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3BFE90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BFE8Cu;
        // 0x3bfe90: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3BFE8Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3BFE94u;
    // 0x3bfe94: 0x0  nop
    ctx->pc = 0x3bfe94u;
    // NOP
    ctx->pc = 0x3bfe98u;
}
