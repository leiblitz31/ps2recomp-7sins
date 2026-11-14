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

// Function: sub_0019CD50
// Address: 0x19cd50 - 0x19cf80
void sub_0019CD50_0x19cd50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0019CD50_0x19cd50");
#endif

    switch (ctx->pc) {
        case 0x19cdc8u: goto label_19cdc8;
        case 0x19ce3cu: goto label_19ce3c;
        case 0x19ce78u: goto label_19ce78;
        case 0x19ce98u: goto label_19ce98;
        case 0x19cebcu: goto label_19cebc;
        case 0x19cef8u: goto label_19cef8;
        case 0x19cf20u: goto label_19cf20;
        case 0x19cf30u: goto label_19cf30;
        case 0x19cf5cu: goto label_19cf5c;
        default: break;
    }

    ctx->pc = 0x19cd50u;

    // 0x19cd50: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x19cd50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x19cd54: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x19cd54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x19cd58: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x19cd58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x19cd5c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x19cd5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x19cd60: 0xafa40050  sw          $a0, 0x50($sp)
    ctx->pc = 0x19cd60u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 4));
    // 0x19cd64: 0xafa50060  sw          $a1, 0x60($sp)
    ctx->pc = 0x19cd64u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 5));
    // 0x19cd68: 0xafa60070  sw          $a2, 0x70($sp)
    ctx->pc = 0x19cd68u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 6));
    // 0x19cd6c: 0xafa70080  sw          $a3, 0x80($sp)
    ctx->pc = 0x19cd6cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 7));
    // 0x19cd70: 0x8fa30070  lw          $v1, 0x70($sp)
    ctx->pc = 0x19cd70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x19cd74: 0x10600079  beqz        $v1, . + 4 + (0x79 << 2)
    ctx->pc = 0x19CD74u;
    {
        const bool branch_taken_0x19cd74 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x19cd74) {
            ctx->pc = 0x19CF5Cu;
            goto label_19cf5c;
        }
    }
    ctx->pc = 0x19CD7Cu;
    // 0x19cd7c: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x19cd7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x19cd80: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x19cd80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x19cd84: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x19cd84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x19cd88: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x19cd88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x19cd8c: 0x622023  subu        $a0, $v1, $v0
    ctx->pc = 0x19cd8cu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x19cd90: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x19cd90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x19cd94: 0x41903  sra         $v1, $a0, 4
    ctx->pc = 0x19cd94u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 4), 4));
    // 0x19cd98: 0x4810003  bgez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x19CD98u;
    {
        const bool branch_taken_0x19cd98 = (GPR_S32(ctx, 4) >= 0);
        if (branch_taken_0x19cd98) {
            ctx->pc = 0x19CDA8u;
            goto label_19cda8;
        }
    }
    ctx->pc = 0x19CDA0u;
    // 0x19cda0: 0x2482000f  addiu       $v0, $a0, 0xF
    ctx->pc = 0x19cda0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 15));
    // 0x19cda4: 0x21903  sra         $v1, $v0, 4
    ctx->pc = 0x19cda4u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 4));
label_19cda8:
    // 0x19cda8: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x19cda8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x19cdac: 0x62102b  sltu        $v0, $v1, $v0
    ctx->pc = 0x19cdacu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x19cdb0: 0x14400061  bnez        $v0, . + 4 + (0x61 << 2)
    ctx->pc = 0x19CDB0u;
    {
        const bool branch_taken_0x19cdb0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x19cdb0) {
            ctx->pc = 0x19CF38u;
            goto label_19cf38;
        }
    }
    ctx->pc = 0x19CDB8u;
    // 0x19cdb8: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x19cdb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x19cdbc: 0x8fa50080  lw          $a1, 0x80($sp)
    ctx->pc = 0x19cdbcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x19cdc0: 0xc067520  jal         func_19D480
    ctx->pc = 0x19CDC0u;
    SET_GPR_U32(ctx, 31, 0x19CDC8u);
    ctx->pc = 0x19D480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D480u, 0x19CDC0u, 0x19CDC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19CDC8u;
label_19cdc8:
    // 0x19cdc8: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x19cdc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x19cdcc: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x19cdccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x19cdd0: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x19cdd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x19cdd4: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x19cdd4u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x19cdd8: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x19cdd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x19cddc: 0x38903  sra         $s1, $v1, 4
    ctx->pc = 0x19cddcu;
    SET_GPR_S32(ctx, 17, SRA32(GPR_S32(ctx, 3), 4));
    // 0x19cde0: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x19CDE0u;
    {
        const bool branch_taken_0x19cde0 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x19cde0) {
            ctx->pc = 0x19CDF0u;
            goto label_19cdf0;
        }
    }
    ctx->pc = 0x19CDE8u;
    // 0x19cde8: 0x2462000f  addiu       $v0, $v1, 0xF
    ctx->pc = 0x19cde8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 15));
    // 0x19cdec: 0x28903  sra         $s1, $v0, 4
    ctx->pc = 0x19cdecu;
    SET_GPR_S32(ctx, 17, SRA32(GPR_S32(ctx, 2), 4));
label_19cdf0:
    // 0x19cdf0: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x19cdf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x19cdf4: 0x8c500004  lw          $s0, 0x4($v0)
    ctx->pc = 0x19cdf4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x19cdf8: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x19cdf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x19cdfc: 0x51082b  sltu        $at, $v0, $s1
    ctx->pc = 0x19cdfcu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x19ce00: 0x10200027  beqz        $at, . + 4 + (0x27 << 2)
    ctx->pc = 0x19CE00u;
    {
        const bool branch_taken_0x19ce00 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x19ce00) {
            ctx->pc = 0x19CEA0u;
            goto label_19cea0;
        }
    }
    ctx->pc = 0x19CE08u;
    // 0x19ce08: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x19ce08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x19ce0c: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x19ce0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x19ce10: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x19ce10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x19ce14: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x19ce14u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x19ce18: 0x622023  subu        $a0, $v1, $v0
    ctx->pc = 0x19ce18u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x19ce1c: 0x8fa30050  lw          $v1, 0x50($sp)
    ctx->pc = 0x19ce1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x19ce20: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x19ce20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x19ce24: 0xa3a0004c  sb          $zero, 0x4C($sp)
    ctx->pc = 0x19ce24u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 76), (uint8_t)GPR_U32(ctx, 0));
    // 0x19ce28: 0x8c650004  lw          $a1, 0x4($v1)
    ctx->pc = 0x19ce28u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x19ce2c: 0x8c460004  lw          $a2, 0x4($v0)
    ctx->pc = 0x19ce2cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x19ce30: 0x27a7004c  addiu       $a3, $sp, 0x4C
    ctx->pc = 0x19ce30u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 76));
    // 0x19ce34: 0xc067500  jal         func_19D400
    ctx->pc = 0x19CE34u;
    SET_GPR_U32(ctx, 31, 0x19CE3Cu);
    ctx->pc = 0x19D400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D400u, 0x19CE34u, 0x19CE3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19CE3Cu;
label_19ce3c:
    // 0x19ce3c: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x19ce3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x19ce40: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x19ce40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x19ce44: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x19ce44u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x19ce48: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x19ce48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x19ce4c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x19ce4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x19ce50: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x19ce50u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
    // 0x19ce54: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x19ce54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x19ce58: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x19ce58u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x19ce5c: 0x2022823  subu        $a1, $s0, $v0
    ctx->pc = 0x19ce5cu;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x19ce60: 0xa3a00048  sb          $zero, 0x48($sp)
    ctx->pc = 0x19ce60u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 72), (uint8_t)GPR_U32(ctx, 0));
    // 0x19ce64: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x19ce64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x19ce68: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x19ce68u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19ce6c: 0x27a70048  addiu       $a3, $sp, 0x48
    ctx->pc = 0x19ce6cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
    // 0x19ce70: 0xc0674cc  jal         func_19D330
    ctx->pc = 0x19CE70u;
    SET_GPR_U32(ctx, 31, 0x19CE78u);
    ctx->pc = 0x19D330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D330u, 0x19CE70u, 0x19CE78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19CE78u;
label_19ce78:
    // 0x19ce78: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x19ce78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x19ce7c: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x19ce7cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x19ce80: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x19ce80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x19ce84: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x19ce84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x19ce88: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x19ce88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x19ce8c: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x19ce8cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x19ce90: 0xc0674b4  jal         func_19D2D0
    ctx->pc = 0x19CE90u;
    SET_GPR_U32(ctx, 31, 0x19CE98u);
    ctx->pc = 0x19D2D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D2D0u, 0x19CE90u, 0x19CE98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19CE98u;
label_19ce98:
    // 0x19ce98: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x19CE98u;
    {
        const bool branch_taken_0x19ce98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19ce98) {
            ctx->pc = 0x19CF20u;
            goto label_19cf20;
        }
    }
    ctx->pc = 0x19CEA0u;
label_19cea0:
    // 0x19cea0: 0x8fa30050  lw          $v1, 0x50($sp)
    ctx->pc = 0x19cea0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x19cea4: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x19cea4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x19cea8: 0x512823  subu        $a1, $v0, $s1
    ctx->pc = 0x19cea8u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x19ceac: 0x8c640004  lw          $a0, 0x4($v1)
    ctx->pc = 0x19ceacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x19ceb0: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x19ceb0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x19ceb4: 0xc0674a4  jal         func_19D290
    ctx->pc = 0x19CEB4u;
    SET_GPR_U32(ctx, 31, 0x19CEBCu);
    ctx->pc = 0x19D290u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D290u, 0x19CEB4u, 0x19CEBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19CEBCu;
label_19cebc:
    // 0x19cebc: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x19cebcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x19cec0: 0x511023  subu        $v0, $v0, $s1
    ctx->pc = 0x19cec0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x19cec4: 0x22100  sll         $a0, $v0, 4
    ctx->pc = 0x19cec4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x19cec8: 0x8fa30050  lw          $v1, 0x50($sp)
    ctx->pc = 0x19cec8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x19cecc: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x19ceccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x19ced0: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x19ced0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x19ced4: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x19ced4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    // 0x19ced8: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x19ced8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x19cedc: 0xa3a00044  sb          $zero, 0x44($sp)
    ctx->pc = 0x19cedcu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 68), (uint8_t)GPR_U32(ctx, 0));
    // 0x19cee0: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x19cee0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x19cee4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x19cee4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19cee8: 0x8c460004  lw          $a2, 0x4($v0)
    ctx->pc = 0x19cee8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x19ceec: 0x27a70044  addiu       $a3, $sp, 0x44
    ctx->pc = 0x19ceecu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 68));
    // 0x19cef0: 0xc067500  jal         func_19D400
    ctx->pc = 0x19CEF0u;
    SET_GPR_U32(ctx, 31, 0x19CEF8u);
    ctx->pc = 0x19D400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D400u, 0x19CEF0u, 0x19CEF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19CEF8u;
label_19cef8:
    // 0x19cef8: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x19cef8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x19cefc: 0x111900  sll         $v1, $s1, 4
    ctx->pc = 0x19cefcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
    // 0x19cf00: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x19cf00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x19cf04: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x19cf04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x19cf08: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x19cf08u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
    // 0x19cf0c: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x19cf0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x19cf10: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x19cf10u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19cf14: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x19cf14u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x19cf18: 0xc0674b4  jal         func_19D2D0
    ctx->pc = 0x19CF18u;
    SET_GPR_U32(ctx, 31, 0x19CF20u);
    ctx->pc = 0x19D2D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D2D0u, 0x19CF18u, 0x19CF20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19CF20u;
label_19cf20:
    // 0x19cf20: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x19cf20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x19cf24: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x19cf24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x19cf28: 0xc067054  jal         func_19C150
    ctx->pc = 0x19CF28u;
    SET_GPR_U32(ctx, 31, 0x19CF30u);
    ctx->pc = 0x19C150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19C150u, 0x19CF28u, 0x19CF30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19CF30u;
label_19cf30:
    // 0x19cf30: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x19CF30u;
    {
        const bool branch_taken_0x19cf30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19cf30) {
            ctx->pc = 0x19CF5Cu;
            goto label_19cf5c;
        }
    }
    ctx->pc = 0x19CF38u;
label_19cf38:
    // 0x19cf38: 0xa3a00040  sb          $zero, 0x40($sp)
    ctx->pc = 0x19cf38u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 64), (uint8_t)GPR_U32(ctx, 0));
    // 0x19cf3c: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x19cf3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x19cf40: 0x8fa50060  lw          $a1, 0x60($sp)
    ctx->pc = 0x19cf40u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x19cf44: 0x8fa60080  lw          $a2, 0x80($sp)
    ctx->pc = 0x19cf44u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x19cf48: 0x27a70040  addiu       $a3, $sp, 0x40
    ctx->pc = 0x19cf48u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x19cf4c: 0x8fa80070  lw          $t0, 0x70($sp)
    ctx->pc = 0x19cf4cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x19cf50: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x19cf50u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19cf54: 0xc0673e0  jal         func_19CF80
    ctx->pc = 0x19CF54u;
    SET_GPR_U32(ctx, 31, 0x19CF5Cu);
    ctx->pc = 0x19CF80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19CF80u, 0x19CF54u, 0x19CF5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19CF5Cu;
label_19cf5c:
    // 0x19cf5c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x19cf5cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x19cf60: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x19cf60u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19cf64: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x19cf64u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19cf68: 0x27bd0090  addiu       $sp, $sp, 0x90
    ctx->pc = 0x19cf68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x19cf6c: 0x3e00008  jr          $ra
    ctx->pc = 0x19CF6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19CF6Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19CF74u;
    // 0x19cf74: 0x0  nop
    ctx->pc = 0x19cf74u;
    // NOP
    // 0x19cf78: 0x0  nop
    ctx->pc = 0x19cf78u;
    // NOP
    // 0x19cf7c: 0x0  nop
    ctx->pc = 0x19cf7cu;
    // NOP
    ctx->pc = 0x19cf80u;
}
