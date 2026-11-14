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

// Function: sub_0025BD60
// Address: 0x25bd60 - 0x25be70
void sub_0025BD60_0x25bd60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0025BD60_0x25bd60");
#endif

    ctx->pc = 0x25bd60u;

    // 0x25bd60: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x25bd60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x25bd64: 0xafa50010  sw          $a1, 0x10($sp)
    ctx->pc = 0x25bd64u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 5));
    // 0x25bd68: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x25bd68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25bd6c: 0x2c410012  sltiu       $at, $v0, 0x12
    ctx->pc = 0x25bd6cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)18) ? 1 : 0);
    // 0x25bd70: 0x10200038  beqz        $at, . + 4 + (0x38 << 2)
    ctx->pc = 0x25BD70u;
    {
        const bool branch_taken_0x25bd70 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x25bd70) {
            ctx->pc = 0x25BE54u;
            goto label_25be54;
        }
    }
    ctx->pc = 0x25BD78u;
    // 0x25bd78: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x25bd78u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x25bd7c: 0x24638a30  addiu       $v1, $v1, -0x75D0
    ctx->pc = 0x25bd7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294937136));
    // 0x25bd80: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x25bd80u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x25bd84: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x25bd84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x25bd88: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x25bd88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x25bd8c: 0x400008  jr          $v0
    ctx->pc = 0x25BD8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x25BD94u: goto label_25bd94;
            case 0x25BDA0u: goto label_25bda0;
            case 0x25BDACu: goto label_25bdac;
            case 0x25BDB8u: goto label_25bdb8;
            case 0x25BDC4u: goto label_25bdc4;
            case 0x25BDD0u: goto label_25bdd0;
            case 0x25BDDCu: goto label_25bddc;
            case 0x25BDE8u: goto label_25bde8;
            case 0x25BDF4u: goto label_25bdf4;
            case 0x25BE00u: goto label_25be00;
            case 0x25BE0Cu: goto label_25be0c;
            case 0x25BE18u: goto label_25be18;
            case 0x25BE24u: goto label_25be24;
            case 0x25BE30u: goto label_25be30;
            case 0x25BE3Cu: goto label_25be3c;
            case 0x25BE48u: goto label_25be48;
            case 0x25BE54u: goto label_25be54;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25BD8Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x25BD94u;
label_25bd94:
    // 0x25bd94: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x25bd94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x25bd98: 0x1000002f  b           . + 4 + (0x2F << 2)
    ctx->pc = 0x25BD98u;
    {
        const bool branch_taken_0x25bd98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x25bd98) {
            ctx->pc = 0x25BE58u;
            goto label_25be58;
        }
    }
    ctx->pc = 0x25BDA0u;
label_25bda0:
    // 0x25bda0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x25bda0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x25bda4: 0x1000002c  b           . + 4 + (0x2C << 2)
    ctx->pc = 0x25BDA4u;
    {
        const bool branch_taken_0x25bda4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x25bda4) {
            ctx->pc = 0x25BE58u;
            goto label_25be58;
        }
    }
    ctx->pc = 0x25BDACu;
label_25bdac:
    // 0x25bdac: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x25bdacu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25bdb0: 0x10000029  b           . + 4 + (0x29 << 2)
    ctx->pc = 0x25BDB0u;
    {
        const bool branch_taken_0x25bdb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x25bdb0) {
            ctx->pc = 0x25BE58u;
            goto label_25be58;
        }
    }
    ctx->pc = 0x25BDB8u;
label_25bdb8:
    // 0x25bdb8: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x25bdb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x25bdbc: 0x10000026  b           . + 4 + (0x26 << 2)
    ctx->pc = 0x25BDBCu;
    {
        const bool branch_taken_0x25bdbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x25bdbc) {
            ctx->pc = 0x25BE58u;
            goto label_25be58;
        }
    }
    ctx->pc = 0x25BDC4u;
label_25bdc4:
    // 0x25bdc4: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x25bdc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x25bdc8: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x25BDC8u;
    {
        const bool branch_taken_0x25bdc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x25bdc8) {
            ctx->pc = 0x25BE58u;
            goto label_25be58;
        }
    }
    ctx->pc = 0x25BDD0u;
label_25bdd0:
    // 0x25bdd0: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x25bdd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x25bdd4: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x25BDD4u;
    {
        const bool branch_taken_0x25bdd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x25bdd4) {
            ctx->pc = 0x25BE58u;
            goto label_25be58;
        }
    }
    ctx->pc = 0x25BDDCu;
label_25bddc:
    // 0x25bddc: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x25bddcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x25bde0: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x25BDE0u;
    {
        const bool branch_taken_0x25bde0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x25bde0) {
            ctx->pc = 0x25BE58u;
            goto label_25be58;
        }
    }
    ctx->pc = 0x25BDE8u;
label_25bde8:
    // 0x25bde8: 0x2402000b  addiu       $v0, $zero, 0xB
    ctx->pc = 0x25bde8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x25bdec: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x25BDECu;
    {
        const bool branch_taken_0x25bdec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x25bdec) {
            ctx->pc = 0x25BE58u;
            goto label_25be58;
        }
    }
    ctx->pc = 0x25BDF4u;
label_25bdf4:
    // 0x25bdf4: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x25bdf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x25bdf8: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x25BDF8u;
    {
        const bool branch_taken_0x25bdf8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x25bdf8) {
            ctx->pc = 0x25BE58u;
            goto label_25be58;
        }
    }
    ctx->pc = 0x25BE00u;
label_25be00:
    // 0x25be00: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x25be00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x25be04: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x25BE04u;
    {
        const bool branch_taken_0x25be04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x25be04) {
            ctx->pc = 0x25BE58u;
            goto label_25be58;
        }
    }
    ctx->pc = 0x25BE0Cu;
label_25be0c:
    // 0x25be0c: 0x2402000d  addiu       $v0, $zero, 0xD
    ctx->pc = 0x25be0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x25be10: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x25BE10u;
    {
        const bool branch_taken_0x25be10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x25be10) {
            ctx->pc = 0x25BE58u;
            goto label_25be58;
        }
    }
    ctx->pc = 0x25BE18u;
label_25be18:
    // 0x25be18: 0x2402000e  addiu       $v0, $zero, 0xE
    ctx->pc = 0x25be18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x25be1c: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x25BE1Cu;
    {
        const bool branch_taken_0x25be1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x25be1c) {
            ctx->pc = 0x25BE58u;
            goto label_25be58;
        }
    }
    ctx->pc = 0x25BE24u;
label_25be24:
    // 0x25be24: 0x2402000f  addiu       $v0, $zero, 0xF
    ctx->pc = 0x25be24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x25be28: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x25BE28u;
    {
        const bool branch_taken_0x25be28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x25be28) {
            ctx->pc = 0x25BE58u;
            goto label_25be58;
        }
    }
    ctx->pc = 0x25BE30u;
label_25be30:
    // 0x25be30: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x25be30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x25be34: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x25BE34u;
    {
        const bool branch_taken_0x25be34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x25be34) {
            ctx->pc = 0x25BE58u;
            goto label_25be58;
        }
    }
    ctx->pc = 0x25BE3Cu;
label_25be3c:
    // 0x25be3c: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x25be3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x25be40: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x25BE40u;
    {
        const bool branch_taken_0x25be40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x25be40) {
            ctx->pc = 0x25BE58u;
            goto label_25be58;
        }
    }
    ctx->pc = 0x25BE48u;
label_25be48:
    // 0x25be48: 0x24020011  addiu       $v0, $zero, 0x11
    ctx->pc = 0x25be48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x25be4c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x25BE4Cu;
    {
        const bool branch_taken_0x25be4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x25be4c) {
            ctx->pc = 0x25BE58u;
            goto label_25be58;
        }
    }
    ctx->pc = 0x25BE54u;
label_25be54:
    // 0x25be54: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x25be54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_25be58:
    // 0x25be58: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x25be58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x25be5c: 0x3e00008  jr          $ra
    ctx->pc = 0x25BE5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25BE5Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25BE64u;
    // 0x25be64: 0x0  nop
    ctx->pc = 0x25be64u;
    // NOP
    // 0x25be68: 0x0  nop
    ctx->pc = 0x25be68u;
    // NOP
    // 0x25be6c: 0x0  nop
    ctx->pc = 0x25be6cu;
    // NOP
    ctx->pc = 0x25be70u;
}
