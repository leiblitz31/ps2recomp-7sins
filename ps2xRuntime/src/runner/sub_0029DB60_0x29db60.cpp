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

// Function: sub_0029DB60
// Address: 0x29db60 - 0x29dd40
void sub_0029DB60_0x29db60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029DB60_0x29db60");
#endif

    switch (ctx->pc) {
        case 0x29db98u: goto label_29db98;
        case 0x29dba8u: goto label_29dba8;
        case 0x29dbd4u: goto label_29dbd4;
        case 0x29dbe4u: goto label_29dbe4;
        case 0x29dc20u: goto label_29dc20;
        case 0x29dc54u: goto label_29dc54;
        case 0x29dc6cu: goto label_29dc6c;
        case 0x29dc80u: goto label_29dc80;
        case 0x29dcb8u: goto label_29dcb8;
        case 0x29dcc4u: goto label_29dcc4;
        case 0x29dcfcu: goto label_29dcfc;
        default: break;
    }

    ctx->pc = 0x29db60u;

    // 0x29db60: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x29db60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x29db64: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x29db64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x29db68: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x29db68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x29db6c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x29db6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x29db70: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x29db70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x29db74: 0xafa40050  sw          $a0, 0x50($sp)
    ctx->pc = 0x29db74u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 4));
    // 0x29db78: 0xafa50060  sw          $a1, 0x60($sp)
    ctx->pc = 0x29db78u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 5));
    // 0x29db7c: 0x8fa30060  lw          $v1, 0x60($sp)
    ctx->pc = 0x29db7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x29db80: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x29db80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x29db84: 0x10620065  beq         $v1, $v0, . + 4 + (0x65 << 2)
    ctx->pc = 0x29DB84u;
    {
        const bool branch_taken_0x29db84 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x29db84) {
            ctx->pc = 0x29DD1Cu;
            goto label_29dd1c;
        }
    }
    ctx->pc = 0x29DB8Cu;
    // 0x29db8c: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x29db8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x29db90: 0xc099308  jal         func_264C20
    ctx->pc = 0x29DB90u;
    SET_GPR_U32(ctx, 31, 0x29DB98u);
    ctx->pc = 0x264C20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x264C20u, 0x29DB90u, 0x29DB98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29DB98u;
label_29db98:
    // 0x29db98: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x29db98u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29db9c: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x29db9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x29dba0: 0xc0a77c0  jal         func_29DF00
    ctx->pc = 0x29DBA0u;
    SET_GPR_U32(ctx, 31, 0x29DBA8u);
    ctx->pc = 0x29DF00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29DF00u, 0x29DBA0u, 0x29DBA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29DBA8u;
label_29dba8:
    // 0x29dba8: 0x50082b  sltu        $at, $v0, $s0
    ctx->pc = 0x29dba8u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x29dbac: 0x10200019  beqz        $at, . + 4 + (0x19 << 2)
    ctx->pc = 0x29DBACu;
    {
        const bool branch_taken_0x29dbac = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x29dbac) {
            ctx->pc = 0x29DC14u;
            goto label_29dc14;
        }
    }
    ctx->pc = 0x29DBB4u;
    // 0x29dbb4: 0x8fa30060  lw          $v1, 0x60($sp)
    ctx->pc = 0x29dbb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x29dbb8: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x29dbb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x29dbbc: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x29dbbcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x29dbc0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x29dbc0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29dbc4: 0x8c660000  lw          $a2, 0x0($v1)
    ctx->pc = 0x29dbc4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x29dbc8: 0x8c470004  lw          $a3, 0x4($v0)
    ctx->pc = 0x29dbc8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x29dbcc: 0xc0a77a4  jal         func_29DE90
    ctx->pc = 0x29DBCCu;
    SET_GPR_U32(ctx, 31, 0x29DBD4u);
    ctx->pc = 0x29DE90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29DE90u, 0x29DBCCu, 0x29DBD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29DBD4u;
label_29dbd4:
    // 0x29dbd4: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x29dbd4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29dbd8: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x29dbd8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x29dbdc: 0xc0992ac  jal         func_264AB0
    ctx->pc = 0x29DBDCu;
    SET_GPR_U32(ctx, 31, 0x29DBE4u);
    ctx->pc = 0x264AB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x264AB0u, 0x29DBDCu, 0x29DBE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29DBE4u;
label_29dbe4:
    // 0x29dbe4: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x29dbe4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x29dbe8: 0xac520000  sw          $s2, 0x0($v0)
    ctx->pc = 0x29dbe8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 18));
    // 0x29dbec: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x29dbecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x29dbf0: 0x101040  sll         $v0, $s0, 1
    ctx->pc = 0x29dbf0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x29dbf4: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x29dbf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x29dbf8: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x29dbf8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x29dbfc: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x29dbfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x29dc00: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x29dc00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x29dc04: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x29dc04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x29dc08: 0xac430008  sw          $v1, 0x8($v0)
    ctx->pc = 0x29dc08u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 3));
    // 0x29dc0c: 0x1000003b  b           . + 4 + (0x3B << 2)
    ctx->pc = 0x29DC0Cu;
    {
        const bool branch_taken_0x29dc0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x29dc0c) {
            ctx->pc = 0x29DCFCu;
            goto label_29dcfc;
        }
    }
    ctx->pc = 0x29DC14u;
label_29dc14:
    // 0x29dc14: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x29dc14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x29dc18: 0xc099308  jal         func_264C20
    ctx->pc = 0x29DC18u;
    SET_GPR_U32(ctx, 31, 0x29DC20u);
    ctx->pc = 0x264C20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x264C20u, 0x29DC18u, 0x29DC20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29DC20u;
label_29dc20:
    // 0x29dc20: 0x50102b  sltu        $v0, $v0, $s0
    ctx->pc = 0x29dc20u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x29dc24: 0x14400013  bnez        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x29DC24u;
    {
        const bool branch_taken_0x29dc24 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x29dc24) {
            ctx->pc = 0x29DC74u;
            goto label_29dc74;
        }
    }
    ctx->pc = 0x29DC2Cu;
    // 0x29dc2c: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x29dc2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x29dc30: 0x8fa30060  lw          $v1, 0x60($sp)
    ctx->pc = 0x29dc30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x29dc34: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x29dc34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x29dc38: 0xa3a0004c  sb          $zero, 0x4C($sp)
    ctx->pc = 0x29dc38u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 76), (uint8_t)GPR_U32(ctx, 0));
    // 0x29dc3c: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x29dc3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x29dc40: 0x8c650004  lw          $a1, 0x4($v1)
    ctx->pc = 0x29dc40u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x29dc44: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x29dc44u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x29dc48: 0x27a7004c  addiu       $a3, $sp, 0x4C
    ctx->pc = 0x29dc48u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 76));
    // 0x29dc4c: 0xc0a7770  jal         func_29DDC0
    ctx->pc = 0x29DC4Cu;
    SET_GPR_U32(ctx, 31, 0x29DC54u);
    ctx->pc = 0x29DDC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29DDC0u, 0x29DC4Cu, 0x29DC54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29DC54u;
label_29dc54:
    // 0x29dc54: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x29dc54u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29dc58: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x29dc58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x29dc5c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x29dc5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29dc60: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x29dc60u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x29dc64: 0xc098a4c  jal         func_262930
    ctx->pc = 0x29DC64u;
    SET_GPR_U32(ctx, 31, 0x29DC6Cu);
    ctx->pc = 0x262930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x262930u, 0x29DC64u, 0x29DC6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29DC6Cu;
label_29dc6c:
    // 0x29dc6c: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x29DC6Cu;
    {
        const bool branch_taken_0x29dc6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x29dc6c) {
            ctx->pc = 0x29DCFCu;
            goto label_29dcfc;
        }
    }
    ctx->pc = 0x29DC74u;
label_29dc74:
    // 0x29dc74: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x29dc74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x29dc78: 0xc099308  jal         func_264C20
    ctx->pc = 0x29DC78u;
    SET_GPR_U32(ctx, 31, 0x29DC80u);
    ctx->pc = 0x264C20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x264C20u, 0x29DC78u, 0x29DC80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29DC80u;
label_29dc80:
    // 0x29dc80: 0x21840  sll         $v1, $v0, 1
    ctx->pc = 0x29dc80u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x29dc84: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x29dc84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x29dc88: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x29dc88u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x29dc8c: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x29dc8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x29dc90: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x29dc90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x29dc94: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x29dc94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x29dc98: 0x8fa30060  lw          $v1, 0x60($sp)
    ctx->pc = 0x29dc98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x29dc9c: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x29dc9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x29dca0: 0xa3a00048  sb          $zero, 0x48($sp)
    ctx->pc = 0x29dca0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 72), (uint8_t)GPR_U32(ctx, 0));
    // 0x29dca4: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x29dca4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x29dca8: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x29dca8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x29dcac: 0x27a70048  addiu       $a3, $sp, 0x48
    ctx->pc = 0x29dcacu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
    // 0x29dcb0: 0xc0a7770  jal         func_29DDC0
    ctx->pc = 0x29DCB0u;
    SET_GPR_U32(ctx, 31, 0x29DCB8u);
    ctx->pc = 0x29DDC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29DDC0u, 0x29DCB0u, 0x29DCB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29DCB8u;
label_29dcb8:
    // 0x29dcb8: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x29dcb8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x29dcbc: 0xc099308  jal         func_264C20
    ctx->pc = 0x29DCBCu;
    SET_GPR_U32(ctx, 31, 0x29DCC4u);
    ctx->pc = 0x264C20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x264C20u, 0x29DCBCu, 0x29DCC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29DCC4u;
label_29dcc4:
    // 0x29dcc4: 0x21840  sll         $v1, $v0, 1
    ctx->pc = 0x29dcc4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x29dcc8: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x29dcc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x29dccc: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x29dcccu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x29dcd0: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x29dcd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x29dcd4: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x29dcd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x29dcd8: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x29dcd8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x29dcdc: 0x8fa30060  lw          $v1, 0x60($sp)
    ctx->pc = 0x29dcdcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x29dce0: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x29dce0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x29dce4: 0xa3a00044  sb          $zero, 0x44($sp)
    ctx->pc = 0x29dce4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 68), (uint8_t)GPR_U32(ctx, 0));
    // 0x29dce8: 0x8c650004  lw          $a1, 0x4($v1)
    ctx->pc = 0x29dce8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x29dcec: 0x8c460004  lw          $a2, 0x4($v0)
    ctx->pc = 0x29dcecu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x29dcf0: 0x27a70044  addiu       $a3, $sp, 0x44
    ctx->pc = 0x29dcf0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 68));
    // 0x29dcf4: 0xc0a7750  jal         func_29DD40
    ctx->pc = 0x29DCF4u;
    SET_GPR_U32(ctx, 31, 0x29DCFCu);
    ctx->pc = 0x29DD40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29DD40u, 0x29DCF4u, 0x29DCFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29DCFCu;
label_29dcfc:
    // 0x29dcfc: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x29dcfcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x29dd00: 0x101040  sll         $v0, $s0, 1
    ctx->pc = 0x29dd00u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x29dd04: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x29dd04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x29dd08: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x29dd08u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x29dd0c: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x29dd0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x29dd10: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x29dd10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x29dd14: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x29dd14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x29dd18: 0xac430004  sw          $v1, 0x4($v0)
    ctx->pc = 0x29dd18u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
label_29dd1c:
    // 0x29dd1c: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x29dd1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x29dd20: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x29dd20u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x29dd24: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x29dd24u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x29dd28: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x29dd28u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x29dd2c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x29dd2cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x29dd30: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x29dd30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x29dd34: 0x3e00008  jr          $ra
    ctx->pc = 0x29DD34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29DD34u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29DD3Cu;
    // 0x29dd3c: 0x0  nop
    ctx->pc = 0x29dd3cu;
    // NOP
    ctx->pc = 0x29dd40u;
}
