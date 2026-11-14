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

// Function: sub_00181790
// Address: 0x181790 - 0x1819d0
void sub_00181790_0x181790(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00181790_0x181790");
#endif

    switch (ctx->pc) {
        case 0x1817fcu: goto label_1817fc;
        case 0x18186cu: goto label_18186c;
        case 0x1818b8u: goto label_1818b8;
        case 0x1818e0u: goto label_1818e0;
        case 0x181904u: goto label_181904;
        case 0x181948u: goto label_181948;
        case 0x181978u: goto label_181978;
        case 0x181988u: goto label_181988;
        case 0x1819b4u: goto label_1819b4;
        default: break;
    }

    ctx->pc = 0x181790u;

    // 0x181790: 0x27bdfef0  addiu       $sp, $sp, -0x110
    ctx->pc = 0x181790u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967024));
    // 0x181794: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x181794u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x181798: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x181798u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x18179c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x18179cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1817a0: 0xafa400d0  sw          $a0, 0xD0($sp)
    ctx->pc = 0x1817a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 4));
    // 0x1817a4: 0xafa500e0  sw          $a1, 0xE0($sp)
    ctx->pc = 0x1817a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 5));
    // 0x1817a8: 0xafa600f0  sw          $a2, 0xF0($sp)
    ctx->pc = 0x1817a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 240), GPR_U32(ctx, 6));
    // 0x1817ac: 0xafa70100  sw          $a3, 0x100($sp)
    ctx->pc = 0x1817acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 256), GPR_U32(ctx, 7));
    // 0x1817b0: 0x8fa300f0  lw          $v1, 0xF0($sp)
    ctx->pc = 0x1817b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x1817b4: 0x1060007f  beqz        $v1, . + 4 + (0x7F << 2)
    ctx->pc = 0x1817B4u;
    {
        const bool branch_taken_0x1817b4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1817b4) {
            ctx->pc = 0x1819B4u;
            goto label_1819b4;
        }
    }
    ctx->pc = 0x1817BCu;
    // 0x1817bc: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x1817bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x1817c0: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x1817c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1817c4: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x1817c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x1817c8: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x1817c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1817cc: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x1817ccu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1817d0: 0x24020090  addiu       $v0, $zero, 0x90
    ctx->pc = 0x1817d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 144));
    // 0x1817d4: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x1817d4u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1817d8: 0x1812  mflo        $v1
    ctx->pc = 0x1817d8u;
    SET_GPR_U64(ctx, 3, ctx->lo);
    // 0x1817dc: 0x8fa200f0  lw          $v0, 0xF0($sp)
    ctx->pc = 0x1817dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x1817e0: 0x62102b  sltu        $v0, $v1, $v0
    ctx->pc = 0x1817e0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1817e4: 0x1440006a  bnez        $v0, . + 4 + (0x6A << 2)
    ctx->pc = 0x1817E4u;
    {
        const bool branch_taken_0x1817e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1817e4) {
            ctx->pc = 0x181990u;
            goto label_181990;
        }
    }
    ctx->pc = 0x1817ECu;
    // 0x1817ec: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x1817ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1817f0: 0x8fa50100  lw          $a1, 0x100($sp)
    ctx->pc = 0x1817f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x1817f4: 0xc0607ac  jal         func_181EB0
    ctx->pc = 0x1817F4u;
    SET_GPR_U32(ctx, 31, 0x1817FCu);
    ctx->pc = 0x181EB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x181EB0u, 0x1817F4u, 0x1817FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1817FCu;
label_1817fc:
    // 0x1817fc: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x1817fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x181800: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x181800u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x181804: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x181804u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x181808: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x181808u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x18180c: 0x24020090  addiu       $v0, $zero, 0x90
    ctx->pc = 0x18180cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 144));
    // 0x181810: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x181810u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x181814: 0x8812  mflo        $s1
    ctx->pc = 0x181814u;
    SET_GPR_U64(ctx, 17, ctx->lo);
    // 0x181818: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x181818u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x18181c: 0x8c500004  lw          $s0, 0x4($v0)
    ctx->pc = 0x18181cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x181820: 0x8fa200f0  lw          $v0, 0xF0($sp)
    ctx->pc = 0x181820u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x181824: 0x51082b  sltu        $at, $v0, $s1
    ctx->pc = 0x181824u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x181828: 0x1020002f  beqz        $at, . + 4 + (0x2F << 2)
    ctx->pc = 0x181828u;
    {
        const bool branch_taken_0x181828 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x181828) {
            ctx->pc = 0x1818E8u;
            goto label_1818e8;
        }
    }
    ctx->pc = 0x181830u;
    // 0x181830: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x181830u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x181834: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x181834u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x181838: 0x8fa300f0  lw          $v1, 0xF0($sp)
    ctx->pc = 0x181838u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x18183c: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x18183cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x181840: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x181840u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x181844: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x181844u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x181848: 0x822023  subu        $a0, $a0, $v0
    ctx->pc = 0x181848u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x18184c: 0x8fa300d0  lw          $v1, 0xD0($sp)
    ctx->pc = 0x18184cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x181850: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x181850u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x181854: 0xa3a000cc  sb          $zero, 0xCC($sp)
    ctx->pc = 0x181854u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 204), (uint8_t)GPR_U32(ctx, 0));
    // 0x181858: 0x8c650004  lw          $a1, 0x4($v1)
    ctx->pc = 0x181858u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x18185c: 0x8c460004  lw          $a2, 0x4($v0)
    ctx->pc = 0x18185cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x181860: 0x27a700cc  addiu       $a3, $sp, 0xCC
    ctx->pc = 0x181860u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 204));
    // 0x181864: 0xc06078c  jal         func_181E30
    ctx->pc = 0x181864u;
    SET_GPR_U32(ctx, 31, 0x18186Cu);
    ctx->pc = 0x181E30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x181E30u, 0x181864u, 0x18186Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18186Cu;
label_18186c:
    // 0x18186c: 0x8fa400d0  lw          $a0, 0xD0($sp)
    ctx->pc = 0x18186cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x181870: 0x8fa300f0  lw          $v1, 0xF0($sp)
    ctx->pc = 0x181870u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x181874: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x181874u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x181878: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x181878u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x18187c: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x18187cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x181880: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x181880u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x181884: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x181884u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x181888: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x181888u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
    // 0x18188c: 0x8fa300f0  lw          $v1, 0xF0($sp)
    ctx->pc = 0x18188cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x181890: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x181890u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x181894: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x181894u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x181898: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x181898u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x18189c: 0x2022823  subu        $a1, $s0, $v0
    ctx->pc = 0x18189cu;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x1818a0: 0xa3a000c8  sb          $zero, 0xC8($sp)
    ctx->pc = 0x1818a0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 200), (uint8_t)GPR_U32(ctx, 0));
    // 0x1818a4: 0x8fa400e0  lw          $a0, 0xE0($sp)
    ctx->pc = 0x1818a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x1818a8: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1818a8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1818ac: 0x27a700c8  addiu       $a3, $sp, 0xC8
    ctx->pc = 0x1818acu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 200));
    // 0x1818b0: 0xc06075c  jal         func_181D70
    ctx->pc = 0x1818B0u;
    SET_GPR_U32(ctx, 31, 0x1818B8u);
    ctx->pc = 0x181D70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x181D70u, 0x1818B0u, 0x1818B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1818B8u;
label_1818b8:
    // 0x1818b8: 0x8fa300f0  lw          $v1, 0xF0($sp)
    ctx->pc = 0x1818b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x1818bc: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x1818bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x1818c0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1818c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1818c4: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x1818c4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1818c8: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x1818c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x1818cc: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x1818ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1818d0: 0x8fa400e0  lw          $a0, 0xE0($sp)
    ctx->pc = 0x1818d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x1818d4: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x1818d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1818d8: 0xc060744  jal         func_181D10
    ctx->pc = 0x1818D8u;
    SET_GPR_U32(ctx, 31, 0x1818E0u);
    ctx->pc = 0x181D10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x181D10u, 0x1818D8u, 0x1818E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1818E0u;
label_1818e0:
    // 0x1818e0: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x1818E0u;
    {
        const bool branch_taken_0x1818e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1818e0) {
            ctx->pc = 0x181978u;
            goto label_181978;
        }
    }
    ctx->pc = 0x1818E8u;
label_1818e8:
    // 0x1818e8: 0x8fa300d0  lw          $v1, 0xD0($sp)
    ctx->pc = 0x1818e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x1818ec: 0x8fa200f0  lw          $v0, 0xF0($sp)
    ctx->pc = 0x1818ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x1818f0: 0x512823  subu        $a1, $v0, $s1
    ctx->pc = 0x1818f0u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1818f4: 0x8c640004  lw          $a0, 0x4($v1)
    ctx->pc = 0x1818f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x1818f8: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x1818f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1818fc: 0xc060734  jal         func_181CD0
    ctx->pc = 0x1818FCu;
    SET_GPR_U32(ctx, 31, 0x181904u);
    ctx->pc = 0x181CD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x181CD0u, 0x1818FCu, 0x181904u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x181904u;
label_181904:
    // 0x181904: 0x8fa200f0  lw          $v0, 0xF0($sp)
    ctx->pc = 0x181904u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x181908: 0x511823  subu        $v1, $v0, $s1
    ctx->pc = 0x181908u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x18190c: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x18190cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x181910: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x181910u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x181914: 0x22100  sll         $a0, $v0, 4
    ctx->pc = 0x181914u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x181918: 0x8fa300d0  lw          $v1, 0xD0($sp)
    ctx->pc = 0x181918u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x18191c: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x18191cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x181920: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x181920u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x181924: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x181924u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    // 0x181928: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x181928u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x18192c: 0xa3a000c4  sb          $zero, 0xC4($sp)
    ctx->pc = 0x18192cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 196), (uint8_t)GPR_U32(ctx, 0));
    // 0x181930: 0x8fa400e0  lw          $a0, 0xE0($sp)
    ctx->pc = 0x181930u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x181934: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x181934u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x181938: 0x8c460004  lw          $a2, 0x4($v0)
    ctx->pc = 0x181938u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x18193c: 0x27a700c4  addiu       $a3, $sp, 0xC4
    ctx->pc = 0x18193cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 196));
    // 0x181940: 0xc06078c  jal         func_181E30
    ctx->pc = 0x181940u;
    SET_GPR_U32(ctx, 31, 0x181948u);
    ctx->pc = 0x181E30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x181E30u, 0x181940u, 0x181948u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x181948u;
label_181948:
    // 0x181948: 0x8fa400d0  lw          $a0, 0xD0($sp)
    ctx->pc = 0x181948u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x18194c: 0x1110c0  sll         $v0, $s1, 3
    ctx->pc = 0x18194cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 3));
    // 0x181950: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x181950u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x181954: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x181954u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x181958: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x181958u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x18195c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x18195cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x181960: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x181960u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
    // 0x181964: 0x8fa400e0  lw          $a0, 0xE0($sp)
    ctx->pc = 0x181964u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x181968: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x181968u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18196c: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x18196cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x181970: 0xc060744  jal         func_181D10
    ctx->pc = 0x181970u;
    SET_GPR_U32(ctx, 31, 0x181978u);
    ctx->pc = 0x181D10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x181D10u, 0x181970u, 0x181978u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x181978u;
label_181978:
    // 0x181978: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x181978u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x18197c: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x18197cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x181980: 0xc0842a0  jal         func_210A80
    ctx->pc = 0x181980u;
    SET_GPR_U32(ctx, 31, 0x181988u);
    ctx->pc = 0x210A80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x210A80u, 0x181980u, 0x181988u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x181988u;
label_181988:
    // 0x181988: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x181988u;
    {
        const bool branch_taken_0x181988 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x181988) {
            ctx->pc = 0x1819B4u;
            goto label_1819b4;
        }
    }
    ctx->pc = 0x181990u;
label_181990:
    // 0x181990: 0xa3a000c0  sb          $zero, 0xC0($sp)
    ctx->pc = 0x181990u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 192), (uint8_t)GPR_U32(ctx, 0));
    // 0x181994: 0x8fa400d0  lw          $a0, 0xD0($sp)
    ctx->pc = 0x181994u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x181998: 0x8fa500e0  lw          $a1, 0xE0($sp)
    ctx->pc = 0x181998u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x18199c: 0x8fa60100  lw          $a2, 0x100($sp)
    ctx->pc = 0x18199cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x1819a0: 0x27a700c0  addiu       $a3, $sp, 0xC0
    ctx->pc = 0x1819a0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x1819a4: 0x8fa800f0  lw          $t0, 0xF0($sp)
    ctx->pc = 0x1819a4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x1819a8: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1819a8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1819ac: 0xc060674  jal         func_1819D0
    ctx->pc = 0x1819ACu;
    SET_GPR_U32(ctx, 31, 0x1819B4u);
    ctx->pc = 0x1819D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1819D0u, 0x1819ACu, 0x1819B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1819B4u;
label_1819b4:
    // 0x1819b4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1819b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1819b8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1819b8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1819bc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1819bcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1819c0: 0x27bd0110  addiu       $sp, $sp, 0x110
    ctx->pc = 0x1819c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x1819c4: 0x3e00008  jr          $ra
    ctx->pc = 0x1819C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1819C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1819CCu;
    // 0x1819cc: 0x0  nop
    ctx->pc = 0x1819ccu;
    // NOP
    ctx->pc = 0x1819d0u;
}
