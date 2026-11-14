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

// Function: sub_00127B00
// Address: 0x127b00 - 0x127d30
void sub_00127B00_0x127b00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00127B00_0x127b00");
#endif

    switch (ctx->pc) {
        case 0x127c28u: goto label_127c28;
        case 0x127c88u: goto label_127c88;
        case 0x127cb8u: goto label_127cb8;
        case 0x127cdcu: goto label_127cdc;
        default: break;
    }

    ctx->pc = 0x127b00u;

    // 0x127b00: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x127b00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x127b04: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x127b04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x127b08: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x127b08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x127b0c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x127b0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x127b10: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x127b10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x127b14: 0xafa40050  sw          $a0, 0x50($sp)
    ctx->pc = 0x127b14u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 4));
    // 0x127b18: 0x8f828b28  lw          $v0, -0x74D8($gp)
    ctx->pc = 0x127b18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937384)));
    // 0x127b1c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x127B1Cu;
    {
        const bool branch_taken_0x127b1c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x127b1c) {
            ctx->pc = 0x127B30u;
            goto label_127b30;
        }
    }
    ctx->pc = 0x127B24u;
    // 0x127b24: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x127b24u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x127b28: 0x1000007a  b           . + 4 + (0x7A << 2)
    ctx->pc = 0x127B28u;
    {
        const bool branch_taken_0x127b28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x127b28) {
            ctx->pc = 0x127D14u;
            goto label_127d14;
        }
    }
    ctx->pc = 0x127B30u;
label_127b30:
    // 0x127b30: 0x8f83ba10  lw          $v1, -0x45F0($gp)
    ctx->pc = 0x127b30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949392)));
    // 0x127b34: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x127b34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x127b38: 0x14620008  bne         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x127B38u;
    {
        const bool branch_taken_0x127b38 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x127b38) {
            ctx->pc = 0x127B5Cu;
            goto label_127b5c;
        }
    }
    ctx->pc = 0x127B40u;
    // 0x127b40: 0x8f828b24  lw          $v0, -0x74DC($gp)
    ctx->pc = 0x127b40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937380)));
    // 0x127b44: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x127B44u;
    {
        const bool branch_taken_0x127b44 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x127b44) {
            ctx->pc = 0x127B5Cu;
            goto label_127b5c;
        }
    }
    ctx->pc = 0x127B4Cu;
    // 0x127b4c: 0x8f83ba08  lw          $v1, -0x45F8($gp)
    ctx->pc = 0x127b4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949384)));
    // 0x127b50: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x127b50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x127b54: 0x10620011  beq         $v1, $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x127B54u;
    {
        const bool branch_taken_0x127b54 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x127b54) {
            ctx->pc = 0x127B9Cu;
            goto label_127b9c;
        }
    }
    ctx->pc = 0x127B5Cu;
label_127b5c:
    // 0x127b5c: 0x8f83ba10  lw          $v1, -0x45F0($gp)
    ctx->pc = 0x127b5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949392)));
    // 0x127b60: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x127b60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x127b64: 0x1462001e  bne         $v1, $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x127B64u;
    {
        const bool branch_taken_0x127b64 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x127b64) {
            ctx->pc = 0x127BE0u;
            goto label_127be0;
        }
    }
    ctx->pc = 0x127B6Cu;
    // 0x127b6c: 0x8f838b24  lw          $v1, -0x74DC($gp)
    ctx->pc = 0x127b6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937380)));
    // 0x127b70: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x127b70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x127b74: 0x1462001a  bne         $v1, $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x127B74u;
    {
        const bool branch_taken_0x127b74 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x127b74) {
            ctx->pc = 0x127BE0u;
            goto label_127be0;
        }
    }
    ctx->pc = 0x127B7Cu;
    // 0x127b7c: 0x8f83ba08  lw          $v1, -0x45F8($gp)
    ctx->pc = 0x127b7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949384)));
    // 0x127b80: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x127b80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x127b84: 0x14620016  bne         $v1, $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x127B84u;
    {
        const bool branch_taken_0x127b84 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x127b84) {
            ctx->pc = 0x127BE0u;
            goto label_127be0;
        }
    }
    ctx->pc = 0x127B8Cu;
    // 0x127b8c: 0x8f83ba0c  lw          $v1, -0x45F4($gp)
    ctx->pc = 0x127b8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949388)));
    // 0x127b90: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x127b90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x127b94: 0x14620012  bne         $v1, $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x127B94u;
    {
        const bool branch_taken_0x127b94 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x127b94) {
            ctx->pc = 0x127BE0u;
            goto label_127be0;
        }
    }
    ctx->pc = 0x127B9Cu;
label_127b9c:
    // 0x127b9c: 0x8f838b28  lw          $v1, -0x74D8($gp)
    ctx->pc = 0x127b9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937384)));
    // 0x127ba0: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x127ba0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x127ba4: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x127BA4u;
    {
        const bool branch_taken_0x127ba4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x127ba4) {
            ctx->pc = 0x127BBCu;
            goto label_127bbc;
        }
    }
    ctx->pc = 0x127BACu;
    // 0x127bac: 0xaf80ba0c  sw          $zero, -0x45F4($gp)
    ctx->pc = 0x127bacu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294949388), GPR_U32(ctx, 0));
    // 0x127bb0: 0xaf80ba08  sw          $zero, -0x45F8($gp)
    ctx->pc = 0x127bb0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294949384), GPR_U32(ctx, 0));
    // 0x127bb4: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x127BB4u;
    {
        const bool branch_taken_0x127bb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x127bb4) {
            ctx->pc = 0x127BDCu;
            goto label_127bdc;
        }
    }
    ctx->pc = 0x127BBCu;
label_127bbc:
    // 0x127bbc: 0x8f828b28  lw          $v0, -0x74D8($gp)
    ctx->pc = 0x127bbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937384)));
    // 0x127bc0: 0x18400006  blez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x127BC0u;
    {
        const bool branch_taken_0x127bc0 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x127bc0) {
            ctx->pc = 0x127BDCu;
            goto label_127bdc;
        }
    }
    ctx->pc = 0x127BC8u;
    // 0x127bc8: 0xaf80ba0c  sw          $zero, -0x45F4($gp)
    ctx->pc = 0x127bc8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294949388), GPR_U32(ctx, 0));
    // 0x127bcc: 0xaf80ba08  sw          $zero, -0x45F8($gp)
    ctx->pc = 0x127bccu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294949384), GPR_U32(ctx, 0));
    // 0x127bd0: 0x8f828b28  lw          $v0, -0x74D8($gp)
    ctx->pc = 0x127bd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937384)));
    // 0x127bd4: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x127bd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x127bd8: 0xaf828b28  sw          $v0, -0x74D8($gp)
    ctx->pc = 0x127bd8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937384), GPR_U32(ctx, 2));
label_127bdc:
    // 0x127bdc: 0xaf808b24  sw          $zero, -0x74DC($gp)
    ctx->pc = 0x127bdcu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937380), GPR_U32(ctx, 0));
label_127be0:
    // 0x127be0: 0x8f828b24  lw          $v0, -0x74DC($gp)
    ctx->pc = 0x127be0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937380)));
    // 0x127be4: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x127be4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x127be8: 0x2782ba08  addiu       $v0, $gp, -0x45F8
    ctx->pc = 0x127be8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294949384));
    // 0x127bec: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x127becu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x127bf0: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x127bf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x127bf4: 0x14400018  bnez        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x127BF4u;
    {
        const bool branch_taken_0x127bf4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x127bf4) {
            ctx->pc = 0x127C58u;
            goto label_127c58;
        }
    }
    ctx->pc = 0x127BFCu;
    // 0x127bfc: 0x8f858b24  lw          $a1, -0x74DC($gp)
    ctx->pc = 0x127bfcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937380)));
    // 0x127c00: 0x8f838b24  lw          $v1, -0x74DC($gp)
    ctx->pc = 0x127c00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937380)));
    // 0x127c04: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x127c04u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x127c08: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x127c08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x127c0c: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x127c0cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x127c10: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x127c10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
    // 0x127c14: 0x2442b490  addiu       $v0, $v0, -0x4B70
    ctx->pc = 0x127c14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294947984));
    // 0x127c18: 0x433021  addu        $a2, $v0, $v1
    ctx->pc = 0x127c18u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x127c1c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x127c1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x127c20: 0xc117d0c  jal         func_45F430
    ctx->pc = 0x127C20u;
    SET_GPR_U32(ctx, 31, 0x127C28u);
    ctx->pc = 0x45F430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x45F430u, 0x127C20u, 0x127C28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x127C28u;
label_127c28:
    // 0x127c28: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x127c28u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x127c2c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x127c2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x127c30: 0x16020037  bne         $s0, $v0, . + 4 + (0x37 << 2)
    ctx->pc = 0x127C30u;
    {
        const bool branch_taken_0x127c30 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x127c30) {
            ctx->pc = 0x127D10u;
            goto label_127d10;
        }
    }
    ctx->pc = 0x127C38u;
    // 0x127c38: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x127c38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x127c3c: 0x8f828b24  lw          $v0, -0x74DC($gp)
    ctx->pc = 0x127c3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937380)));
    // 0x127c40: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x127c40u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x127c44: 0x2782ba08  addiu       $v0, $gp, -0x45F8
    ctx->pc = 0x127c44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294949384));
    // 0x127c48: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x127c48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x127c4c: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x127c4cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
    // 0x127c50: 0x1000002f  b           . + 4 + (0x2F << 2)
    ctx->pc = 0x127C50u;
    {
        const bool branch_taken_0x127c50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x127c50) {
            ctx->pc = 0x127D10u;
            goto label_127d10;
        }
    }
    ctx->pc = 0x127C58u;
label_127c58:
    // 0x127c58: 0x8f828b24  lw          $v0, -0x74DC($gp)
    ctx->pc = 0x127c58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937380)));
    // 0x127c5c: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x127c5cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x127c60: 0x2782ba08  addiu       $v0, $gp, -0x45F8
    ctx->pc = 0x127c60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294949384));
    // 0x127c64: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x127c64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x127c68: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x127c68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x127c6c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x127c6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x127c70: 0x14620027  bne         $v1, $v0, . + 4 + (0x27 << 2)
    ctx->pc = 0x127C70u;
    {
        const bool branch_taken_0x127c70 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x127c70) {
            ctx->pc = 0x127D10u;
            goto label_127d10;
        }
    }
    ctx->pc = 0x127C78u;
    // 0x127c78: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x127c78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x127c7c: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x127c7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x127c80: 0xc117c14  jal         func_45F050
    ctx->pc = 0x127C80u;
    SET_GPR_U32(ctx, 31, 0x127C88u);
    ctx->pc = 0x45F050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x45F050u, 0x127C80u, 0x127C88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x127C88u;
label_127c88:
    // 0x127c88: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x127c88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x127c8c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x127c8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x127c90: 0x1062001f  beq         $v1, $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x127C90u;
    {
        const bool branch_taken_0x127c90 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x127c90) {
            ctx->pc = 0x127D10u;
            goto label_127d10;
        }
    }
    ctx->pc = 0x127C98u;
    // 0x127c98: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x127c98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x127c9c: 0x8f828b24  lw          $v0, -0x74DC($gp)
    ctx->pc = 0x127c9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937380)));
    // 0x127ca0: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x127ca0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x127ca4: 0x2782ba08  addiu       $v0, $gp, -0x45F8
    ctx->pc = 0x127ca4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294949384));
    // 0x127ca8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x127ca8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x127cac: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x127cacu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
    // 0x127cb0: 0xc117bcc  jal         func_45EF30
    ctx->pc = 0x127CB0u;
    SET_GPR_U32(ctx, 31, 0x127CB8u);
    ctx->pc = 0x45EF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x45EF30u, 0x127CB0u, 0x127CB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x127CB8u;
label_127cb8:
    // 0x127cb8: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x127cb8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x127cbc: 0x8f828b24  lw          $v0, -0x74DC($gp)
    ctx->pc = 0x127cbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937380)));
    // 0x127cc0: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x127CC0u;
    {
        const bool branch_taken_0x127cc0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x127cc0) {
            ctx->pc = 0x127CE8u;
            goto label_127ce8;
        }
    }
    ctx->pc = 0x127CC8u;
    // 0x127cc8: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x127cc8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x127ccc: 0x3c050061  lui         $a1, 0x61
    ctx->pc = 0x127cccu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)97 << 16));
    // 0x127cd0: 0x24a5b490  addiu       $a1, $a1, -0x4B70
    ctx->pc = 0x127cd0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294947984));
    // 0x127cd4: 0xc049fbc  jal         func_127EF0
    ctx->pc = 0x127CD4u;
    SET_GPR_U32(ctx, 31, 0x127CDCu);
    ctx->pc = 0x127EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127EF0u, 0x127CD4u, 0x127CDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x127CDCu;
label_127cdc:
    // 0x127cdc: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x127CDCu;
    {
        const bool branch_taken_0x127cdc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x127cdc) {
            ctx->pc = 0x127CE8u;
            goto label_127ce8;
        }
    }
    ctx->pc = 0x127CE4u;
    // 0x127ce4: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x127ce4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_127ce8:
    // 0x127ce8: 0x8f82ba10  lw          $v0, -0x45F0($gp)
    ctx->pc = 0x127ce8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949392)));
    // 0x127cec: 0x2c410002  sltiu       $at, $v0, 0x2
    ctx->pc = 0x127cecu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x127cf0: 0x14200007  bnez        $at, . + 4 + (0x7 << 2)
    ctx->pc = 0x127CF0u;
    {
        const bool branch_taken_0x127cf0 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x127cf0) {
            ctx->pc = 0x127D10u;
            goto label_127d10;
        }
    }
    ctx->pc = 0x127CF8u;
    // 0x127cf8: 0x8f828b24  lw          $v0, -0x74DC($gp)
    ctx->pc = 0x127cf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937380)));
    // 0x127cfc: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x127CFCu;
    {
        const bool branch_taken_0x127cfc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x127cfc) {
            ctx->pc = 0x127D10u;
            goto label_127d10;
        }
    }
    ctx->pc = 0x127D04u;
    // 0x127d04: 0x8f828b24  lw          $v0, -0x74DC($gp)
    ctx->pc = 0x127d04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937380)));
    // 0x127d08: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x127d08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x127d0c: 0xaf828b24  sw          $v0, -0x74DC($gp)
    ctx->pc = 0x127d0cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937380), GPR_U32(ctx, 2));
label_127d10:
    // 0x127d10: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x127d10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_127d14:
    // 0x127d14: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x127d14u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x127d18: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x127d18u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x127d1c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x127d1cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x127d20: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x127d20u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x127d24: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x127d24u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x127d28: 0x3e00008  jr          $ra
    ctx->pc = 0x127D28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x127D28u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x127D30u;
}
