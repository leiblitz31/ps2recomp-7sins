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

// Function: sub_00135A40
// Address: 0x135a40 - 0x135c70
void sub_00135A40_0x135a40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00135A40_0x135a40");
#endif

    switch (ctx->pc) {
        case 0x135aacu: goto label_135aac;
        case 0x135b1cu: goto label_135b1c;
        case 0x135b68u: goto label_135b68;
        case 0x135b90u: goto label_135b90;
        case 0x135bb4u: goto label_135bb4;
        case 0x135bf8u: goto label_135bf8;
        case 0x135c28u: goto label_135c28;
        case 0x135c54u: goto label_135c54;
        default: break;
    }

    ctx->pc = 0x135a40u;

    // 0x135a40: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x135a40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x135a44: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x135a44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x135a48: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x135a48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x135a4c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x135a4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x135a50: 0xafa40070  sw          $a0, 0x70($sp)
    ctx->pc = 0x135a50u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 4));
    // 0x135a54: 0xafa50080  sw          $a1, 0x80($sp)
    ctx->pc = 0x135a54u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 5));
    // 0x135a58: 0xafa60090  sw          $a2, 0x90($sp)
    ctx->pc = 0x135a58u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 6));
    // 0x135a5c: 0xafa700a0  sw          $a3, 0xA0($sp)
    ctx->pc = 0x135a5cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 7));
    // 0x135a60: 0x8fa30090  lw          $v1, 0x90($sp)
    ctx->pc = 0x135a60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x135a64: 0x1060007b  beqz        $v1, . + 4 + (0x7B << 2)
    ctx->pc = 0x135A64u;
    {
        const bool branch_taken_0x135a64 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x135a64) {
            ctx->pc = 0x135C54u;
            goto label_135c54;
        }
    }
    ctx->pc = 0x135A6Cu;
    // 0x135a6c: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x135a6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x135a70: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x135a70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x135a74: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x135a74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x135a78: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x135a78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x135a7c: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x135a7cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x135a80: 0x24020030  addiu       $v0, $zero, 0x30
    ctx->pc = 0x135a80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x135a84: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x135a84u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x135a88: 0x1812  mflo        $v1
    ctx->pc = 0x135a88u;
    SET_GPR_U64(ctx, 3, ctx->lo);
    // 0x135a8c: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x135a8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x135a90: 0x62102b  sltu        $v0, $v1, $v0
    ctx->pc = 0x135a90u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x135a94: 0x14400066  bnez        $v0, . + 4 + (0x66 << 2)
    ctx->pc = 0x135A94u;
    {
        const bool branch_taken_0x135a94 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x135a94) {
            ctx->pc = 0x135C30u;
            goto label_135c30;
        }
    }
    ctx->pc = 0x135A9Cu;
    // 0x135a9c: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x135a9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x135aa0: 0x8fa500a0  lw          $a1, 0xA0($sp)
    ctx->pc = 0x135aa0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x135aa4: 0xc04d854  jal         func_136150
    ctx->pc = 0x135AA4u;
    SET_GPR_U32(ctx, 31, 0x135AACu);
    ctx->pc = 0x136150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136150u, 0x135AA4u, 0x135AACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x135AACu;
label_135aac:
    // 0x135aac: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x135aacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x135ab0: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x135ab0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x135ab4: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x135ab4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x135ab8: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x135ab8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x135abc: 0x24020030  addiu       $v0, $zero, 0x30
    ctx->pc = 0x135abcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x135ac0: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x135ac0u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x135ac4: 0x8812  mflo        $s1
    ctx->pc = 0x135ac4u;
    SET_GPR_U64(ctx, 17, ctx->lo);
    // 0x135ac8: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x135ac8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x135acc: 0x8c500004  lw          $s0, 0x4($v0)
    ctx->pc = 0x135accu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x135ad0: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x135ad0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x135ad4: 0x51082b  sltu        $at, $v0, $s1
    ctx->pc = 0x135ad4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x135ad8: 0x1020002f  beqz        $at, . + 4 + (0x2F << 2)
    ctx->pc = 0x135AD8u;
    {
        const bool branch_taken_0x135ad8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x135ad8) {
            ctx->pc = 0x135B98u;
            goto label_135b98;
        }
    }
    ctx->pc = 0x135AE0u;
    // 0x135ae0: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x135ae0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x135ae4: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x135ae4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x135ae8: 0x8fa30090  lw          $v1, 0x90($sp)
    ctx->pc = 0x135ae8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x135aec: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x135aecu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x135af0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x135af0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x135af4: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x135af4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x135af8: 0x822023  subu        $a0, $a0, $v0
    ctx->pc = 0x135af8u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x135afc: 0x8fa30070  lw          $v1, 0x70($sp)
    ctx->pc = 0x135afcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x135b00: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x135b00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x135b04: 0xa3a0006c  sb          $zero, 0x6C($sp)
    ctx->pc = 0x135b04u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 108), (uint8_t)GPR_U32(ctx, 0));
    // 0x135b08: 0x8c650004  lw          $a1, 0x4($v1)
    ctx->pc = 0x135b08u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x135b0c: 0x8c460004  lw          $a2, 0x4($v0)
    ctx->pc = 0x135b0cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x135b10: 0x27a7006c  addiu       $a3, $sp, 0x6C
    ctx->pc = 0x135b10u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 108));
    // 0x135b14: 0xc04d834  jal         func_1360D0
    ctx->pc = 0x135B14u;
    SET_GPR_U32(ctx, 31, 0x135B1Cu);
    ctx->pc = 0x1360D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1360D0u, 0x135B14u, 0x135B1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x135B1Cu;
label_135b1c:
    // 0x135b1c: 0x8fa40070  lw          $a0, 0x70($sp)
    ctx->pc = 0x135b1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x135b20: 0x8fa30090  lw          $v1, 0x90($sp)
    ctx->pc = 0x135b20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x135b24: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x135b24u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x135b28: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x135b28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x135b2c: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x135b2cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x135b30: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x135b30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x135b34: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x135b34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x135b38: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x135b38u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
    // 0x135b3c: 0x8fa30090  lw          $v1, 0x90($sp)
    ctx->pc = 0x135b3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x135b40: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x135b40u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x135b44: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x135b44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x135b48: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x135b48u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x135b4c: 0x2022823  subu        $a1, $s0, $v0
    ctx->pc = 0x135b4cu;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x135b50: 0xa3a00068  sb          $zero, 0x68($sp)
    ctx->pc = 0x135b50u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 104), (uint8_t)GPR_U32(ctx, 0));
    // 0x135b54: 0x8fa40080  lw          $a0, 0x80($sp)
    ctx->pc = 0x135b54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x135b58: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x135b58u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x135b5c: 0x27a70068  addiu       $a3, $sp, 0x68
    ctx->pc = 0x135b5cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 104));
    // 0x135b60: 0xc04d804  jal         func_136010
    ctx->pc = 0x135B60u;
    SET_GPR_U32(ctx, 31, 0x135B68u);
    ctx->pc = 0x136010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136010u, 0x135B60u, 0x135B68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x135B68u;
label_135b68:
    // 0x135b68: 0x8fa30090  lw          $v1, 0x90($sp)
    ctx->pc = 0x135b68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x135b6c: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x135b6cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x135b70: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x135b70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x135b74: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x135b74u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x135b78: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x135b78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x135b7c: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x135b7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x135b80: 0x8fa40080  lw          $a0, 0x80($sp)
    ctx->pc = 0x135b80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x135b84: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x135b84u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x135b88: 0xc04d7ec  jal         func_135FB0
    ctx->pc = 0x135B88u;
    SET_GPR_U32(ctx, 31, 0x135B90u);
    ctx->pc = 0x135FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x135FB0u, 0x135B88u, 0x135B90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x135B90u;
label_135b90:
    // 0x135b90: 0x10000030  b           . + 4 + (0x30 << 2)
    ctx->pc = 0x135B90u;
    {
        const bool branch_taken_0x135b90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x135b90) {
            ctx->pc = 0x135C54u;
            goto label_135c54;
        }
    }
    ctx->pc = 0x135B98u;
label_135b98:
    // 0x135b98: 0x8fa30070  lw          $v1, 0x70($sp)
    ctx->pc = 0x135b98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x135b9c: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x135b9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x135ba0: 0x512823  subu        $a1, $v0, $s1
    ctx->pc = 0x135ba0u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x135ba4: 0x8c640004  lw          $a0, 0x4($v1)
    ctx->pc = 0x135ba4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x135ba8: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x135ba8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x135bac: 0xc04d7dc  jal         func_135F70
    ctx->pc = 0x135BACu;
    SET_GPR_U32(ctx, 31, 0x135BB4u);
    ctx->pc = 0x135F70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x135F70u, 0x135BACu, 0x135BB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x135BB4u;
label_135bb4:
    // 0x135bb4: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x135bb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x135bb8: 0x511823  subu        $v1, $v0, $s1
    ctx->pc = 0x135bb8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x135bbc: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x135bbcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x135bc0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x135bc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x135bc4: 0x22100  sll         $a0, $v0, 4
    ctx->pc = 0x135bc4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x135bc8: 0x8fa30070  lw          $v1, 0x70($sp)
    ctx->pc = 0x135bc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x135bcc: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x135bccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x135bd0: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x135bd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x135bd4: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x135bd4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    // 0x135bd8: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x135bd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x135bdc: 0xa3a00064  sb          $zero, 0x64($sp)
    ctx->pc = 0x135bdcu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 100), (uint8_t)GPR_U32(ctx, 0));
    // 0x135be0: 0x8fa40080  lw          $a0, 0x80($sp)
    ctx->pc = 0x135be0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x135be4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x135be4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x135be8: 0x8c460004  lw          $a2, 0x4($v0)
    ctx->pc = 0x135be8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x135bec: 0x27a70064  addiu       $a3, $sp, 0x64
    ctx->pc = 0x135becu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 100));
    // 0x135bf0: 0xc04d834  jal         func_1360D0
    ctx->pc = 0x135BF0u;
    SET_GPR_U32(ctx, 31, 0x135BF8u);
    ctx->pc = 0x1360D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1360D0u, 0x135BF0u, 0x135BF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x135BF8u;
label_135bf8:
    // 0x135bf8: 0x8fa40070  lw          $a0, 0x70($sp)
    ctx->pc = 0x135bf8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x135bfc: 0x111040  sll         $v0, $s1, 1
    ctx->pc = 0x135bfcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
    // 0x135c00: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x135c00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x135c04: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x135c04u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x135c08: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x135c08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x135c0c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x135c0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x135c10: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x135c10u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
    // 0x135c14: 0x8fa40080  lw          $a0, 0x80($sp)
    ctx->pc = 0x135c14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x135c18: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x135c18u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x135c1c: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x135c1cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x135c20: 0xc04d7ec  jal         func_135FB0
    ctx->pc = 0x135C20u;
    SET_GPR_U32(ctx, 31, 0x135C28u);
    ctx->pc = 0x135FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x135FB0u, 0x135C20u, 0x135C28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x135C28u;
label_135c28:
    // 0x135c28: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x135C28u;
    {
        const bool branch_taken_0x135c28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x135c28) {
            ctx->pc = 0x135C54u;
            goto label_135c54;
        }
    }
    ctx->pc = 0x135C30u;
label_135c30:
    // 0x135c30: 0xa3a00060  sb          $zero, 0x60($sp)
    ctx->pc = 0x135c30u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 96), (uint8_t)GPR_U32(ctx, 0));
    // 0x135c34: 0x8fa40070  lw          $a0, 0x70($sp)
    ctx->pc = 0x135c34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x135c38: 0x8fa50080  lw          $a1, 0x80($sp)
    ctx->pc = 0x135c38u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x135c3c: 0x8fa600a0  lw          $a2, 0xA0($sp)
    ctx->pc = 0x135c3cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x135c40: 0x27a70060  addiu       $a3, $sp, 0x60
    ctx->pc = 0x135c40u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x135c44: 0x8fa80090  lw          $t0, 0x90($sp)
    ctx->pc = 0x135c44u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x135c48: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x135c48u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x135c4c: 0xc04d71c  jal         func_135C70
    ctx->pc = 0x135C4Cu;
    SET_GPR_U32(ctx, 31, 0x135C54u);
    ctx->pc = 0x135C70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x135C70u, 0x135C4Cu, 0x135C54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x135C54u;
label_135c54:
    // 0x135c54: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x135c54u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x135c58: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x135c58u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x135c5c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x135c5cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x135c60: 0x27bd00b0  addiu       $sp, $sp, 0xB0
    ctx->pc = 0x135c60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x135c64: 0x3e00008  jr          $ra
    ctx->pc = 0x135C64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x135C64u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x135C6Cu;
    // 0x135c6c: 0x0  nop
    ctx->pc = 0x135c6cu;
    // NOP
    ctx->pc = 0x135c70u;
}
