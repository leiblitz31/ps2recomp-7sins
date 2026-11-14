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

// Function: sub_002D4C70
// Address: 0x2d4c70 - 0x2d4df0
void sub_002D4C70_0x2d4c70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D4C70_0x2d4c70");
#endif

    switch (ctx->pc) {
        case 0x2d4c98u: goto label_2d4c98;
        case 0x2d4cd4u: goto label_2d4cd4;
        case 0x2d4cf0u: goto label_2d4cf0;
        case 0x2d4d24u: goto label_2d4d24;
        case 0x2d4d80u: goto label_2d4d80;
        case 0x2d4d90u: goto label_2d4d90;
        case 0x2d4dbcu: goto label_2d4dbc;
        case 0x2d4dc8u: goto label_2d4dc8;
        default: break;
    }

    ctx->pc = 0x2d4c70u;

    // 0x2d4c70: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x2d4c70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x2d4c74: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2d4c74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2d4c78: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2d4c78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2d4c7c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2d4c7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2d4c80: 0xafa40050  sw          $a0, 0x50($sp)
    ctx->pc = 0x2d4c80u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 4));
    // 0x2d4c84: 0xafa50060  sw          $a1, 0x60($sp)
    ctx->pc = 0x2d4c84u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 5));
    // 0x2d4c88: 0xafa60070  sw          $a2, 0x70($sp)
    ctx->pc = 0x2d4c88u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 6));
    // 0x2d4c8c: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x2d4c8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2d4c90: 0xc082ab4  jal         func_20AAD0
    ctx->pc = 0x2D4C90u;
    SET_GPR_U32(ctx, 31, 0x2D4C98u);
    ctx->pc = 0x20AAD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20AAD0u, 0x2D4C90u, 0x2D4C98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D4C98u;
label_2d4c98:
    // 0x2d4c98: 0x8fa30060  lw          $v1, 0x60($sp)
    ctx->pc = 0x2d4c98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2d4c9c: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x2d4c9cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2d4ca0: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x2d4ca0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x2d4ca4: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x2d4ca4u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x2d4ca8: 0x8012  mflo        $s0
    ctx->pc = 0x2d4ca8u;
    SET_GPR_U64(ctx, 16, ctx->lo);
    // 0x2d4cac: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x2d4cacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2d4cb0: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x2d4cb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2d4cb4: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x2d4cb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2d4cb8: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x2d4cb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x2d4cbc: 0x10620036  beq         $v1, $v0, . + 4 + (0x36 << 2)
    ctx->pc = 0x2D4CBCu;
    {
        const bool branch_taken_0x2d4cbc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2d4cbc) {
            ctx->pc = 0x2D4D98u;
            goto label_2d4d98;
        }
    }
    ctx->pc = 0x2D4CC4u;
    // 0x2d4cc4: 0x8fb10060  lw          $s1, 0x60($sp)
    ctx->pc = 0x2d4cc4u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2d4cc8: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x2d4cc8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2d4ccc: 0xc082b68  jal         func_20ADA0
    ctx->pc = 0x2D4CCCu;
    SET_GPR_U32(ctx, 31, 0x2D4CD4u);
    ctx->pc = 0x20ADA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20ADA0u, 0x2D4CCCu, 0x2D4CD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D4CD4u;
label_2d4cd4:
    // 0x2d4cd4: 0x1622000c  bne         $s1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x2D4CD4u;
    {
        const bool branch_taken_0x2d4cd4 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x2d4cd4) {
            ctx->pc = 0x2D4D08u;
            goto label_2d4d08;
        }
    }
    ctx->pc = 0x2D4CDCu;
    // 0x2d4cdc: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x2d4cdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2d4ce0: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x2d4ce0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2d4ce4: 0x8fa50070  lw          $a1, 0x70($sp)
    ctx->pc = 0x2d4ce4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2d4ce8: 0xc08418c  jal         func_210630
    ctx->pc = 0x2D4CE8u;
    SET_GPR_U32(ctx, 31, 0x2D4CF0u);
    ctx->pc = 0x210630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x210630u, 0x2D4CE8u, 0x2D4CF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D4CF0u;
label_2d4cf0:
    // 0x2d4cf0: 0x8fa30050  lw          $v1, 0x50($sp)
    ctx->pc = 0x2d4cf0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2d4cf4: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x2d4cf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x2d4cf8: 0x2442000c  addiu       $v0, $v0, 0xC
    ctx->pc = 0x2d4cf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
    // 0x2d4cfc: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x2d4cfcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    // 0x2d4d00: 0x1000002e  b           . + 4 + (0x2E << 2)
    ctx->pc = 0x2D4D00u;
    {
        const bool branch_taken_0x2d4d00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d4d00) {
            ctx->pc = 0x2D4DBCu;
            goto label_2d4dbc;
        }
    }
    ctx->pc = 0x2D4D08u;
label_2d4d08:
    // 0x2d4d08: 0x8fa30050  lw          $v1, 0x50($sp)
    ctx->pc = 0x2d4d08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2d4d0c: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x2d4d0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2d4d10: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x2d4d10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2d4d14: 0x8c640004  lw          $a0, 0x4($v1)
    ctx->pc = 0x2d4d14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x2d4d18: 0x2445fff4  addiu       $a1, $v0, -0xC
    ctx->pc = 0x2d4d18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967284));
    // 0x2d4d1c: 0xc08418c  jal         func_210630
    ctx->pc = 0x2D4D1Cu;
    SET_GPR_U32(ctx, 31, 0x2D4D24u);
    ctx->pc = 0x210630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x210630u, 0x2D4D1Cu, 0x2D4D24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D4D24u;
label_2d4d24:
    // 0x2d4d24: 0x8fa30050  lw          $v1, 0x50($sp)
    ctx->pc = 0x2d4d24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2d4d28: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x2d4d28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x2d4d2c: 0x2442000c  addiu       $v0, $v0, 0xC
    ctx->pc = 0x2d4d2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
    // 0x2d4d30: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x2d4d30u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    // 0x2d4d34: 0x8fa30070  lw          $v1, 0x70($sp)
    ctx->pc = 0x2d4d34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2d4d38: 0x27a20038  addiu       $v0, $sp, 0x38
    ctx->pc = 0x2d4d38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 56));
    // 0x2d4d3c: 0xc4620000  lwc1        $f2, 0x0($v1)
    ctx->pc = 0x2d4d3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2d4d40: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x2d4d40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d4d44: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x2d4d44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d4d48: 0xe4420000  swc1        $f2, 0x0($v0)
    ctx->pc = 0x2d4d48u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x2d4d4c: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x2d4d4cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x2d4d50: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x2d4d50u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x2d4d54: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x2d4d54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2d4d58: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x2d4d58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2d4d5c: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x2d4d5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2d4d60: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x2d4d60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2d4d64: 0xa3a0004c  sb          $zero, 0x4C($sp)
    ctx->pc = 0x2d4d64u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 76), (uint8_t)GPR_U32(ctx, 0));
    // 0x2d4d68: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x2d4d68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2d4d6c: 0x2465ffe8  addiu       $a1, $v1, -0x18
    ctx->pc = 0x2d4d6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967272));
    // 0x2d4d70: 0x2446fff4  addiu       $a2, $v0, -0xC
    ctx->pc = 0x2d4d70u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967284));
    // 0x2d4d74: 0x27a7004c  addiu       $a3, $sp, 0x4C
    ctx->pc = 0x2d4d74u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 76));
    // 0x2d4d78: 0xc0841d0  jal         func_210740
    ctx->pc = 0x2D4D78u;
    SET_GPR_U32(ctx, 31, 0x2D4D80u);
    ctx->pc = 0x210740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x210740u, 0x2D4D78u, 0x2D4D80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D4D80u;
label_2d4d80:
    // 0x2d4d80: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x2d4d80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2d4d84: 0x27a50038  addiu       $a1, $sp, 0x38
    ctx->pc = 0x2d4d84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 56));
    // 0x2d4d88: 0xc041d58  jal         func_107560
    ctx->pc = 0x2D4D88u;
    SET_GPR_U32(ctx, 31, 0x2D4D90u);
    ctx->pc = 0x107560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x107560u, 0x2D4D88u, 0x2D4D90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D4D90u;
label_2d4d90:
    // 0x2d4d90: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x2D4D90u;
    {
        const bool branch_taken_0x2d4d90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d4d90) {
            ctx->pc = 0x2D4DBCu;
            goto label_2d4dbc;
        }
    }
    ctx->pc = 0x2D4D98u;
label_2d4d98:
    // 0x2d4d98: 0xa3a00048  sb          $zero, 0x48($sp)
    ctx->pc = 0x2d4d98u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 72), (uint8_t)GPR_U32(ctx, 0));
    // 0x2d4d9c: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x2d4d9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2d4da0: 0x8fa50060  lw          $a1, 0x60($sp)
    ctx->pc = 0x2d4da0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2d4da4: 0x8fa60070  lw          $a2, 0x70($sp)
    ctx->pc = 0x2d4da4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2d4da8: 0x27a70048  addiu       $a3, $sp, 0x48
    ctx->pc = 0x2d4da8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
    // 0x2d4dac: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x2d4dacu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d4db0: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2d4db0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d4db4: 0xc0840e4  jal         func_210390
    ctx->pc = 0x2D4DB4u;
    SET_GPR_U32(ctx, 31, 0x2D4DBCu);
    ctx->pc = 0x210390u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x210390u, 0x2D4DB4u, 0x2D4DBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D4DBCu;
label_2d4dbc:
    // 0x2d4dbc: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x2d4dbcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2d4dc0: 0xc082ab4  jal         func_20AAD0
    ctx->pc = 0x2D4DC0u;
    SET_GPR_U32(ctx, 31, 0x2D4DC8u);
    ctx->pc = 0x20AAD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20AAD0u, 0x2D4DC0u, 0x2D4DC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D4DC8u;
label_2d4dc8:
    // 0x2d4dc8: 0x101840  sll         $v1, $s0, 1
    ctx->pc = 0x2d4dc8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x2d4dcc: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x2d4dccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x2d4dd0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2d4dd0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2d4dd4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2d4dd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2d4dd8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2d4dd8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2d4ddc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2d4ddcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d4de0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2d4de0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d4de4: 0x27bd0080  addiu       $sp, $sp, 0x80
    ctx->pc = 0x2d4de4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x2d4de8: 0x3e00008  jr          $ra
    ctx->pc = 0x2D4DE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D4DE8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D4DF0u;
}
