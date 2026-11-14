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

// Function: sub_0028E110
// Address: 0x28e110 - 0x28e340
void sub_0028E110_0x28e110(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0028E110_0x28e110");
#endif

    switch (ctx->pc) {
        case 0x28e17cu: goto label_28e17c;
        case 0x28e1ecu: goto label_28e1ec;
        case 0x28e238u: goto label_28e238;
        case 0x28e260u: goto label_28e260;
        case 0x28e284u: goto label_28e284;
        case 0x28e2c8u: goto label_28e2c8;
        case 0x28e2f8u: goto label_28e2f8;
        case 0x28e324u: goto label_28e324;
        default: break;
    }

    ctx->pc = 0x28e110u;

    // 0x28e110: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x28e110u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x28e114: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x28e114u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x28e118: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x28e118u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x28e11c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x28e11cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x28e120: 0xafa40060  sw          $a0, 0x60($sp)
    ctx->pc = 0x28e120u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 4));
    // 0x28e124: 0xafa50070  sw          $a1, 0x70($sp)
    ctx->pc = 0x28e124u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 5));
    // 0x28e128: 0xafa60080  sw          $a2, 0x80($sp)
    ctx->pc = 0x28e128u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 6));
    // 0x28e12c: 0xafa70090  sw          $a3, 0x90($sp)
    ctx->pc = 0x28e12cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 7));
    // 0x28e130: 0x8fa30080  lw          $v1, 0x80($sp)
    ctx->pc = 0x28e130u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x28e134: 0x1060007b  beqz        $v1, . + 4 + (0x7B << 2)
    ctx->pc = 0x28E134u;
    {
        const bool branch_taken_0x28e134 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x28e134) {
            ctx->pc = 0x28E324u;
            goto label_28e324;
        }
    }
    ctx->pc = 0x28E13Cu;
    // 0x28e13c: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x28e13cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x28e140: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x28e140u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x28e144: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x28e144u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x28e148: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x28e148u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x28e14c: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x28e14cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x28e150: 0x24020018  addiu       $v0, $zero, 0x18
    ctx->pc = 0x28e150u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x28e154: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x28e154u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x28e158: 0x1812  mflo        $v1
    ctx->pc = 0x28e158u;
    SET_GPR_U64(ctx, 3, ctx->lo);
    // 0x28e15c: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x28e15cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x28e160: 0x62102b  sltu        $v0, $v1, $v0
    ctx->pc = 0x28e160u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x28e164: 0x14400066  bnez        $v0, . + 4 + (0x66 << 2)
    ctx->pc = 0x28E164u;
    {
        const bool branch_taken_0x28e164 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x28e164) {
            ctx->pc = 0x28E300u;
            goto label_28e300;
        }
    }
    ctx->pc = 0x28E16Cu;
    // 0x28e16c: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x28e16cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x28e170: 0x8fa50090  lw          $a1, 0x90($sp)
    ctx->pc = 0x28e170u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x28e174: 0xc0a3a08  jal         func_28E820
    ctx->pc = 0x28E174u;
    SET_GPR_U32(ctx, 31, 0x28E17Cu);
    ctx->pc = 0x28E820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28E820u, 0x28E174u, 0x28E17Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28E17Cu;
label_28e17c:
    // 0x28e17c: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x28e17cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x28e180: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x28e180u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x28e184: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x28e184u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x28e188: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x28e188u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x28e18c: 0x24020018  addiu       $v0, $zero, 0x18
    ctx->pc = 0x28e18cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x28e190: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x28e190u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x28e194: 0x8812  mflo        $s1
    ctx->pc = 0x28e194u;
    SET_GPR_U64(ctx, 17, ctx->lo);
    // 0x28e198: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x28e198u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x28e19c: 0x8c500004  lw          $s0, 0x4($v0)
    ctx->pc = 0x28e19cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x28e1a0: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x28e1a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x28e1a4: 0x51082b  sltu        $at, $v0, $s1
    ctx->pc = 0x28e1a4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x28e1a8: 0x1020002f  beqz        $at, . + 4 + (0x2F << 2)
    ctx->pc = 0x28E1A8u;
    {
        const bool branch_taken_0x28e1a8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x28e1a8) {
            ctx->pc = 0x28E268u;
            goto label_28e268;
        }
    }
    ctx->pc = 0x28E1B0u;
    // 0x28e1b0: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x28e1b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x28e1b4: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x28e1b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x28e1b8: 0x8fa30080  lw          $v1, 0x80($sp)
    ctx->pc = 0x28e1b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x28e1bc: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x28e1bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x28e1c0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x28e1c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x28e1c4: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x28e1c4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x28e1c8: 0x822023  subu        $a0, $a0, $v0
    ctx->pc = 0x28e1c8u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x28e1cc: 0x8fa30060  lw          $v1, 0x60($sp)
    ctx->pc = 0x28e1ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x28e1d0: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x28e1d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x28e1d4: 0xa3a0005c  sb          $zero, 0x5C($sp)
    ctx->pc = 0x28e1d4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 92), (uint8_t)GPR_U32(ctx, 0));
    // 0x28e1d8: 0x8c650004  lw          $a1, 0x4($v1)
    ctx->pc = 0x28e1d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x28e1dc: 0x8c460004  lw          $a2, 0x4($v0)
    ctx->pc = 0x28e1dcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x28e1e0: 0x27a7005c  addiu       $a3, $sp, 0x5C
    ctx->pc = 0x28e1e0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 92));
    // 0x28e1e4: 0xc0a39e8  jal         func_28E7A0
    ctx->pc = 0x28E1E4u;
    SET_GPR_U32(ctx, 31, 0x28E1ECu);
    ctx->pc = 0x28E7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28E7A0u, 0x28E1E4u, 0x28E1ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28E1ECu;
label_28e1ec:
    // 0x28e1ec: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x28e1ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x28e1f0: 0x8fa30080  lw          $v1, 0x80($sp)
    ctx->pc = 0x28e1f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x28e1f4: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x28e1f4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x28e1f8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x28e1f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x28e1fc: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x28e1fcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x28e200: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x28e200u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x28e204: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x28e204u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x28e208: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x28e208u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
    // 0x28e20c: 0x8fa30080  lw          $v1, 0x80($sp)
    ctx->pc = 0x28e20cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x28e210: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x28e210u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x28e214: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x28e214u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x28e218: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x28e218u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x28e21c: 0x2022823  subu        $a1, $s0, $v0
    ctx->pc = 0x28e21cu;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x28e220: 0xa3a00058  sb          $zero, 0x58($sp)
    ctx->pc = 0x28e220u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 88), (uint8_t)GPR_U32(ctx, 0));
    // 0x28e224: 0x8fa40070  lw          $a0, 0x70($sp)
    ctx->pc = 0x28e224u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x28e228: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x28e228u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28e22c: 0x27a70058  addiu       $a3, $sp, 0x58
    ctx->pc = 0x28e22cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 88));
    // 0x28e230: 0xc0a39b8  jal         func_28E6E0
    ctx->pc = 0x28E230u;
    SET_GPR_U32(ctx, 31, 0x28E238u);
    ctx->pc = 0x28E6E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28E6E0u, 0x28E230u, 0x28E238u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28E238u;
label_28e238:
    // 0x28e238: 0x8fa30080  lw          $v1, 0x80($sp)
    ctx->pc = 0x28e238u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x28e23c: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x28e23cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x28e240: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x28e240u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x28e244: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x28e244u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x28e248: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x28e248u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x28e24c: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x28e24cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x28e250: 0x8fa40070  lw          $a0, 0x70($sp)
    ctx->pc = 0x28e250u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x28e254: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x28e254u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x28e258: 0xc0a39a0  jal         func_28E680
    ctx->pc = 0x28E258u;
    SET_GPR_U32(ctx, 31, 0x28E260u);
    ctx->pc = 0x28E680u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28E680u, 0x28E258u, 0x28E260u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28E260u;
label_28e260:
    // 0x28e260: 0x10000030  b           . + 4 + (0x30 << 2)
    ctx->pc = 0x28E260u;
    {
        const bool branch_taken_0x28e260 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x28e260) {
            ctx->pc = 0x28E324u;
            goto label_28e324;
        }
    }
    ctx->pc = 0x28E268u;
label_28e268:
    // 0x28e268: 0x8fa30060  lw          $v1, 0x60($sp)
    ctx->pc = 0x28e268u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x28e26c: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x28e26cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x28e270: 0x512823  subu        $a1, $v0, $s1
    ctx->pc = 0x28e270u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x28e274: 0x8c640004  lw          $a0, 0x4($v1)
    ctx->pc = 0x28e274u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x28e278: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x28e278u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x28e27c: 0xc0a3990  jal         func_28E640
    ctx->pc = 0x28E27Cu;
    SET_GPR_U32(ctx, 31, 0x28E284u);
    ctx->pc = 0x28E640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28E640u, 0x28E27Cu, 0x28E284u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28E284u;
label_28e284:
    // 0x28e284: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x28e284u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x28e288: 0x511823  subu        $v1, $v0, $s1
    ctx->pc = 0x28e288u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x28e28c: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x28e28cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x28e290: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x28e290u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x28e294: 0x220c0  sll         $a0, $v0, 3
    ctx->pc = 0x28e294u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x28e298: 0x8fa30060  lw          $v1, 0x60($sp)
    ctx->pc = 0x28e298u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x28e29c: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x28e29cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x28e2a0: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x28e2a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x28e2a4: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x28e2a4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    // 0x28e2a8: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x28e2a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x28e2ac: 0xa3a00054  sb          $zero, 0x54($sp)
    ctx->pc = 0x28e2acu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 84), (uint8_t)GPR_U32(ctx, 0));
    // 0x28e2b0: 0x8fa40070  lw          $a0, 0x70($sp)
    ctx->pc = 0x28e2b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x28e2b4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x28e2b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28e2b8: 0x8c460004  lw          $a2, 0x4($v0)
    ctx->pc = 0x28e2b8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x28e2bc: 0x27a70054  addiu       $a3, $sp, 0x54
    ctx->pc = 0x28e2bcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 84));
    // 0x28e2c0: 0xc0a39e8  jal         func_28E7A0
    ctx->pc = 0x28E2C0u;
    SET_GPR_U32(ctx, 31, 0x28E2C8u);
    ctx->pc = 0x28E7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28E7A0u, 0x28E2C0u, 0x28E2C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28E2C8u;
label_28e2c8:
    // 0x28e2c8: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x28e2c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x28e2cc: 0x111040  sll         $v0, $s1, 1
    ctx->pc = 0x28e2ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
    // 0x28e2d0: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x28e2d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x28e2d4: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x28e2d4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x28e2d8: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x28e2d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x28e2dc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x28e2dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x28e2e0: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x28e2e0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
    // 0x28e2e4: 0x8fa40070  lw          $a0, 0x70($sp)
    ctx->pc = 0x28e2e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x28e2e8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x28e2e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28e2ec: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x28e2ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x28e2f0: 0xc0a39a0  jal         func_28E680
    ctx->pc = 0x28E2F0u;
    SET_GPR_U32(ctx, 31, 0x28E2F8u);
    ctx->pc = 0x28E680u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28E680u, 0x28E2F0u, 0x28E2F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28E2F8u;
label_28e2f8:
    // 0x28e2f8: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x28E2F8u;
    {
        const bool branch_taken_0x28e2f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x28e2f8) {
            ctx->pc = 0x28E324u;
            goto label_28e324;
        }
    }
    ctx->pc = 0x28E300u;
label_28e300:
    // 0x28e300: 0xa3a00050  sb          $zero, 0x50($sp)
    ctx->pc = 0x28e300u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 80), (uint8_t)GPR_U32(ctx, 0));
    // 0x28e304: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x28e304u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x28e308: 0x8fa50070  lw          $a1, 0x70($sp)
    ctx->pc = 0x28e308u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x28e30c: 0x8fa60090  lw          $a2, 0x90($sp)
    ctx->pc = 0x28e30cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x28e310: 0x27a70050  addiu       $a3, $sp, 0x50
    ctx->pc = 0x28e310u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x28e314: 0x8fa80080  lw          $t0, 0x80($sp)
    ctx->pc = 0x28e314u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x28e318: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x28e318u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28e31c: 0xc0a38d0  jal         func_28E340
    ctx->pc = 0x28E31Cu;
    SET_GPR_U32(ctx, 31, 0x28E324u);
    ctx->pc = 0x28E340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28E340u, 0x28E31Cu, 0x28E324u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28E324u;
label_28e324:
    // 0x28e324: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x28e324u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x28e328: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x28e328u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x28e32c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x28e32cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x28e330: 0x27bd00a0  addiu       $sp, $sp, 0xA0
    ctx->pc = 0x28e330u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x28e334: 0x3e00008  jr          $ra
    ctx->pc = 0x28E334u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28E334u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28E33Cu;
    // 0x28e33c: 0x0  nop
    ctx->pc = 0x28e33cu;
    // NOP
    ctx->pc = 0x28e340u;
}
