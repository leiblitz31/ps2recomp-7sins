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

// Function: sub_00129700
// Address: 0x129700 - 0x1298c0
void sub_00129700_0x129700(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00129700_0x129700");
#endif

    ctx->pc = 0x129700u;

    // 0x129700: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x129700u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x129704: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x129704u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x129708: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x129708u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12970c: 0x10600067  beqz        $v1, . + 4 + (0x67 << 2)
    ctx->pc = 0x12970Cu;
    {
        const bool branch_taken_0x12970c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x12970c) {
            ctx->pc = 0x1298ACu;
            goto label_1298ac;
        }
    }
    ctx->pc = 0x129714u;
    // 0x129714: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x129714u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x129718: 0x90630001  lbu         $v1, 0x1($v1)
    ctx->pc = 0x129718u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 1)));
    // 0x12971c: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x12971cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x129720: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x129720u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x129724: 0x83001a  div         $zero, $a0, $v1
    ctx->pc = 0x129724u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 4);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x129728: 0x2810  mfhi        $a1
    ctx->pc = 0x129728u;
    SET_GPR_U64(ctx, 5, ctx->hi);
    // 0x12972c: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x12972cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x129730: 0x90630001  lbu         $v1, 0x1($v1)
    ctx->pc = 0x129730u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 1)));
    // 0x129734: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x129734u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x129738: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x129738u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x12973c: 0x83001a  div         $zero, $a0, $v1
    ctx->pc = 0x12973cu;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 4);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x129740: 0x1812  mflo        $v1
    ctx->pc = 0x129740u;
    SET_GPR_U64(ctx, 3, ctx->lo);
    // 0x129744: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x129744u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x129748: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x129748u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x12974c: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x12974cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x129750: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x129750u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x129754: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x129754u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x129758: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x129758u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12975c: 0x90630002  lbu         $v1, 0x2($v1)
    ctx->pc = 0x12975cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x129760: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x129760u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x129764: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x129764u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x129768: 0x83001a  div         $zero, $a0, $v1
    ctx->pc = 0x129768u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 4);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x12976c: 0x2810  mfhi        $a1
    ctx->pc = 0x12976cu;
    SET_GPR_U64(ctx, 5, ctx->hi);
    // 0x129770: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x129770u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x129774: 0x90630002  lbu         $v1, 0x2($v1)
    ctx->pc = 0x129774u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x129778: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x129778u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x12977c: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x12977cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x129780: 0x83001a  div         $zero, $a0, $v1
    ctx->pc = 0x129780u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 4);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x129784: 0x1812  mflo        $v1
    ctx->pc = 0x129784u;
    SET_GPR_U64(ctx, 3, ctx->lo);
    // 0x129788: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x129788u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x12978c: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x12978cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x129790: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x129790u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x129794: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x129794u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x129798: 0xa0640002  sb          $a0, 0x2($v1)
    ctx->pc = 0x129798u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 4));
    // 0x12979c: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x12979cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1297a0: 0x90630003  lbu         $v1, 0x3($v1)
    ctx->pc = 0x1297a0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 3)));
    // 0x1297a4: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x1297a4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1297a8: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x1297a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1297ac: 0x83001a  div         $zero, $a0, $v1
    ctx->pc = 0x1297acu;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 4);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1297b0: 0x2810  mfhi        $a1
    ctx->pc = 0x1297b0u;
    SET_GPR_U64(ctx, 5, ctx->hi);
    // 0x1297b4: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x1297b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1297b8: 0x90630003  lbu         $v1, 0x3($v1)
    ctx->pc = 0x1297b8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 3)));
    // 0x1297bc: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x1297bcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1297c0: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x1297c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1297c4: 0x83001a  div         $zero, $a0, $v1
    ctx->pc = 0x1297c4u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 4);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1297c8: 0x1812  mflo        $v1
    ctx->pc = 0x1297c8u;
    SET_GPR_U64(ctx, 3, ctx->lo);
    // 0x1297cc: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x1297ccu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1297d0: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x1297d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x1297d4: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x1297d4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1297d8: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x1297d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1297dc: 0xa0640003  sb          $a0, 0x3($v1)
    ctx->pc = 0x1297dcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 4));
    // 0x1297e0: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x1297e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1297e4: 0x90630005  lbu         $v1, 0x5($v1)
    ctx->pc = 0x1297e4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 5)));
    // 0x1297e8: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x1297e8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1297ec: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x1297ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1297f0: 0x83001a  div         $zero, $a0, $v1
    ctx->pc = 0x1297f0u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 4);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1297f4: 0x2810  mfhi        $a1
    ctx->pc = 0x1297f4u;
    SET_GPR_U64(ctx, 5, ctx->hi);
    // 0x1297f8: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x1297f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1297fc: 0x90630005  lbu         $v1, 0x5($v1)
    ctx->pc = 0x1297fcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 5)));
    // 0x129800: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x129800u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x129804: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x129804u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x129808: 0x83001a  div         $zero, $a0, $v1
    ctx->pc = 0x129808u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 4);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x12980c: 0x1812  mflo        $v1
    ctx->pc = 0x12980cu;
    SET_GPR_U64(ctx, 3, ctx->lo);
    // 0x129810: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x129810u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x129814: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x129814u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x129818: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x129818u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x12981c: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x12981cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x129820: 0xa0640005  sb          $a0, 0x5($v1)
    ctx->pc = 0x129820u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 5), (uint8_t)GPR_U32(ctx, 4));
    // 0x129824: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x129824u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x129828: 0x90630006  lbu         $v1, 0x6($v1)
    ctx->pc = 0x129828u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 6)));
    // 0x12982c: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x12982cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x129830: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x129830u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x129834: 0x83001a  div         $zero, $a0, $v1
    ctx->pc = 0x129834u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 4);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x129838: 0x2810  mfhi        $a1
    ctx->pc = 0x129838u;
    SET_GPR_U64(ctx, 5, ctx->hi);
    // 0x12983c: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x12983cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x129840: 0x90630006  lbu         $v1, 0x6($v1)
    ctx->pc = 0x129840u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 6)));
    // 0x129844: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x129844u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x129848: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x129848u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x12984c: 0x83001a  div         $zero, $a0, $v1
    ctx->pc = 0x12984cu;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 4);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x129850: 0x1812  mflo        $v1
    ctx->pc = 0x129850u;
    SET_GPR_U64(ctx, 3, ctx->lo);
    // 0x129854: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x129854u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x129858: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x129858u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x12985c: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x12985cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x129860: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x129860u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x129864: 0xa0640006  sb          $a0, 0x6($v1)
    ctx->pc = 0x129864u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 6), (uint8_t)GPR_U32(ctx, 4));
    // 0x129868: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x129868u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12986c: 0x90630007  lbu         $v1, 0x7($v1)
    ctx->pc = 0x12986cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 7)));
    // 0x129870: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x129870u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x129874: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x129874u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x129878: 0x83001a  div         $zero, $a0, $v1
    ctx->pc = 0x129878u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 4);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x12987c: 0x2810  mfhi        $a1
    ctx->pc = 0x12987cu;
    SET_GPR_U64(ctx, 5, ctx->hi);
    // 0x129880: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x129880u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x129884: 0x90630007  lbu         $v1, 0x7($v1)
    ctx->pc = 0x129884u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 7)));
    // 0x129888: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x129888u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x12988c: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x12988cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x129890: 0x83001a  div         $zero, $a0, $v1
    ctx->pc = 0x129890u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 4);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x129894: 0x1812  mflo        $v1
    ctx->pc = 0x129894u;
    SET_GPR_U64(ctx, 3, ctx->lo);
    // 0x129898: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x129898u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x12989c: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x12989cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x1298a0: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x1298a0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1298a4: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x1298a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1298a8: 0xa0640007  sb          $a0, 0x7($v1)
    ctx->pc = 0x1298a8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 7), (uint8_t)GPR_U32(ctx, 4));
label_1298ac:
    // 0x1298ac: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x1298acu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1298b0: 0x3e00008  jr          $ra
    ctx->pc = 0x1298B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1298B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1298B8u;
    // 0x1298b8: 0x0  nop
    ctx->pc = 0x1298b8u;
    // NOP
    // 0x1298bc: 0x0  nop
    ctx->pc = 0x1298bcu;
    // NOP
    ctx->pc = 0x1298c0u;
}
