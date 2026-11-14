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

// Function: sub_0019DD00
// Address: 0x19dd00 - 0x19df40
void sub_0019DD00_0x19dd00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0019DD00_0x19dd00");
#endif

    switch (ctx->pc) {
        case 0x19dd6cu: goto label_19dd6c;
        case 0x19dddcu: goto label_19dddc;
        case 0x19de28u: goto label_19de28;
        case 0x19de50u: goto label_19de50;
        case 0x19de74u: goto label_19de74;
        case 0x19deb8u: goto label_19deb8;
        case 0x19dee8u: goto label_19dee8;
        case 0x19def8u: goto label_19def8;
        case 0x19df24u: goto label_19df24;
        default: break;
    }

    ctx->pc = 0x19dd00u;

    // 0x19dd00: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x19dd00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x19dd04: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x19dd04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x19dd08: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x19dd08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x19dd0c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x19dd0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x19dd10: 0xafa40070  sw          $a0, 0x70($sp)
    ctx->pc = 0x19dd10u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 4));
    // 0x19dd14: 0xafa50080  sw          $a1, 0x80($sp)
    ctx->pc = 0x19dd14u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 5));
    // 0x19dd18: 0xafa60090  sw          $a2, 0x90($sp)
    ctx->pc = 0x19dd18u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 6));
    // 0x19dd1c: 0xafa700a0  sw          $a3, 0xA0($sp)
    ctx->pc = 0x19dd1cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 7));
    // 0x19dd20: 0x8fa30090  lw          $v1, 0x90($sp)
    ctx->pc = 0x19dd20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x19dd24: 0x1060007f  beqz        $v1, . + 4 + (0x7F << 2)
    ctx->pc = 0x19DD24u;
    {
        const bool branch_taken_0x19dd24 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x19dd24) {
            ctx->pc = 0x19DF24u;
            goto label_19df24;
        }
    }
    ctx->pc = 0x19DD2Cu;
    // 0x19dd2c: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x19dd2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x19dd30: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x19dd30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x19dd34: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x19dd34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x19dd38: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x19dd38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x19dd3c: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x19dd3cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x19dd40: 0x24020024  addiu       $v0, $zero, 0x24
    ctx->pc = 0x19dd40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    // 0x19dd44: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x19dd44u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x19dd48: 0x1812  mflo        $v1
    ctx->pc = 0x19dd48u;
    SET_GPR_U64(ctx, 3, ctx->lo);
    // 0x19dd4c: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x19dd4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x19dd50: 0x62102b  sltu        $v0, $v1, $v0
    ctx->pc = 0x19dd50u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x19dd54: 0x1440006a  bnez        $v0, . + 4 + (0x6A << 2)
    ctx->pc = 0x19DD54u;
    {
        const bool branch_taken_0x19dd54 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x19dd54) {
            ctx->pc = 0x19DF00u;
            goto label_19df00;
        }
    }
    ctx->pc = 0x19DD5Cu;
    // 0x19dd5c: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x19dd5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x19dd60: 0x8fa500a0  lw          $a1, 0xA0($sp)
    ctx->pc = 0x19dd60u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x19dd64: 0xc067908  jal         func_19E420
    ctx->pc = 0x19DD64u;
    SET_GPR_U32(ctx, 31, 0x19DD6Cu);
    ctx->pc = 0x19E420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19E420u, 0x19DD64u, 0x19DD6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19DD6Cu;
label_19dd6c:
    // 0x19dd6c: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x19dd6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x19dd70: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x19dd70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x19dd74: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x19dd74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x19dd78: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x19dd78u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x19dd7c: 0x24020024  addiu       $v0, $zero, 0x24
    ctx->pc = 0x19dd7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    // 0x19dd80: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x19dd80u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x19dd84: 0x8812  mflo        $s1
    ctx->pc = 0x19dd84u;
    SET_GPR_U64(ctx, 17, ctx->lo);
    // 0x19dd88: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x19dd88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x19dd8c: 0x8c500004  lw          $s0, 0x4($v0)
    ctx->pc = 0x19dd8cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x19dd90: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x19dd90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x19dd94: 0x51082b  sltu        $at, $v0, $s1
    ctx->pc = 0x19dd94u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x19dd98: 0x1020002f  beqz        $at, . + 4 + (0x2F << 2)
    ctx->pc = 0x19DD98u;
    {
        const bool branch_taken_0x19dd98 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x19dd98) {
            ctx->pc = 0x19DE58u;
            goto label_19de58;
        }
    }
    ctx->pc = 0x19DDA0u;
    // 0x19dda0: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x19dda0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x19dda4: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x19dda4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x19dda8: 0x8fa30090  lw          $v1, 0x90($sp)
    ctx->pc = 0x19dda8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x19ddac: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x19ddacu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x19ddb0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x19ddb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x19ddb4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x19ddb4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x19ddb8: 0x822023  subu        $a0, $a0, $v0
    ctx->pc = 0x19ddb8u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x19ddbc: 0x8fa30070  lw          $v1, 0x70($sp)
    ctx->pc = 0x19ddbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x19ddc0: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x19ddc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x19ddc4: 0xa3a0006c  sb          $zero, 0x6C($sp)
    ctx->pc = 0x19ddc4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 108), (uint8_t)GPR_U32(ctx, 0));
    // 0x19ddc8: 0x8c650004  lw          $a1, 0x4($v1)
    ctx->pc = 0x19ddc8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x19ddcc: 0x8c460004  lw          $a2, 0x4($v0)
    ctx->pc = 0x19ddccu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x19ddd0: 0x27a7006c  addiu       $a3, $sp, 0x6C
    ctx->pc = 0x19ddd0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 108));
    // 0x19ddd4: 0xc0678e8  jal         func_19E3A0
    ctx->pc = 0x19DDD4u;
    SET_GPR_U32(ctx, 31, 0x19DDDCu);
    ctx->pc = 0x19E3A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19E3A0u, 0x19DDD4u, 0x19DDDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19DDDCu;
label_19dddc:
    // 0x19dddc: 0x8fa40070  lw          $a0, 0x70($sp)
    ctx->pc = 0x19dddcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x19dde0: 0x8fa30090  lw          $v1, 0x90($sp)
    ctx->pc = 0x19dde0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x19dde4: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x19dde4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x19dde8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x19dde8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x19ddec: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x19ddecu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x19ddf0: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x19ddf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x19ddf4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x19ddf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x19ddf8: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x19ddf8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
    // 0x19ddfc: 0x8fa30090  lw          $v1, 0x90($sp)
    ctx->pc = 0x19ddfcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x19de00: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x19de00u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x19de04: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x19de04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x19de08: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x19de08u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x19de0c: 0x2022823  subu        $a1, $s0, $v0
    ctx->pc = 0x19de0cu;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x19de10: 0xa3a00068  sb          $zero, 0x68($sp)
    ctx->pc = 0x19de10u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 104), (uint8_t)GPR_U32(ctx, 0));
    // 0x19de14: 0x8fa40080  lw          $a0, 0x80($sp)
    ctx->pc = 0x19de14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x19de18: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x19de18u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19de1c: 0x27a70068  addiu       $a3, $sp, 0x68
    ctx->pc = 0x19de1cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 104));
    // 0x19de20: 0xc0678b8  jal         func_19E2E0
    ctx->pc = 0x19DE20u;
    SET_GPR_U32(ctx, 31, 0x19DE28u);
    ctx->pc = 0x19E2E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19E2E0u, 0x19DE20u, 0x19DE28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19DE28u;
label_19de28:
    // 0x19de28: 0x8fa30090  lw          $v1, 0x90($sp)
    ctx->pc = 0x19de28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x19de2c: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x19de2cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x19de30: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x19de30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x19de34: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x19de34u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x19de38: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x19de38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x19de3c: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x19de3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x19de40: 0x8fa40080  lw          $a0, 0x80($sp)
    ctx->pc = 0x19de40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x19de44: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x19de44u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x19de48: 0xc0678a0  jal         func_19E280
    ctx->pc = 0x19DE48u;
    SET_GPR_U32(ctx, 31, 0x19DE50u);
    ctx->pc = 0x19E280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19E280u, 0x19DE48u, 0x19DE50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19DE50u;
label_19de50:
    // 0x19de50: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x19DE50u;
    {
        const bool branch_taken_0x19de50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19de50) {
            ctx->pc = 0x19DEE8u;
            goto label_19dee8;
        }
    }
    ctx->pc = 0x19DE58u;
label_19de58:
    // 0x19de58: 0x8fa30070  lw          $v1, 0x70($sp)
    ctx->pc = 0x19de58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x19de5c: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x19de5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x19de60: 0x512823  subu        $a1, $v0, $s1
    ctx->pc = 0x19de60u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x19de64: 0x8c640004  lw          $a0, 0x4($v1)
    ctx->pc = 0x19de64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x19de68: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x19de68u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x19de6c: 0xc067890  jal         func_19E240
    ctx->pc = 0x19DE6Cu;
    SET_GPR_U32(ctx, 31, 0x19DE74u);
    ctx->pc = 0x19E240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19E240u, 0x19DE6Cu, 0x19DE74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19DE74u;
label_19de74:
    // 0x19de74: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x19de74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x19de78: 0x511823  subu        $v1, $v0, $s1
    ctx->pc = 0x19de78u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x19de7c: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x19de7cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x19de80: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x19de80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x19de84: 0x22080  sll         $a0, $v0, 2
    ctx->pc = 0x19de84u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x19de88: 0x8fa30070  lw          $v1, 0x70($sp)
    ctx->pc = 0x19de88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x19de8c: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x19de8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x19de90: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x19de90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x19de94: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x19de94u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    // 0x19de98: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x19de98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x19de9c: 0xa3a00064  sb          $zero, 0x64($sp)
    ctx->pc = 0x19de9cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 100), (uint8_t)GPR_U32(ctx, 0));
    // 0x19dea0: 0x8fa40080  lw          $a0, 0x80($sp)
    ctx->pc = 0x19dea0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x19dea4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x19dea4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19dea8: 0x8c460004  lw          $a2, 0x4($v0)
    ctx->pc = 0x19dea8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x19deac: 0x27a70064  addiu       $a3, $sp, 0x64
    ctx->pc = 0x19deacu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 100));
    // 0x19deb0: 0xc0678e8  jal         func_19E3A0
    ctx->pc = 0x19DEB0u;
    SET_GPR_U32(ctx, 31, 0x19DEB8u);
    ctx->pc = 0x19E3A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19E3A0u, 0x19DEB0u, 0x19DEB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19DEB8u;
label_19deb8:
    // 0x19deb8: 0x8fa40070  lw          $a0, 0x70($sp)
    ctx->pc = 0x19deb8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x19debc: 0x1110c0  sll         $v0, $s1, 3
    ctx->pc = 0x19debcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 3));
    // 0x19dec0: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x19dec0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x19dec4: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x19dec4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x19dec8: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x19dec8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x19decc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x19deccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x19ded0: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x19ded0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
    // 0x19ded4: 0x8fa40080  lw          $a0, 0x80($sp)
    ctx->pc = 0x19ded4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x19ded8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x19ded8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19dedc: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x19dedcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x19dee0: 0xc0678a0  jal         func_19E280
    ctx->pc = 0x19DEE0u;
    SET_GPR_U32(ctx, 31, 0x19DEE8u);
    ctx->pc = 0x19E280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19E280u, 0x19DEE0u, 0x19DEE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19DEE8u;
label_19dee8:
    // 0x19dee8: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x19dee8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x19deec: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x19deecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x19def0: 0xc067260  jal         func_19C980
    ctx->pc = 0x19DEF0u;
    SET_GPR_U32(ctx, 31, 0x19DEF8u);
    ctx->pc = 0x19C980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19C980u, 0x19DEF0u, 0x19DEF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19DEF8u;
label_19def8:
    // 0x19def8: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x19DEF8u;
    {
        const bool branch_taken_0x19def8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19def8) {
            ctx->pc = 0x19DF24u;
            goto label_19df24;
        }
    }
    ctx->pc = 0x19DF00u;
label_19df00:
    // 0x19df00: 0xa3a00060  sb          $zero, 0x60($sp)
    ctx->pc = 0x19df00u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 96), (uint8_t)GPR_U32(ctx, 0));
    // 0x19df04: 0x8fa40070  lw          $a0, 0x70($sp)
    ctx->pc = 0x19df04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x19df08: 0x8fa50080  lw          $a1, 0x80($sp)
    ctx->pc = 0x19df08u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x19df0c: 0x8fa600a0  lw          $a2, 0xA0($sp)
    ctx->pc = 0x19df0cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x19df10: 0x27a70060  addiu       $a3, $sp, 0x60
    ctx->pc = 0x19df10u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x19df14: 0x8fa80090  lw          $t0, 0x90($sp)
    ctx->pc = 0x19df14u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x19df18: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x19df18u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19df1c: 0xc0677d0  jal         func_19DF40
    ctx->pc = 0x19DF1Cu;
    SET_GPR_U32(ctx, 31, 0x19DF24u);
    ctx->pc = 0x19DF40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DF40u, 0x19DF1Cu, 0x19DF24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19DF24u;
label_19df24:
    // 0x19df24: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x19df24u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x19df28: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x19df28u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19df2c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x19df2cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19df30: 0x27bd00b0  addiu       $sp, $sp, 0xB0
    ctx->pc = 0x19df30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x19df34: 0x3e00008  jr          $ra
    ctx->pc = 0x19DF34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19DF34u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19DF3Cu;
    // 0x19df3c: 0x0  nop
    ctx->pc = 0x19df3cu;
    // NOP
    ctx->pc = 0x19df40u;
}
