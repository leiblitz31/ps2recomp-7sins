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

// Function: sub_00400108
// Address: 0x400108 - 0x400650
void sub_00400108_0x400108(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00400108_0x400108");
#endif

    switch (ctx->pc) {
        case 0x400220u: goto label_400220;
        case 0x4002dcu: goto label_4002dc;
        case 0x400340u: goto label_400340;
        case 0x4004f0u: goto label_4004f0;
        case 0x4005c8u: goto label_4005c8;
        default: break;
    }

    ctx->pc = 0x400108u;

    // 0x400108: 0x90830010  lbu         $v1, 0x10($a0)
    ctx->pc = 0x400108u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x40010c: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x40010cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x400110: 0x146200c4  bne         $v1, $v0, . + 4 + (0xC4 << 2)
    ctx->pc = 0x400110u;
    {
        const bool branch_taken_0x400110 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x400114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x400110u;
        // 0x400114: 0xa0502d  daddu       $t2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x400110) {
            ctx->pc = 0x400424u;
            goto label_400424;
        }
    }
    ctx->pc = 0x400118u;
    // 0x400118: 0x90830011  lbu         $v1, 0x11($a0)
    ctx->pc = 0x400118u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 17)));
    // 0x40011c: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x40011cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x400120: 0x54620070  bnel        $v1, $v0, . + 4 + (0x70 << 2)
    ctx->pc = 0x400120u;
    {
        const bool branch_taken_0x400120 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x400120) {
            ctx->pc = 0x400124u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x400120u;
            // 0x400124: 0xdc980000  ld          $t8, 0x0($a0) (Delay Slot)
            SET_GPR_U64(ctx, 24, READ64(ADD32(GPR_U32(ctx, 4), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4002E4u;
            goto label_4002e4;
        }
    }
    ctx->pc = 0x400128u;
    // 0x400128: 0xdc8c0000  ld          $t4, 0x0($a0)
    ctx->pc = 0x400128u;
    SET_GPR_U64(ctx, 12, READ64(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x40012c: 0x1180006b  beqz        $t4, . + 4 + (0x6B << 2)
    ctx->pc = 0x40012Cu;
    {
        const bool branch_taken_0x40012c = (GPR_U64(ctx, 12) == GPR_U64(ctx, 0));
        ctx->pc = 0x400130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40012Cu;
        // 0x400130: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40012c) {
            ctx->pc = 0x4002DCu;
            goto label_4002dc;
        }
    }
    ctx->pc = 0x400134u;
    // 0x400134: 0x240b00ff  addiu       $t3, $zero, 0xFF
    ctx->pc = 0x400134u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x400138: 0x140382d  daddu       $a3, $t2, $zero
    ctx->pc = 0x400138u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40013c: 0x140302d  daddu       $a2, $t2, $zero
    ctx->pc = 0x40013cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x400140: 0x19800020  blez        $t4, . + 4 + (0x20 << 2)
    ctx->pc = 0x400140u;
    {
        const bool branch_taken_0x400140 = (GPR_S32(ctx, 12) <= 0);
        ctx->pc = 0x400144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x400140u;
        // 0x400144: 0x31830003  andi        $v1, $t4, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 12) & (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        if (branch_taken_0x400140) {
            ctx->pc = 0x4001C4u;
            goto label_4001c4;
        }
    }
    ctx->pc = 0x400148u;
    // 0x400148: 0x10600032  beqz        $v1, . + 4 + (0x32 << 2)
    ctx->pc = 0x400148u;
    {
        const bool branch_taken_0x400148 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x40014Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x400148u;
        // 0x40014c: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x400148) {
            ctx->pc = 0x400214u;
            goto label_400214;
        }
    }
    ctx->pc = 0x400150u;
    // 0x400150: 0x5440001d  bnel        $v0, $zero, . + 4 + (0x1D << 2)
    ctx->pc = 0x400150u;
    {
        const bool branch_taken_0x400150 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x400150) {
            ctx->pc = 0x400154u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x400150u;
            // 0x400154: 0x90c20000  lbu         $v0, 0x0($a2) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4001C8u;
            goto label_4001c8;
        }
    }
    ctx->pc = 0x400158u;
    // 0x400158: 0x28620003  slti        $v0, $v1, 0x3
    ctx->pc = 0x400158u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x40015c: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x40015Cu;
    {
        const bool branch_taken_0x40015c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x40015c) {
            ctx->pc = 0x400160u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x40015Cu;
            // 0x400160: 0x90c20000  lbu         $v0, 0x0($a2) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x400180u;
            goto label_400180;
        }
    }
    ctx->pc = 0x400164u;
    // 0x400164: 0x91420003  lbu         $v0, 0x3($t2)
    ctx->pc = 0x400164u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 10), 3)));
    // 0x400168: 0x25470004  addiu       $a3, $t2, 0x4
    ctx->pc = 0x400168u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 10), 4));
    // 0x40016c: 0xe0302d  daddu       $a2, $a3, $zero
    ctx->pc = 0x40016cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x400170: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x400170u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x400174: 0x1621023  subu        $v0, $t3, $v0
    ctx->pc = 0x400174u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 11), GPR_U32(ctx, 2)));
    // 0x400178: 0xa1420003  sb          $v0, 0x3($t2)
    ctx->pc = 0x400178u;
    WRITE8(ADD32(GPR_U32(ctx, 10), 3), (uint8_t)GPR_U32(ctx, 2));
    // 0x40017c: 0x90c20000  lbu         $v0, 0x0($a2)
    ctx->pc = 0x40017cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_400180:
    // 0x400180: 0x65080001  daddiu      $t0, $t0, 0x1
    ctx->pc = 0x400180u;
    SET_GPR_S64(ctx, 8, (int64_t)GPR_S64(ctx, 8) + (int64_t)(int32_t)1);
    // 0x400184: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x400184u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x400188: 0xa0e20000  sb          $v0, 0x0($a3)
    ctx->pc = 0x400188u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x40018c: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x40018cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x400190: 0x90c20000  lbu         $v0, 0x0($a2)
    ctx->pc = 0x400190u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x400194: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x400194u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x400198: 0xa0e20000  sb          $v0, 0x0($a3)
    ctx->pc = 0x400198u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x40019c: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x40019cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x4001a0: 0x90c20000  lbu         $v0, 0x0($a2)
    ctx->pc = 0x4001a0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4001a4: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x4001a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x4001a8: 0xa0e20000  sb          $v0, 0x0($a3)
    ctx->pc = 0x4001a8u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x4001ac: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x4001acu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x4001b0: 0x90c20000  lbu         $v0, 0x0($a2)
    ctx->pc = 0x4001b0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4001b4: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x4001b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x4001b8: 0x1621023  subu        $v0, $t3, $v0
    ctx->pc = 0x4001b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 11), GPR_U32(ctx, 2)));
    // 0x4001bc: 0xa0e20000  sb          $v0, 0x0($a3)
    ctx->pc = 0x4001bcu;
    WRITE8(ADD32(GPR_U32(ctx, 7), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x4001c0: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x4001c0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_4001c4:
    // 0x4001c4: 0x90c20000  lbu         $v0, 0x0($a2)
    ctx->pc = 0x4001c4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_4001c8:
    // 0x4001c8: 0x65080001  daddiu      $t0, $t0, 0x1
    ctx->pc = 0x4001c8u;
    SET_GPR_S64(ctx, 8, (int64_t)GPR_S64(ctx, 8) + (int64_t)(int32_t)1);
    // 0x4001cc: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x4001ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x4001d0: 0x10c482b  sltu        $t1, $t0, $t4
    ctx->pc = 0x4001d0u;
    SET_GPR_U64(ctx, 9, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)GPR_U64(ctx, 12)) ? 1 : 0);
    // 0x4001d4: 0xa0e20000  sb          $v0, 0x0($a3)
    ctx->pc = 0x4001d4u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x4001d8: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x4001d8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x4001dc: 0x90c20000  lbu         $v0, 0x0($a2)
    ctx->pc = 0x4001dcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4001e0: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x4001e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x4001e4: 0xa0e20000  sb          $v0, 0x0($a3)
    ctx->pc = 0x4001e4u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x4001e8: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x4001e8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x4001ec: 0x90c20000  lbu         $v0, 0x0($a2)
    ctx->pc = 0x4001ecu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4001f0: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x4001f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x4001f4: 0xa0e20000  sb          $v0, 0x0($a3)
    ctx->pc = 0x4001f4u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x4001f8: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x4001f8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x4001fc: 0x90c20000  lbu         $v0, 0x0($a2)
    ctx->pc = 0x4001fcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x400200: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x400200u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x400204: 0x1621023  subu        $v0, $t3, $v0
    ctx->pc = 0x400204u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 11), GPR_U32(ctx, 2)));
    // 0x400208: 0xa0e20000  sb          $v0, 0x0($a3)
    ctx->pc = 0x400208u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x40020c: 0x11200033  beqz        $t1, . + 4 + (0x33 << 2)
    ctx->pc = 0x40020Cu;
    {
        const bool branch_taken_0x40020c = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        ctx->pc = 0x400210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40020Cu;
        // 0x400210: 0x24e70001  addiu       $a3, $a3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40020c) {
            ctx->pc = 0x4002DCu;
            goto label_4002dc;
        }
    }
    ctx->pc = 0x400214u;
label_400214:
    // 0x400214: 0xe0282d  daddu       $a1, $a3, $zero
    ctx->pc = 0x400214u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x400218: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x400218u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40021c: 0x0  nop
    ctx->pc = 0x40021cu;
    // NOP
label_400220:
    // 0x400220: 0x90830000  lbu         $v1, 0x0($a0)
    ctx->pc = 0x400220u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x400224: 0x65080004  daddiu      $t0, $t0, 0x4
    ctx->pc = 0x400224u;
    SET_GPR_S64(ctx, 8, (int64_t)GPR_S64(ctx, 8) + (int64_t)(int32_t)4);
    // 0x400228: 0x10c482b  sltu        $t1, $t0, $t4
    ctx->pc = 0x400228u;
    SET_GPR_U64(ctx, 9, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)GPR_U64(ctx, 12)) ? 1 : 0);
    // 0x40022c: 0xa0a30000  sb          $v1, 0x0($a1)
    ctx->pc = 0x40022cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x400230: 0x90820001  lbu         $v0, 0x1($a0)
    ctx->pc = 0x400230u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1)));
    // 0x400234: 0xa0a20001  sb          $v0, 0x1($a1)
    ctx->pc = 0x400234u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x400238: 0x90830002  lbu         $v1, 0x2($a0)
    ctx->pc = 0x400238u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x40023c: 0xa0a30002  sb          $v1, 0x2($a1)
    ctx->pc = 0x40023cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x400240: 0x90820003  lbu         $v0, 0x3($a0)
    ctx->pc = 0x400240u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 3)));
    // 0x400244: 0x1621023  subu        $v0, $t3, $v0
    ctx->pc = 0x400244u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 11), GPR_U32(ctx, 2)));
    // 0x400248: 0xa0a20003  sb          $v0, 0x3($a1)
    ctx->pc = 0x400248u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 3), (uint8_t)GPR_U32(ctx, 2));
    // 0x40024c: 0x90830004  lbu         $v1, 0x4($a0)
    ctx->pc = 0x40024cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x400250: 0xa0a30004  sb          $v1, 0x4($a1)
    ctx->pc = 0x400250u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 4), (uint8_t)GPR_U32(ctx, 3));
    // 0x400254: 0x90820005  lbu         $v0, 0x5($a0)
    ctx->pc = 0x400254u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 5)));
    // 0x400258: 0xa0a20005  sb          $v0, 0x5($a1)
    ctx->pc = 0x400258u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 5), (uint8_t)GPR_U32(ctx, 2));
    // 0x40025c: 0x90830006  lbu         $v1, 0x6($a0)
    ctx->pc = 0x40025cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 6)));
    // 0x400260: 0xa0a30006  sb          $v1, 0x6($a1)
    ctx->pc = 0x400260u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 6), (uint8_t)GPR_U32(ctx, 3));
    // 0x400264: 0x90820007  lbu         $v0, 0x7($a0)
    ctx->pc = 0x400264u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 7)));
    // 0x400268: 0x1621023  subu        $v0, $t3, $v0
    ctx->pc = 0x400268u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 11), GPR_U32(ctx, 2)));
    // 0x40026c: 0xa0a20007  sb          $v0, 0x7($a1)
    ctx->pc = 0x40026cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 7), (uint8_t)GPR_U32(ctx, 2));
    // 0x400270: 0x90830008  lbu         $v1, 0x8($a0)
    ctx->pc = 0x400270u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x400274: 0xa0a30008  sb          $v1, 0x8($a1)
    ctx->pc = 0x400274u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 8), (uint8_t)GPR_U32(ctx, 3));
    // 0x400278: 0x90820009  lbu         $v0, 0x9($a0)
    ctx->pc = 0x400278u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 9)));
    // 0x40027c: 0xa0a20009  sb          $v0, 0x9($a1)
    ctx->pc = 0x40027cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 9), (uint8_t)GPR_U32(ctx, 2));
    // 0x400280: 0x9083000a  lbu         $v1, 0xA($a0)
    ctx->pc = 0x400280u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 10)));
    // 0x400284: 0xa0a3000a  sb          $v1, 0xA($a1)
    ctx->pc = 0x400284u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 10), (uint8_t)GPR_U32(ctx, 3));
    // 0x400288: 0x9082000b  lbu         $v0, 0xB($a0)
    ctx->pc = 0x400288u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 11)));
    // 0x40028c: 0x1621023  subu        $v0, $t3, $v0
    ctx->pc = 0x40028cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 11), GPR_U32(ctx, 2)));
    // 0x400290: 0xa0a2000b  sb          $v0, 0xB($a1)
    ctx->pc = 0x400290u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 11), (uint8_t)GPR_U32(ctx, 2));
    // 0x400294: 0x9083000c  lbu         $v1, 0xC($a0)
    ctx->pc = 0x400294u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x400298: 0x2484000d  addiu       $a0, $a0, 0xD
    ctx->pc = 0x400298u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 13));
    // 0x40029c: 0xa0a3000c  sb          $v1, 0xC($a1)
    ctx->pc = 0x40029cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 12), (uint8_t)GPR_U32(ctx, 3));
    // 0x4002a0: 0x24a5000d  addiu       $a1, $a1, 0xD
    ctx->pc = 0x4002a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 13));
    // 0x4002a4: 0x90820000  lbu         $v0, 0x0($a0)
    ctx->pc = 0x4002a4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4002a8: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x4002a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x4002ac: 0xa0a20000  sb          $v0, 0x0($a1)
    ctx->pc = 0x4002acu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x4002b0: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x4002b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x4002b4: 0x90820000  lbu         $v0, 0x0($a0)
    ctx->pc = 0x4002b4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4002b8: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x4002b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x4002bc: 0xa0a20000  sb          $v0, 0x0($a1)
    ctx->pc = 0x4002bcu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x4002c0: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x4002c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x4002c4: 0x90820000  lbu         $v0, 0x0($a0)
    ctx->pc = 0x4002c4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4002c8: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x4002c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x4002cc: 0x1621023  subu        $v0, $t3, $v0
    ctx->pc = 0x4002ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 11), GPR_U32(ctx, 2)));
    // 0x4002d0: 0xa0a20000  sb          $v0, 0x0($a1)
    ctx->pc = 0x4002d0u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x4002d4: 0x1520ffd2  bnez        $t1, . + 4 + (-0x2E << 2)
    ctx->pc = 0x4002D4u;
    {
        const bool branch_taken_0x4002d4 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 0));
        ctx->pc = 0x4002D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4002D4u;
        // 0x4002d8: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4002d4) {
            ctx->pc = 0x400220u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_400220;
        }
    }
    ctx->pc = 0x4002DCu;
label_4002dc:
    // 0x4002dc: 0x3e00008  jr          $ra
    ctx->pc = 0x4002DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4002DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4002E4u;
label_4002e4:
    // 0x4002e4: 0x1300fffd  beqz        $t8, . + 4 + (-0x3 << 2)
    ctx->pc = 0x4002E4u;
    {
        const bool branch_taken_0x4002e4 = (GPR_U64(ctx, 24) == GPR_U64(ctx, 0));
        ctx->pc = 0x4002E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4002E4u;
        // 0x4002e8: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4002e4) {
            ctx->pc = 0x4002DCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4002dc;
        }
    }
    ctx->pc = 0x4002ECu;
    // 0x4002ec: 0x240d00ff  addiu       $t5, $zero, 0xFF
    ctx->pc = 0x4002ecu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x4002f0: 0x140782d  daddu       $t7, $t2, $zero
    ctx->pc = 0x4002f0u;
    SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4002f4: 0x140602d  daddu       $t4, $t2, $zero
    ctx->pc = 0x4002f4u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4002f8: 0x1b000003  blez        $t8, . + 4 + (0x3 << 2)
    ctx->pc = 0x4002F8u;
    {
        const bool branch_taken_0x4002f8 = (GPR_S32(ctx, 24) <= 0);
        ctx->pc = 0x4002FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4002F8u;
        // 0x4002fc: 0x33020001  andi        $v0, $t8, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 24) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4002f8) {
            ctx->pc = 0x400308u;
            goto label_400308;
        }
    }
    ctx->pc = 0x400300u;
    // 0x400300: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x400300u;
    {
        const bool branch_taken_0x400300 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x400304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x400300u;
        // 0x400304: 0x1e0302d  daddu       $a2, $t7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 15) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x400300) {
            ctx->pc = 0x40033Cu;
            goto label_40033c;
        }
    }
    ctx->pc = 0x400308u;
label_400308:
    // 0x400308: 0x91440006  lbu         $a0, 0x6($t2)
    ctx->pc = 0x400308u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 10), 6)));
    // 0x40030c: 0x25420008  addiu       $v0, $t2, 0x8
    ctx->pc = 0x40030cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 10), 8));
    // 0x400310: 0x91430007  lbu         $v1, 0x7($t2)
    ctx->pc = 0x400310u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 10), 7)));
    // 0x400314: 0x40602d  daddu       $t4, $v0, $zero
    ctx->pc = 0x400314u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x400318: 0x1a42023  subu        $a0, $t5, $a0
    ctx->pc = 0x400318u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 13), GPR_U32(ctx, 4)));
    // 0x40031c: 0x240b0001  addiu       $t3, $zero, 0x1
    ctx->pc = 0x40031cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x400320: 0x1a31823  subu        $v1, $t5, $v1
    ctx->pc = 0x400320u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 13), GPR_U32(ctx, 3)));
    // 0x400324: 0x180782d  daddu       $t7, $t4, $zero
    ctx->pc = 0x400324u;
    SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
    // 0x400328: 0x178702b  sltu        $t6, $t3, $t8
    ctx->pc = 0x400328u;
    SET_GPR_U64(ctx, 14, ((uint64_t)GPR_U64(ctx, 11) < (uint64_t)GPR_U64(ctx, 24)) ? 1 : 0);
    // 0x40032c: 0xa1440006  sb          $a0, 0x6($t2)
    ctx->pc = 0x40032cu;
    WRITE8(ADD32(GPR_U32(ctx, 10), 6), (uint8_t)GPR_U32(ctx, 4));
    // 0x400330: 0x11c0ffea  beqz        $t6, . + 4 + (-0x16 << 2)
    ctx->pc = 0x400330u;
    {
        const bool branch_taken_0x400330 = (GPR_U64(ctx, 14) == GPR_U64(ctx, 0));
        ctx->pc = 0x400334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x400330u;
        // 0x400334: 0xa1430007  sb          $v1, 0x7($t2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 10), 7), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x400330) {
            ctx->pc = 0x4002DCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4002dc;
        }
    }
    ctx->pc = 0x400338u;
    // 0x400338: 0x1e0302d  daddu       $a2, $t7, $zero
    ctx->pc = 0x400338u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 15) + (uint64_t)GPR_U64(ctx, 0));
label_40033c:
    // 0x40033c: 0x180282d  daddu       $a1, $t4, $zero
    ctx->pc = 0x40033cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
label_400340:
    // 0x400340: 0x90a30000  lbu         $v1, 0x0($a1)
    ctx->pc = 0x400340u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x400344: 0x656b0002  daddiu      $t3, $t3, 0x2
    ctx->pc = 0x400344u;
    SET_GPR_S64(ctx, 11, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)2);
    // 0x400348: 0x178702b  sltu        $t6, $t3, $t8
    ctx->pc = 0x400348u;
    SET_GPR_U64(ctx, 14, ((uint64_t)GPR_U64(ctx, 11) < (uint64_t)GPR_U64(ctx, 24)) ? 1 : 0);
    // 0x40034c: 0xa0c30000  sb          $v1, 0x0($a2)
    ctx->pc = 0x40034cu;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x400350: 0x90a20001  lbu         $v0, 0x1($a1)
    ctx->pc = 0x400350u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 1)));
    // 0x400354: 0xa0c20001  sb          $v0, 0x1($a2)
    ctx->pc = 0x400354u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x400358: 0x90a30002  lbu         $v1, 0x2($a1)
    ctx->pc = 0x400358u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 2)));
    // 0x40035c: 0xa0c30002  sb          $v1, 0x2($a2)
    ctx->pc = 0x40035cu;
    WRITE8(ADD32(GPR_U32(ctx, 6), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x400360: 0x90a20003  lbu         $v0, 0x3($a1)
    ctx->pc = 0x400360u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 3)));
    // 0x400364: 0xa0c20003  sb          $v0, 0x3($a2)
    ctx->pc = 0x400364u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 3), (uint8_t)GPR_U32(ctx, 2));
    // 0x400368: 0x90a30004  lbu         $v1, 0x4($a1)
    ctx->pc = 0x400368u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x40036c: 0xa0c30004  sb          $v1, 0x4($a2)
    ctx->pc = 0x40036cu;
    WRITE8(ADD32(GPR_U32(ctx, 6), 4), (uint8_t)GPR_U32(ctx, 3));
    // 0x400370: 0x90a40005  lbu         $a0, 0x5($a1)
    ctx->pc = 0x400370u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 5)));
    // 0x400374: 0xa0c40005  sb          $a0, 0x5($a2)
    ctx->pc = 0x400374u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 5), (uint8_t)GPR_U32(ctx, 4));
    // 0x400378: 0x90a20006  lbu         $v0, 0x6($a1)
    ctx->pc = 0x400378u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 6)));
    // 0x40037c: 0x1a21023  subu        $v0, $t5, $v0
    ctx->pc = 0x40037cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 13), GPR_U32(ctx, 2)));
    // 0x400380: 0xa0c20006  sb          $v0, 0x6($a2)
    ctx->pc = 0x400380u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 6), (uint8_t)GPR_U32(ctx, 2));
    // 0x400384: 0x90a30007  lbu         $v1, 0x7($a1)
    ctx->pc = 0x400384u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 7)));
    // 0x400388: 0x1a31823  subu        $v1, $t5, $v1
    ctx->pc = 0x400388u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 13), GPR_U32(ctx, 3)));
    // 0x40038c: 0xa0c30007  sb          $v1, 0x7($a2)
    ctx->pc = 0x40038cu;
    WRITE8(ADD32(GPR_U32(ctx, 6), 7), (uint8_t)GPR_U32(ctx, 3));
    // 0x400390: 0x90a20008  lbu         $v0, 0x8($a1)
    ctx->pc = 0x400390u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x400394: 0x24a50009  addiu       $a1, $a1, 0x9
    ctx->pc = 0x400394u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 9));
    // 0x400398: 0xa0c20008  sb          $v0, 0x8($a2)
    ctx->pc = 0x400398u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 8), (uint8_t)GPR_U32(ctx, 2));
    // 0x40039c: 0x24c60009  addiu       $a2, $a2, 0x9
    ctx->pc = 0x40039cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 9));
    // 0x4003a0: 0x90a20000  lbu         $v0, 0x0($a1)
    ctx->pc = 0x4003a0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4003a4: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x4003a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x4003a8: 0xa0c20000  sb          $v0, 0x0($a2)
    ctx->pc = 0x4003a8u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x4003ac: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x4003acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x4003b0: 0x90a20000  lbu         $v0, 0x0($a1)
    ctx->pc = 0x4003b0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4003b4: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x4003b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x4003b8: 0xa0c20000  sb          $v0, 0x0($a2)
    ctx->pc = 0x4003b8u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x4003bc: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x4003bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x4003c0: 0x90a20000  lbu         $v0, 0x0($a1)
    ctx->pc = 0x4003c0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4003c4: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x4003c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x4003c8: 0xa0c20000  sb          $v0, 0x0($a2)
    ctx->pc = 0x4003c8u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x4003cc: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x4003ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x4003d0: 0x90a20000  lbu         $v0, 0x0($a1)
    ctx->pc = 0x4003d0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4003d4: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x4003d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x4003d8: 0xa0c20000  sb          $v0, 0x0($a2)
    ctx->pc = 0x4003d8u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x4003dc: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x4003dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x4003e0: 0x90a20000  lbu         $v0, 0x0($a1)
    ctx->pc = 0x4003e0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4003e4: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x4003e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x4003e8: 0xa0c20000  sb          $v0, 0x0($a2)
    ctx->pc = 0x4003e8u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x4003ec: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x4003ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x4003f0: 0x90a20000  lbu         $v0, 0x0($a1)
    ctx->pc = 0x4003f0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4003f4: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x4003f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x4003f8: 0x1a21023  subu        $v0, $t5, $v0
    ctx->pc = 0x4003f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 13), GPR_U32(ctx, 2)));
    // 0x4003fc: 0xa0c20000  sb          $v0, 0x0($a2)
    ctx->pc = 0x4003fcu;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x400400: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x400400u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x400404: 0x90a20000  lbu         $v0, 0x0($a1)
    ctx->pc = 0x400404u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x400408: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x400408u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x40040c: 0x1a21023  subu        $v0, $t5, $v0
    ctx->pc = 0x40040cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 13), GPR_U32(ctx, 2)));
    // 0x400410: 0xa0c20000  sb          $v0, 0x0($a2)
    ctx->pc = 0x400410u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x400414: 0x15c0ffca  bnez        $t6, . + 4 + (-0x36 << 2)
    ctx->pc = 0x400414u;
    {
        const bool branch_taken_0x400414 = (GPR_U64(ctx, 14) != GPR_U64(ctx, 0));
        ctx->pc = 0x400418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x400414u;
        // 0x400418: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x400414) {
            ctx->pc = 0x400340u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_400340;
        }
    }
    ctx->pc = 0x40041Cu;
    // 0x40041c: 0x3e00008  jr          $ra
    ctx->pc = 0x40041Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x40041Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x400424u;
label_400424:
    // 0x400424: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x400424u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x400428: 0x1462ffac  bne         $v1, $v0, . + 4 + (-0x54 << 2)
    ctx->pc = 0x400428u;
    {
        const bool branch_taken_0x400428 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x40042Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x400428u;
        // 0x40042c: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x400428) {
            ctx->pc = 0x4002DCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4002dc;
        }
    }
    ctx->pc = 0x400430u;
    // 0x400430: 0x90830011  lbu         $v1, 0x11($a0)
    ctx->pc = 0x400430u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 17)));
    // 0x400434: 0x5462004b  bnel        $v1, $v0, . + 4 + (0x4B << 2)
    ctx->pc = 0x400434u;
    {
        const bool branch_taken_0x400434 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x400434) {
            ctx->pc = 0x400438u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x400434u;
            // 0x400438: 0xdc840000  ld          $a0, 0x0($a0) (Delay Slot)
            SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 4), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x400564u;
            goto label_400564;
        }
    }
    ctx->pc = 0x40043Cu;
    // 0x40043c: 0xdc890000  ld          $t1, 0x0($a0)
    ctx->pc = 0x40043cu;
    SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x400440: 0x1120ffa6  beqz        $t1, . + 4 + (-0x5A << 2)
    ctx->pc = 0x400440u;
    {
        const bool branch_taken_0x400440 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        ctx->pc = 0x400444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x400440u;
        // 0x400444: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x400440) {
            ctx->pc = 0x4002DCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4002dc;
        }
    }
    ctx->pc = 0x400448u;
    // 0x400448: 0x240800ff  addiu       $t0, $zero, 0xFF
    ctx->pc = 0x400448u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x40044c: 0x140282d  daddu       $a1, $t2, $zero
    ctx->pc = 0x40044cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x400450: 0x140182d  daddu       $v1, $t2, $zero
    ctx->pc = 0x400450u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x400454: 0x19200018  blez        $t1, . + 4 + (0x18 << 2)
    ctx->pc = 0x400454u;
    {
        const bool branch_taken_0x400454 = (GPR_S32(ctx, 9) <= 0);
        ctx->pc = 0x400458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x400454u;
        // 0x400458: 0x31240003  andi        $a0, $t1, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        if (branch_taken_0x400454) {
            ctx->pc = 0x4004B8u;
            goto label_4004b8;
        }
    }
    ctx->pc = 0x40045Cu;
    // 0x40045c: 0x10800022  beqz        $a0, . + 4 + (0x22 << 2)
    ctx->pc = 0x40045Cu;
    {
        const bool branch_taken_0x40045c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x400460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40045Cu;
        // 0x400460: 0x28820002  slti        $v0, $a0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x40045c) {
            ctx->pc = 0x4004E8u;
            goto label_4004e8;
        }
    }
    ctx->pc = 0x400464u;
    // 0x400464: 0x54400015  bnel        $v0, $zero, . + 4 + (0x15 << 2)
    ctx->pc = 0x400464u;
    {
        const bool branch_taken_0x400464 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x400464) {
            ctx->pc = 0x400468u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x400464u;
            // 0x400468: 0x90620000  lbu         $v0, 0x0($v1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4004BCu;
            goto label_4004bc;
        }
    }
    ctx->pc = 0x40046Cu;
    // 0x40046c: 0x28820003  slti        $v0, $a0, 0x3
    ctx->pc = 0x40046cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x400470: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x400470u;
    {
        const bool branch_taken_0x400470 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x400470) {
            ctx->pc = 0x400474u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x400470u;
            // 0x400474: 0x90620000  lbu         $v0, 0x0($v1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x400494u;
            goto label_400494;
        }
    }
    ctx->pc = 0x400478u;
    // 0x400478: 0x91420001  lbu         $v0, 0x1($t2)
    ctx->pc = 0x400478u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 10), 1)));
    // 0x40047c: 0x25430002  addiu       $v1, $t2, 0x2
    ctx->pc = 0x40047cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 10), 2));
    // 0x400480: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x400480u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x400484: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x400484u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x400488: 0x1021023  subu        $v0, $t0, $v0
    ctx->pc = 0x400488u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x40048c: 0xa1420001  sb          $v0, 0x1($t2)
    ctx->pc = 0x40048cu;
    WRITE8(ADD32(GPR_U32(ctx, 10), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x400490: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x400490u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_400494:
    // 0x400494: 0x64c60001  daddiu      $a2, $a2, 0x1
    ctx->pc = 0x400494u;
    SET_GPR_S64(ctx, 6, (int64_t)GPR_S64(ctx, 6) + (int64_t)(int32_t)1);
    // 0x400498: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x400498u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x40049c: 0xa0a20000  sb          $v0, 0x0($a1)
    ctx->pc = 0x40049cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x4004a0: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x4004a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x4004a4: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x4004a4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x4004a8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x4004a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x4004ac: 0x1021023  subu        $v0, $t0, $v0
    ctx->pc = 0x4004acu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x4004b0: 0xa0a20000  sb          $v0, 0x0($a1)
    ctx->pc = 0x4004b0u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x4004b4: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x4004b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_4004b8:
    // 0x4004b8: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x4004b8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_4004bc:
    // 0x4004bc: 0x64c60001  daddiu      $a2, $a2, 0x1
    ctx->pc = 0x4004bcu;
    SET_GPR_S64(ctx, 6, (int64_t)GPR_S64(ctx, 6) + (int64_t)(int32_t)1);
    // 0x4004c0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x4004c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x4004c4: 0xc9382b  sltu        $a3, $a2, $t1
    ctx->pc = 0x4004c4u;
    SET_GPR_U64(ctx, 7, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x4004c8: 0xa0a20000  sb          $v0, 0x0($a1)
    ctx->pc = 0x4004c8u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x4004cc: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x4004ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x4004d0: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x4004d0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x4004d4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x4004d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x4004d8: 0x1021023  subu        $v0, $t0, $v0
    ctx->pc = 0x4004d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x4004dc: 0xa0a20000  sb          $v0, 0x0($a1)
    ctx->pc = 0x4004dcu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x4004e0: 0x10e0ff7e  beqz        $a3, . + 4 + (-0x82 << 2)
    ctx->pc = 0x4004E0u;
    {
        const bool branch_taken_0x4004e0 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x4004E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4004E0u;
        // 0x4004e4: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4004e0) {
            ctx->pc = 0x4002DCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4002dc;
        }
    }
    ctx->pc = 0x4004E8u;
label_4004e8:
    // 0x4004e8: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x4004e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4004ec: 0x0  nop
    ctx->pc = 0x4004ecu;
    // NOP
label_4004f0:
    // 0x4004f0: 0x90830000  lbu         $v1, 0x0($a0)
    ctx->pc = 0x4004f0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4004f4: 0x64c60004  daddiu      $a2, $a2, 0x4
    ctx->pc = 0x4004f4u;
    SET_GPR_S64(ctx, 6, (int64_t)GPR_S64(ctx, 6) + (int64_t)(int32_t)4);
    // 0x4004f8: 0xc9382b  sltu        $a3, $a2, $t1
    ctx->pc = 0x4004f8u;
    SET_GPR_U64(ctx, 7, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x4004fc: 0xa0a30000  sb          $v1, 0x0($a1)
    ctx->pc = 0x4004fcu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x400500: 0x90820001  lbu         $v0, 0x1($a0)
    ctx->pc = 0x400500u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1)));
    // 0x400504: 0x1021023  subu        $v0, $t0, $v0
    ctx->pc = 0x400504u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x400508: 0xa0a20001  sb          $v0, 0x1($a1)
    ctx->pc = 0x400508u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x40050c: 0x90830002  lbu         $v1, 0x2($a0)
    ctx->pc = 0x40050cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x400510: 0xa0a30002  sb          $v1, 0x2($a1)
    ctx->pc = 0x400510u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x400514: 0x90820003  lbu         $v0, 0x3($a0)
    ctx->pc = 0x400514u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 3)));
    // 0x400518: 0x1021023  subu        $v0, $t0, $v0
    ctx->pc = 0x400518u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x40051c: 0xa0a20003  sb          $v0, 0x3($a1)
    ctx->pc = 0x40051cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 3), (uint8_t)GPR_U32(ctx, 2));
    // 0x400520: 0x90830004  lbu         $v1, 0x4($a0)
    ctx->pc = 0x400520u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x400524: 0xa0a30004  sb          $v1, 0x4($a1)
    ctx->pc = 0x400524u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 4), (uint8_t)GPR_U32(ctx, 3));
    // 0x400528: 0x90820005  lbu         $v0, 0x5($a0)
    ctx->pc = 0x400528u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 5)));
    // 0x40052c: 0x1021023  subu        $v0, $t0, $v0
    ctx->pc = 0x40052cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x400530: 0xa0a20005  sb          $v0, 0x5($a1)
    ctx->pc = 0x400530u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 5), (uint8_t)GPR_U32(ctx, 2));
    // 0x400534: 0x90830006  lbu         $v1, 0x6($a0)
    ctx->pc = 0x400534u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 6)));
    // 0x400538: 0x24840007  addiu       $a0, $a0, 0x7
    ctx->pc = 0x400538u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7));
    // 0x40053c: 0xa0a30006  sb          $v1, 0x6($a1)
    ctx->pc = 0x40053cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 6), (uint8_t)GPR_U32(ctx, 3));
    // 0x400540: 0x24a50007  addiu       $a1, $a1, 0x7
    ctx->pc = 0x400540u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 7));
    // 0x400544: 0x90820000  lbu         $v0, 0x0($a0)
    ctx->pc = 0x400544u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x400548: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x400548u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x40054c: 0x1021023  subu        $v0, $t0, $v0
    ctx->pc = 0x40054cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x400550: 0xa0a20000  sb          $v0, 0x0($a1)
    ctx->pc = 0x400550u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x400554: 0x14e0ffe6  bnez        $a3, . + 4 + (-0x1A << 2)
    ctx->pc = 0x400554u;
    {
        const bool branch_taken_0x400554 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x400558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x400554u;
        // 0x400558: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x400554) {
            ctx->pc = 0x4004F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4004f0;
        }
    }
    ctx->pc = 0x40055Cu;
    // 0x40055c: 0x3e00008  jr          $ra
    ctx->pc = 0x40055Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x40055Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x400564u;
label_400564:
    // 0x400564: 0x140282d  daddu       $a1, $t2, $zero
    ctx->pc = 0x400564u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x400568: 0x1080ff5c  beqz        $a0, . + 4 + (-0xA4 << 2)
    ctx->pc = 0x400568u;
    {
        const bool branch_taken_0x400568 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x40056Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x400568u;
        // 0x40056c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x400568) {
            ctx->pc = 0x4002DCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4002dc;
        }
    }
    ctx->pc = 0x400570u;
    // 0x400570: 0x240800ff  addiu       $t0, $zero, 0xFF
    ctx->pc = 0x400570u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x400574: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x400574u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x400578: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x400578u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40057c: 0x18800003  blez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x40057Cu;
    {
        const bool branch_taken_0x40057c = (GPR_S32(ctx, 4) <= 0);
        ctx->pc = 0x400580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40057Cu;
        // 0x400580: 0x30830001  andi        $v1, $a0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x40057c) {
            ctx->pc = 0x40058Cu;
            goto label_40058c;
        }
    }
    ctx->pc = 0x400584u;
    // 0x400584: 0x50600010  beql        $v1, $zero, . + 4 + (0x10 << 2)
    ctx->pc = 0x400584u;
    {
        const bool branch_taken_0x400584 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x400584) {
            ctx->pc = 0x400588u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x400584u;
            // 0x400588: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4005C8u;
            goto label_4005c8;
        }
    }
    ctx->pc = 0x40058Cu;
label_40058c:
    // 0x40058c: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x40058cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x400590: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x400590u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x400594: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x400594u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x400598: 0xe4482b  sltu        $t1, $a3, $a0
    ctx->pc = 0x400598u;
    SET_GPR_U64(ctx, 9, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x40059c: 0x90a20000  lbu         $v0, 0x0($a1)
    ctx->pc = 0x40059cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4005a0: 0x1021023  subu        $v0, $t0, $v0
    ctx->pc = 0x4005a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x4005a4: 0xa0a20000  sb          $v0, 0x0($a1)
    ctx->pc = 0x4005a4u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x4005a8: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x4005a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x4005ac: 0x90a30000  lbu         $v1, 0x0($a1)
    ctx->pc = 0x4005acu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4005b0: 0x24a20001  addiu       $v0, $a1, 0x1
    ctx->pc = 0x4005b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x4005b4: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x4005b4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4005b8: 0x1031823  subu        $v1, $t0, $v1
    ctx->pc = 0x4005b8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
    // 0x4005bc: 0x1120ff47  beqz        $t1, . + 4 + (-0xB9 << 2)
    ctx->pc = 0x4005BCu;
    {
        const bool branch_taken_0x4005bc = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        ctx->pc = 0x4005C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4005BCu;
        // 0x4005c0: 0xa0a30000  sb          $v1, 0x0($a1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4005bc) {
            ctx->pc = 0x4002DCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4002dc;
        }
    }
    ctx->pc = 0x4005C4u;
    // 0x4005c4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x4005c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4005c8:
    // 0x4005c8: 0x90a20000  lbu         $v0, 0x0($a1)
    ctx->pc = 0x4005c8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4005cc: 0x64e70002  daddiu      $a3, $a3, 0x2
    ctx->pc = 0x4005ccu;
    SET_GPR_S64(ctx, 7, (int64_t)GPR_S64(ctx, 7) + (int64_t)(int32_t)2);
    // 0x4005d0: 0xe4482b  sltu        $t1, $a3, $a0
    ctx->pc = 0x4005d0u;
    SET_GPR_U64(ctx, 9, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x4005d4: 0xa0c20000  sb          $v0, 0x0($a2)
    ctx->pc = 0x4005d4u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x4005d8: 0x90a30001  lbu         $v1, 0x1($a1)
    ctx->pc = 0x4005d8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 1)));
    // 0x4005dc: 0xa0c30001  sb          $v1, 0x1($a2)
    ctx->pc = 0x4005dcu;
    WRITE8(ADD32(GPR_U32(ctx, 6), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x4005e0: 0x90a20002  lbu         $v0, 0x2($a1)
    ctx->pc = 0x4005e0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 2)));
    // 0x4005e4: 0x1021023  subu        $v0, $t0, $v0
    ctx->pc = 0x4005e4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x4005e8: 0xa0c20002  sb          $v0, 0x2($a2)
    ctx->pc = 0x4005e8u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 2), (uint8_t)GPR_U32(ctx, 2));
    // 0x4005ec: 0x90a30003  lbu         $v1, 0x3($a1)
    ctx->pc = 0x4005ecu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 3)));
    // 0x4005f0: 0x1031823  subu        $v1, $t0, $v1
    ctx->pc = 0x4005f0u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
    // 0x4005f4: 0xa0c30003  sb          $v1, 0x3($a2)
    ctx->pc = 0x4005f4u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 3), (uint8_t)GPR_U32(ctx, 3));
    // 0x4005f8: 0x90a20004  lbu         $v0, 0x4($a1)
    ctx->pc = 0x4005f8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x4005fc: 0x24a50005  addiu       $a1, $a1, 0x5
    ctx->pc = 0x4005fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 5));
    // 0x400600: 0xa0c20004  sb          $v0, 0x4($a2)
    ctx->pc = 0x400600u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 4), (uint8_t)GPR_U32(ctx, 2));
    // 0x400604: 0x24c60005  addiu       $a2, $a2, 0x5
    ctx->pc = 0x400604u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 5));
    // 0x400608: 0x90a20000  lbu         $v0, 0x0($a1)
    ctx->pc = 0x400608u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x40060c: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x40060cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x400610: 0xa0c20000  sb          $v0, 0x0($a2)
    ctx->pc = 0x400610u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x400614: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x400614u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x400618: 0x90a20000  lbu         $v0, 0x0($a1)
    ctx->pc = 0x400618u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x40061c: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x40061cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x400620: 0x1021023  subu        $v0, $t0, $v0
    ctx->pc = 0x400620u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x400624: 0xa0c20000  sb          $v0, 0x0($a2)
    ctx->pc = 0x400624u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x400628: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x400628u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x40062c: 0x90a20000  lbu         $v0, 0x0($a1)
    ctx->pc = 0x40062cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x400630: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x400630u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x400634: 0x1021023  subu        $v0, $t0, $v0
    ctx->pc = 0x400634u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x400638: 0xa0c20000  sb          $v0, 0x0($a2)
    ctx->pc = 0x400638u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x40063c: 0x1520ffe2  bnez        $t1, . + 4 + (-0x1E << 2)
    ctx->pc = 0x40063Cu;
    {
        const bool branch_taken_0x40063c = (GPR_U64(ctx, 9) != GPR_U64(ctx, 0));
        ctx->pc = 0x400640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40063Cu;
        // 0x400640: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40063c) {
            ctx->pc = 0x4005C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4005c8;
        }
    }
    ctx->pc = 0x400644u;
    // 0x400644: 0x3e00008  jr          $ra
    ctx->pc = 0x400644u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x400644u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x40064Cu;
    // 0x40064c: 0x0  nop
    ctx->pc = 0x40064cu;
    // NOP
    ctx->pc = 0x400650u;
}
