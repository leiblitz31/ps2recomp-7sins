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

// Function: sub_00136AB0
// Address: 0x136ab0 - 0x136f10
void sub_00136AB0_0x136ab0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00136AB0_0x136ab0");
#endif

    switch (ctx->pc) {
        case 0x136b20u: goto label_136b20;
        case 0x136b88u: goto label_136b88;
        case 0x136ba0u: goto label_136ba0;
        case 0x136bc8u: goto label_136bc8;
        case 0x136be0u: goto label_136be0;
        case 0x136d1cu: goto label_136d1c;
        case 0x136d30u: goto label_136d30;
        case 0x136d50u: goto label_136d50;
        case 0x136d64u: goto label_136d64;
        case 0x136d8cu: goto label_136d8c;
        case 0x136da4u: goto label_136da4;
        case 0x136e54u: goto label_136e54;
        case 0x136e6cu: goto label_136e6c;
        case 0x136e78u: goto label_136e78;
        case 0x136e90u: goto label_136e90;
        case 0x136e9cu: goto label_136e9c;
        case 0x136eb4u: goto label_136eb4;
        case 0x136ef4u: goto label_136ef4;
        default: break;
    }

    ctx->pc = 0x136ab0u;

    // 0x136ab0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x136ab0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x136ab4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x136ab4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x136ab8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x136ab8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x136abc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x136abcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x136ac0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x136ac0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x136ac4: 0xafa40040  sw          $a0, 0x40($sp)
    ctx->pc = 0x136ac4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 4));
    // 0x136ac8: 0xafa50050  sw          $a1, 0x50($sp)
    ctx->pc = 0x136ac8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 5));
    // 0x136acc: 0xafa60060  sw          $a2, 0x60($sp)
    ctx->pc = 0x136accu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 6));
    // 0x136ad0: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x136ad0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x136ad4: 0x8c64004c  lw          $a0, 0x4C($v1)
    ctx->pc = 0x136ad4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 76)));
    // 0x136ad8: 0x8fa30050  lw          $v1, 0x50($sp)
    ctx->pc = 0x136ad8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x136adc: 0x14830042  bne         $a0, $v1, . + 4 + (0x42 << 2)
    ctx->pc = 0x136ADCu;
    {
        const bool branch_taken_0x136adc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x136adc) {
            ctx->pc = 0x136BE8u;
            goto label_136be8;
        }
    }
    ctx->pc = 0x136AE4u;
    // 0x136ae4: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x136ae4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x136ae8: 0x90630040  lbu         $v1, 0x40($v1)
    ctx->pc = 0x136ae8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 64)));
    // 0x136aec: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x136aecu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x136af0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x136af0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x136af4: 0x1483003a  bne         $a0, $v1, . + 4 + (0x3A << 2)
    ctx->pc = 0x136AF4u;
    {
        const bool branch_taken_0x136af4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x136af4) {
            ctx->pc = 0x136BE0u;
            goto label_136be0;
        }
    }
    ctx->pc = 0x136AFCu;
    // 0x136afc: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x136afcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x136b00: 0x8c64004c  lw          $a0, 0x4C($v1)
    ctx->pc = 0x136b00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 76)));
    // 0x136b04: 0x24030047  addiu       $v1, $zero, 0x47
    ctx->pc = 0x136b04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
    // 0x136b08: 0x14830035  bne         $a0, $v1, . + 4 + (0x35 << 2)
    ctx->pc = 0x136B08u;
    {
        const bool branch_taken_0x136b08 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x136b08) {
            ctx->pc = 0x136BE0u;
            goto label_136be0;
        }
    }
    ctx->pc = 0x136B10u;
    // 0x136b10: 0x8f84bbb4  lw          $a0, -0x444C($gp)
    ctx->pc = 0x136b10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949812)));
    // 0x136b14: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x136b14u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x136b18: 0xc08d95c  jal         func_236570
    ctx->pc = 0x136B18u;
    SET_GPR_U32(ctx, 31, 0x136B20u);
    ctx->pc = 0x236570u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x236570u, 0x136B18u, 0x136B20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x136B20u;
label_136b20:
    // 0x136b20: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x136b20u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x136b24: 0x2622ffb9  addiu       $v0, $s1, -0x47
    ctx->pc = 0x136b24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967225));
    // 0x136b28: 0x2c410006  sltiu       $at, $v0, 0x6
    ctx->pc = 0x136b28u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
    // 0x136b2c: 0x1020001e  beqz        $at, . + 4 + (0x1E << 2)
    ctx->pc = 0x136B2Cu;
    {
        const bool branch_taken_0x136b2c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x136b2c) {
            ctx->pc = 0x136BA8u;
            goto label_136ba8;
        }
    }
    ctx->pc = 0x136B34u;
    // 0x136b34: 0x3c03005f  lui         $v1, 0x5F
    ctx->pc = 0x136b34u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)95 << 16));
    // 0x136b38: 0x24637f90  addiu       $v1, $v1, 0x7F90
    ctx->pc = 0x136b38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32656));
    // 0x136b3c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x136b3cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x136b40: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x136b40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x136b44: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x136b44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x136b48: 0x400008  jr          $v0
    ctx->pc = 0x136B48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x136B50u: goto label_136b50;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x136B48u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x136B50u;
label_136b50:
    // 0x136b50: 0x2623ffba  addiu       $v1, $s1, -0x46
    ctx->pc = 0x136b50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967226));
    // 0x136b54: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x136b54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x136b58: 0xac430038  sw          $v1, 0x38($v0)
    ctx->pc = 0x136b58u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 56), GPR_U32(ctx, 3));
    // 0x136b5c: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x136b5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x136b60: 0x8c420038  lw          $v0, 0x38($v0)
    ctx->pc = 0x136b60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 56)));
    // 0x136b64: 0x2443ffff  addiu       $v1, $v0, -0x1
    ctx->pc = 0x136b64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x136b68: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x136b68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x136b6c: 0xac430034  sw          $v1, 0x34($v0)
    ctx->pc = 0x136b6cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 52), GPR_U32(ctx, 3));
    // 0x136b70: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x136b70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x136b74: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x136b74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x136b78: 0xa0430048  sb          $v1, 0x48($v0)
    ctx->pc = 0x136b78u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 72), (uint8_t)GPR_U32(ctx, 3));
    // 0x136b7c: 0x8f84bbb4  lw          $a0, -0x444C($gp)
    ctx->pc = 0x136b7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949812)));
    // 0x136b80: 0xc047eb8  jal         func_11FAE0
    ctx->pc = 0x136B80u;
    SET_GPR_U32(ctx, 31, 0x136B88u);
    ctx->pc = 0x11FAE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FAE0u, 0x136B80u, 0x136B88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x136B88u;
label_136b88:
    // 0x136b88: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x136b88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x136b8c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x136b8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x136b90: 0x24050533  addiu       $a1, $zero, 0x533
    ctx->pc = 0x136b90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1331));
    // 0x136b94: 0x8c660034  lw          $a2, 0x34($v1)
    ctx->pc = 0x136b94u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
    // 0x136b98: 0xc040924  jal         func_102490
    ctx->pc = 0x136B98u;
    SET_GPR_U32(ctx, 31, 0x136BA0u);
    ctx->pc = 0x102490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102490u, 0x136B98u, 0x136BA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x136BA0u;
label_136ba0:
    // 0x136ba0: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x136BA0u;
    {
        const bool branch_taken_0x136ba0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x136ba0) {
            ctx->pc = 0x136BE0u;
            goto label_136be0;
        }
    }
    ctx->pc = 0x136BA8u;
label_136ba8:
    // 0x136ba8: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x136ba8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x136bac: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x136bacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x136bb0: 0xac430034  sw          $v1, 0x34($v0)
    ctx->pc = 0x136bb0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 52), GPR_U32(ctx, 3));
    // 0x136bb4: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x136bb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x136bb8: 0xac430038  sw          $v1, 0x38($v0)
    ctx->pc = 0x136bb8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 56), GPR_U32(ctx, 3));
    // 0x136bbc: 0x8f84bbb4  lw          $a0, -0x444C($gp)
    ctx->pc = 0x136bbcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949812)));
    // 0x136bc0: 0xc047eb8  jal         func_11FAE0
    ctx->pc = 0x136BC0u;
    SET_GPR_U32(ctx, 31, 0x136BC8u);
    ctx->pc = 0x11FAE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FAE0u, 0x136BC0u, 0x136BC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x136BC8u;
label_136bc8:
    // 0x136bc8: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x136bc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x136bcc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x136bccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x136bd0: 0x24050533  addiu       $a1, $zero, 0x533
    ctx->pc = 0x136bd0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1331));
    // 0x136bd4: 0x8c660034  lw          $a2, 0x34($v1)
    ctx->pc = 0x136bd4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
    // 0x136bd8: 0xc040924  jal         func_102490
    ctx->pc = 0x136BD8u;
    SET_GPR_U32(ctx, 31, 0x136BE0u);
    ctx->pc = 0x102490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102490u, 0x136BD8u, 0x136BE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x136BE0u;
label_136be0:
    // 0x136be0: 0x100000c4  b           . + 4 + (0xC4 << 2)
    ctx->pc = 0x136BE0u;
    {
        const bool branch_taken_0x136be0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x136be0) {
            ctx->pc = 0x136EF4u;
            goto label_136ef4;
        }
    }
    ctx->pc = 0x136BE8u;
label_136be8:
    // 0x136be8: 0x8fa30050  lw          $v1, 0x50($sp)
    ctx->pc = 0x136be8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x136bec: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x136becu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x136bf0: 0xac43004c  sw          $v1, 0x4C($v0)
    ctx->pc = 0x136bf0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 76), GPR_U32(ctx, 3));
    // 0x136bf4: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x136bf4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x136bf8: 0x8fa30050  lw          $v1, 0x50($sp)
    ctx->pc = 0x136bf8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x136bfc: 0x24020047  addiu       $v0, $zero, 0x47
    ctx->pc = 0x136bfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
    // 0x136c00: 0x1062003c  beq         $v1, $v0, . + 4 + (0x3C << 2)
    ctx->pc = 0x136C00u;
    {
        const bool branch_taken_0x136c00 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x136c00) {
            ctx->pc = 0x136CF4u;
            goto label_136cf4;
        }
    }
    ctx->pc = 0x136C08u;
    // 0x136c08: 0x2402003d  addiu       $v0, $zero, 0x3D
    ctx->pc = 0x136c08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 61));
    // 0x136c0c: 0x10620034  beq         $v1, $v0, . + 4 + (0x34 << 2)
    ctx->pc = 0x136C0Cu;
    {
        const bool branch_taken_0x136c0c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x136c0c) {
            ctx->pc = 0x136CE0u;
            goto label_136ce0;
        }
    }
    ctx->pc = 0x136C14u;
    // 0x136c14: 0x24020033  addiu       $v0, $zero, 0x33
    ctx->pc = 0x136c14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 51));
    // 0x136c18: 0x1062002c  beq         $v1, $v0, . + 4 + (0x2C << 2)
    ctx->pc = 0x136C18u;
    {
        const bool branch_taken_0x136c18 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x136c18) {
            ctx->pc = 0x136CCCu;
            goto label_136ccc;
        }
    }
    ctx->pc = 0x136C20u;
    // 0x136c20: 0x24020029  addiu       $v0, $zero, 0x29
    ctx->pc = 0x136c20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 41));
    // 0x136c24: 0x10620024  beq         $v1, $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x136C24u;
    {
        const bool branch_taken_0x136c24 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x136c24) {
            ctx->pc = 0x136CB8u;
            goto label_136cb8;
        }
    }
    ctx->pc = 0x136C2Cu;
    // 0x136c2c: 0x2402001f  addiu       $v0, $zero, 0x1F
    ctx->pc = 0x136c2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x136c30: 0x1062001c  beq         $v1, $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x136C30u;
    {
        const bool branch_taken_0x136c30 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x136c30) {
            ctx->pc = 0x136CA4u;
            goto label_136ca4;
        }
    }
    ctx->pc = 0x136C38u;
    // 0x136c38: 0x24020015  addiu       $v0, $zero, 0x15
    ctx->pc = 0x136c38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x136c3c: 0x10620013  beq         $v1, $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x136C3Cu;
    {
        const bool branch_taken_0x136c3c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x136c3c) {
            ctx->pc = 0x136C8Cu;
            goto label_136c8c;
        }
    }
    ctx->pc = 0x136C44u;
    // 0x136c44: 0x2402000b  addiu       $v0, $zero, 0xB
    ctx->pc = 0x136c44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x136c48: 0x1062000b  beq         $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x136C48u;
    {
        const bool branch_taken_0x136c48 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x136c48) {
            ctx->pc = 0x136C78u;
            goto label_136c78;
        }
    }
    ctx->pc = 0x136C50u;
    // 0x136c50: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x136c50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x136c54: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x136C54u;
    {
        const bool branch_taken_0x136c54 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x136c54) {
            ctx->pc = 0x136C64u;
            goto label_136c64;
        }
    }
    ctx->pc = 0x136C5Cu;
    // 0x136c5c: 0x1000002a  b           . + 4 + (0x2A << 2)
    ctx->pc = 0x136C5Cu;
    {
        const bool branch_taken_0x136c5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x136c5c) {
            ctx->pc = 0x136D08u;
            goto label_136d08;
        }
    }
    ctx->pc = 0x136C64u;
label_136c64:
    // 0x136c64: 0x2403000c  addiu       $v1, $zero, 0xC
    ctx->pc = 0x136c64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x136c68: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x136c68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x136c6c: 0xac43003c  sw          $v1, 0x3C($v0)
    ctx->pc = 0x136c6cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 60), GPR_U32(ctx, 3));
    // 0x136c70: 0x10000027  b           . + 4 + (0x27 << 2)
    ctx->pc = 0x136C70u;
    {
        const bool branch_taken_0x136c70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x136c70) {
            ctx->pc = 0x136D10u;
            goto label_136d10;
        }
    }
    ctx->pc = 0x136C78u;
label_136c78:
    // 0x136c78: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x136c78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x136c7c: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x136c7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x136c80: 0xac43003c  sw          $v1, 0x3C($v0)
    ctx->pc = 0x136c80u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 60), GPR_U32(ctx, 3));
    // 0x136c84: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x136C84u;
    {
        const bool branch_taken_0x136c84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x136c84) {
            ctx->pc = 0x136D10u;
            goto label_136d10;
        }
    }
    ctx->pc = 0x136C8Cu;
label_136c8c:
    // 0x136c8c: 0x2403000c  addiu       $v1, $zero, 0xC
    ctx->pc = 0x136c8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x136c90: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x136c90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x136c94: 0xac43003c  sw          $v1, 0x3C($v0)
    ctx->pc = 0x136c94u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 60), GPR_U32(ctx, 3));
    // 0x136c98: 0x24100002  addiu       $s0, $zero, 0x2
    ctx->pc = 0x136c98u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x136c9c: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x136C9Cu;
    {
        const bool branch_taken_0x136c9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x136c9c) {
            ctx->pc = 0x136D10u;
            goto label_136d10;
        }
    }
    ctx->pc = 0x136CA4u;
label_136ca4:
    // 0x136ca4: 0x2403000f  addiu       $v1, $zero, 0xF
    ctx->pc = 0x136ca4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x136ca8: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x136ca8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x136cac: 0xac43003c  sw          $v1, 0x3C($v0)
    ctx->pc = 0x136cacu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 60), GPR_U32(ctx, 3));
    // 0x136cb0: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x136CB0u;
    {
        const bool branch_taken_0x136cb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x136cb0) {
            ctx->pc = 0x136D10u;
            goto label_136d10;
        }
    }
    ctx->pc = 0x136CB8u;
label_136cb8:
    // 0x136cb8: 0x24030009  addiu       $v1, $zero, 0x9
    ctx->pc = 0x136cb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x136cbc: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x136cbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x136cc0: 0xac43003c  sw          $v1, 0x3C($v0)
    ctx->pc = 0x136cc0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 60), GPR_U32(ctx, 3));
    // 0x136cc4: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x136CC4u;
    {
        const bool branch_taken_0x136cc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x136cc4) {
            ctx->pc = 0x136D10u;
            goto label_136d10;
        }
    }
    ctx->pc = 0x136CCCu;
label_136ccc:
    // 0x136ccc: 0x24030012  addiu       $v1, $zero, 0x12
    ctx->pc = 0x136cccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x136cd0: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x136cd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x136cd4: 0xac43003c  sw          $v1, 0x3C($v0)
    ctx->pc = 0x136cd4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 60), GPR_U32(ctx, 3));
    // 0x136cd8: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x136CD8u;
    {
        const bool branch_taken_0x136cd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x136cd8) {
            ctx->pc = 0x136D10u;
            goto label_136d10;
        }
    }
    ctx->pc = 0x136CE0u;
label_136ce0:
    // 0x136ce0: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x136ce0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x136ce4: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x136ce4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x136ce8: 0xac43003c  sw          $v1, 0x3C($v0)
    ctx->pc = 0x136ce8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 60), GPR_U32(ctx, 3));
    // 0x136cec: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x136CECu;
    {
        const bool branch_taken_0x136cec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x136cec) {
            ctx->pc = 0x136D10u;
            goto label_136d10;
        }
    }
    ctx->pc = 0x136CF4u;
label_136cf4:
    // 0x136cf4: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x136cf4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x136cf8: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x136cf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x136cfc: 0xac43003c  sw          $v1, 0x3C($v0)
    ctx->pc = 0x136cfcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 60), GPR_U32(ctx, 3));
    // 0x136d00: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x136D00u;
    {
        const bool branch_taken_0x136d00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x136d00) {
            ctx->pc = 0x136D10u;
            goto label_136d10;
        }
    }
    ctx->pc = 0x136D08u;
label_136d08:
    // 0x136d08: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x136d08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x136d0c: 0xac40003c  sw          $zero, 0x3C($v0)
    ctx->pc = 0x136d0cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 60), GPR_U32(ctx, 0));
label_136d10:
    // 0x136d10: 0x8f84bbb4  lw          $a0, -0x444C($gp)
    ctx->pc = 0x136d10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949812)));
    // 0x136d14: 0xc047eb8  jal         func_11FAE0
    ctx->pc = 0x136D14u;
    SET_GPR_U32(ctx, 31, 0x136D1Cu);
    ctx->pc = 0x11FAE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FAE0u, 0x136D14u, 0x136D1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x136D1Cu;
label_136d1c:
    // 0x136d1c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x136d1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x136d20: 0x24050532  addiu       $a1, $zero, 0x532
    ctx->pc = 0x136d20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1330));
    // 0x136d24: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x136d24u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x136d28: 0xc040ab0  jal         func_102AC0
    ctx->pc = 0x136D28u;
    SET_GPR_U32(ctx, 31, 0x136D30u);
    ctx->pc = 0x102AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102AC0u, 0x136D28u, 0x136D30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x136D30u;
label_136d30:
    // 0x136d30: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x136d30u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x136d34: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x136d34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x136d38: 0x8c42004c  lw          $v0, 0x4C($v0)
    ctx->pc = 0x136d38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 76)));
    // 0x136d3c: 0x1642003b  bne         $s2, $v0, . + 4 + (0x3B << 2)
    ctx->pc = 0x136D3Cu;
    {
        const bool branch_taken_0x136d3c = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        if (branch_taken_0x136d3c) {
            ctx->pc = 0x136E2Cu;
            goto label_136e2c;
        }
    }
    ctx->pc = 0x136D44u;
    // 0x136d44: 0x8f84bbb4  lw          $a0, -0x444C($gp)
    ctx->pc = 0x136d44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949812)));
    // 0x136d48: 0xc047eb8  jal         func_11FAE0
    ctx->pc = 0x136D48u;
    SET_GPR_U32(ctx, 31, 0x136D50u);
    ctx->pc = 0x11FAE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FAE0u, 0x136D48u, 0x136D50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x136D50u;
label_136d50:
    // 0x136d50: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x136d50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x136d54: 0x24050533  addiu       $a1, $zero, 0x533
    ctx->pc = 0x136d54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1331));
    // 0x136d58: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x136d58u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x136d5c: 0xc040ab0  jal         func_102AC0
    ctx->pc = 0x136D5Cu;
    SET_GPR_U32(ctx, 31, 0x136D64u);
    ctx->pc = 0x102AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102AC0u, 0x136D5Cu, 0x136D64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x136D64u;
label_136d64:
    // 0x136d64: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x136d64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x136d68: 0xac620034  sw          $v0, 0x34($v1)
    ctx->pc = 0x136d68u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 52), GPR_U32(ctx, 2));
    // 0x136d6c: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x136d6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x136d70: 0x8c630034  lw          $v1, 0x34($v1)
    ctx->pc = 0x136d70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
    // 0x136d74: 0x60082a  slt         $at, $v1, $zero
    ctx->pc = 0x136d74u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 0)) ? 1 : 0);
    // 0x136d78: 0x1020000c  beqz        $at, . + 4 + (0xC << 2)
    ctx->pc = 0x136D78u;
    {
        const bool branch_taken_0x136d78 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x136d78) {
            ctx->pc = 0x136DACu;
            goto label_136dac;
        }
    }
    ctx->pc = 0x136D80u;
    // 0x136d80: 0x8f84bbb4  lw          $a0, -0x444C($gp)
    ctx->pc = 0x136d80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949812)));
    // 0x136d84: 0xc047eb8  jal         func_11FAE0
    ctx->pc = 0x136D84u;
    SET_GPR_U32(ctx, 31, 0x136D8Cu);
    ctx->pc = 0x11FAE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FAE0u, 0x136D84u, 0x136D8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x136D8Cu;
label_136d8c:
    // 0x136d8c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x136d8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x136d90: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x136d90u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
    // 0x136d94: 0x24a526a0  addiu       $a1, $a1, 0x26A0
    ctx->pc = 0x136d94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 9888));
    // 0x136d98: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x136d98u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x136d9c: 0xc047970  jal         func_11E5C0
    ctx->pc = 0x136D9Cu;
    SET_GPR_U32(ctx, 31, 0x136DA4u);
    ctx->pc = 0x11E5C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11E5C0u, 0x136D9Cu, 0x136DA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x136DA4u;
label_136da4:
    // 0x136da4: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x136da4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x136da8: 0xac620034  sw          $v0, 0x34($v1)
    ctx->pc = 0x136da8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 52), GPR_U32(ctx, 2));
label_136dac:
    // 0x136dac: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x136dacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x136db0: 0x8c640034  lw          $a0, 0x34($v1)
    ctx->pc = 0x136db0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
    // 0x136db4: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x136db4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x136db8: 0xac640038  sw          $a0, 0x38($v1)
    ctx->pc = 0x136db8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 56), GPR_U32(ctx, 4));
    // 0x136dbc: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x136dbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x136dc0: 0x8c630038  lw          $v1, 0x38($v1)
    ctx->pc = 0x136dc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 56)));
    // 0x136dc4: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x136DC4u;
    {
        const bool branch_taken_0x136dc4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x136dc4) {
            ctx->pc = 0x136DDCu;
            goto label_136ddc;
        }
    }
    ctx->pc = 0x136DCCu;
    // 0x136dcc: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x136dccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x136dd0: 0x8c830038  lw          $v1, 0x38($a0)
    ctx->pc = 0x136dd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 56)));
    // 0x136dd4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x136dd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x136dd8: 0xac830038  sw          $v1, 0x38($a0)
    ctx->pc = 0x136dd8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 56), GPR_U32(ctx, 3));
label_136ddc:
    // 0x136ddc: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x136ddcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x136de0: 0x8c64004c  lw          $a0, 0x4C($v1)
    ctx->pc = 0x136de0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 76)));
    // 0x136de4: 0x24030047  addiu       $v1, $zero, 0x47
    ctx->pc = 0x136de4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
    // 0x136de8: 0x1483000b  bne         $a0, $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x136DE8u;
    {
        const bool branch_taken_0x136de8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x136de8) {
            ctx->pc = 0x136E18u;
            goto label_136e18;
        }
    }
    ctx->pc = 0x136DF0u;
    // 0x136df0: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x136df0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x136df4: 0x8c630038  lw          $v1, 0x38($v1)
    ctx->pc = 0x136df4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 56)));
    // 0x136df8: 0x3082a  slt         $at, $zero, $v1
    ctx->pc = 0x136df8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x136dfc: 0x10200006  beqz        $at, . + 4 + (0x6 << 2)
    ctx->pc = 0x136DFCu;
    {
        const bool branch_taken_0x136dfc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x136dfc) {
            ctx->pc = 0x136E18u;
            goto label_136e18;
        }
    }
    ctx->pc = 0x136E04u;
    // 0x136e04: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x136e04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x136e08: 0x8c630038  lw          $v1, 0x38($v1)
    ctx->pc = 0x136e08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 56)));
    // 0x136e0c: 0x2464ffff  addiu       $a0, $v1, -0x1
    ctx->pc = 0x136e0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x136e10: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x136e10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x136e14: 0xac640034  sw          $a0, 0x34($v1)
    ctx->pc = 0x136e14u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 52), GPR_U32(ctx, 4));
label_136e18:
    // 0x136e18: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x136e18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x136e1c: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x136e1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x136e20: 0xa0640040  sb          $a0, 0x40($v1)
    ctx->pc = 0x136e20u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 64), (uint8_t)GPR_U32(ctx, 4));
    // 0x136e24: 0x10000033  b           . + 4 + (0x33 << 2)
    ctx->pc = 0x136E24u;
    {
        const bool branch_taken_0x136e24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x136e24) {
            ctx->pc = 0x136EF4u;
            goto label_136ef4;
        }
    }
    ctx->pc = 0x136E2Cu;
label_136e2c:
    // 0x136e2c: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x136e2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x136e30: 0x8c42003c  lw          $v0, 0x3C($v0)
    ctx->pc = 0x136e30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
    // 0x136e34: 0x2082a  slt         $at, $zero, $v0
    ctx->pc = 0x136e34u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x136e38: 0x10200029  beqz        $at, . + 4 + (0x29 << 2)
    ctx->pc = 0x136E38u;
    {
        const bool branch_taken_0x136e38 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x136e38) {
            ctx->pc = 0x136EE0u;
            goto label_136ee0;
        }
    }
    ctx->pc = 0x136E40u;
    // 0x136e40: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x136e40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x136e44: 0xac500034  sw          $s0, 0x34($v0)
    ctx->pc = 0x136e44u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 52), GPR_U32(ctx, 16));
    // 0x136e48: 0x8f84bbb4  lw          $a0, -0x444C($gp)
    ctx->pc = 0x136e48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949812)));
    // 0x136e4c: 0xc047eb8  jal         func_11FAE0
    ctx->pc = 0x136E4Cu;
    SET_GPR_U32(ctx, 31, 0x136E54u);
    ctx->pc = 0x11FAE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FAE0u, 0x136E4Cu, 0x136E54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x136E54u;
label_136e54:
    // 0x136e54: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x136e54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x136e58: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x136e58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x136e5c: 0x24050533  addiu       $a1, $zero, 0x533
    ctx->pc = 0x136e5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1331));
    // 0x136e60: 0x8c660034  lw          $a2, 0x34($v1)
    ctx->pc = 0x136e60u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
    // 0x136e64: 0xc040924  jal         func_102490
    ctx->pc = 0x136E64u;
    SET_GPR_U32(ctx, 31, 0x136E6Cu);
    ctx->pc = 0x102490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102490u, 0x136E64u, 0x136E6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x136E6Cu;
label_136e6c:
    // 0x136e6c: 0x8f84bbb4  lw          $a0, -0x444C($gp)
    ctx->pc = 0x136e6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949812)));
    // 0x136e70: 0xc047eb8  jal         func_11FAE0
    ctx->pc = 0x136E70u;
    SET_GPR_U32(ctx, 31, 0x136E78u);
    ctx->pc = 0x11FAE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FAE0u, 0x136E70u, 0x136E78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x136E78u;
label_136e78:
    // 0x136e78: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x136e78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x136e7c: 0x8c66004c  lw          $a2, 0x4C($v1)
    ctx->pc = 0x136e7cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 76)));
    // 0x136e80: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x136e80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x136e84: 0x24050532  addiu       $a1, $zero, 0x532
    ctx->pc = 0x136e84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1330));
    // 0x136e88: 0xc040924  jal         func_102490
    ctx->pc = 0x136E88u;
    SET_GPR_U32(ctx, 31, 0x136E90u);
    ctx->pc = 0x102490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102490u, 0x136E88u, 0x136E90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x136E90u;
label_136e90:
    // 0x136e90: 0x8f84bbb4  lw          $a0, -0x444C($gp)
    ctx->pc = 0x136e90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949812)));
    // 0x136e94: 0xc047eb8  jal         func_11FAE0
    ctx->pc = 0x136E94u;
    SET_GPR_U32(ctx, 31, 0x136E9Cu);
    ctx->pc = 0x11FAE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FAE0u, 0x136E94u, 0x136E9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x136E9Cu;
label_136e9c:
    // 0x136e9c: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x136e9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x136ea0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x136ea0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x136ea4: 0x24050572  addiu       $a1, $zero, 0x572
    ctx->pc = 0x136ea4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1394));
    // 0x136ea8: 0x8c66003c  lw          $a2, 0x3C($v1)
    ctx->pc = 0x136ea8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 60)));
    // 0x136eac: 0xc040924  jal         func_102490
    ctx->pc = 0x136EACu;
    SET_GPR_U32(ctx, 31, 0x136EB4u);
    ctx->pc = 0x102490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102490u, 0x136EACu, 0x136EB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x136EB4u;
label_136eb4:
    // 0x136eb4: 0x26040001  addiu       $a0, $s0, 0x1
    ctx->pc = 0x136eb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x136eb8: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x136eb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x136ebc: 0xac640038  sw          $a0, 0x38($v1)
    ctx->pc = 0x136ebcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 56), GPR_U32(ctx, 4));
    // 0x136ec0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x136ec0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x136ec4: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x136ec4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x136ec8: 0xa0640048  sb          $a0, 0x48($v1)
    ctx->pc = 0x136ec8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 72), (uint8_t)GPR_U32(ctx, 4));
    // 0x136ecc: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x136eccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x136ed0: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x136ed0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x136ed4: 0xa0640040  sb          $a0, 0x40($v1)
    ctx->pc = 0x136ed4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 64), (uint8_t)GPR_U32(ctx, 4));
    // 0x136ed8: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x136ED8u;
    {
        const bool branch_taken_0x136ed8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x136ed8) {
            ctx->pc = 0x136EF4u;
            goto label_136ef4;
        }
    }
    ctx->pc = 0x136EE0u;
label_136ee0:
    // 0x136ee0: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x136ee0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x136ee4: 0x8fa50050  lw          $a1, 0x50($sp)
    ctx->pc = 0x136ee4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x136ee8: 0x8fa60060  lw          $a2, 0x60($sp)
    ctx->pc = 0x136ee8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x136eec: 0xc04da98  jal         func_136A60
    ctx->pc = 0x136EECu;
    SET_GPR_U32(ctx, 31, 0x136EF4u);
    ctx->pc = 0x136A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136A60u, 0x136EECu, 0x136EF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x136EF4u;
label_136ef4:
    // 0x136ef4: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x136ef4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x136ef8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x136ef8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x136efc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x136efcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x136f00: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x136f00u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x136f04: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x136f04u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x136f08: 0x3e00008  jr          $ra
    ctx->pc = 0x136F08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x136F08u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x136F10u;
}
