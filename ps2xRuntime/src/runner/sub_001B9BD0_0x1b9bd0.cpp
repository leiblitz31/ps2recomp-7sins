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

// Function: sub_001B9BD0
// Address: 0x1b9bd0 - 0x1b9f20
void sub_001B9BD0_0x1b9bd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B9BD0_0x1b9bd0");
#endif

    switch (ctx->pc) {
        case 0x1b9c30u: goto label_1b9c30;
        case 0x1b9c44u: goto label_1b9c44;
        case 0x1b9c58u: goto label_1b9c58;
        case 0x1b9c6cu: goto label_1b9c6c;
        case 0x1b9c80u: goto label_1b9c80;
        case 0x1b9c94u: goto label_1b9c94;
        case 0x1b9ca4u: goto label_1b9ca4;
        case 0x1b9cc4u: goto label_1b9cc4;
        case 0x1b9d14u: goto label_1b9d14;
        case 0x1b9d34u: goto label_1b9d34;
        case 0x1b9d40u: goto label_1b9d40;
        case 0x1b9d54u: goto label_1b9d54;
        case 0x1b9d60u: goto label_1b9d60;
        case 0x1b9d6cu: goto label_1b9d6c;
        case 0x1b9d84u: goto label_1b9d84;
        case 0x1b9d9cu: goto label_1b9d9c;
        case 0x1b9da8u: goto label_1b9da8;
        case 0x1b9dc0u: goto label_1b9dc0;
        case 0x1b9dd4u: goto label_1b9dd4;
        case 0x1b9decu: goto label_1b9dec;
        case 0x1b9e00u: goto label_1b9e00;
        case 0x1b9e2cu: goto label_1b9e2c;
        case 0x1b9e38u: goto label_1b9e38;
        case 0x1b9e50u: goto label_1b9e50;
        case 0x1b9e64u: goto label_1b9e64;
        case 0x1b9e7cu: goto label_1b9e7c;
        case 0x1b9eecu: goto label_1b9eec;
        case 0x1b9f00u: goto label_1b9f00;
        default: break;
    }

    ctx->pc = 0x1b9bd0u;

    // 0x1b9bd0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1b9bd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1b9bd4: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x1b9bd4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x1b9bd8: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1b9bd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b9bdc: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x1b9bdcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1b9be0: 0x3e00008  jr          $ra
    ctx->pc = 0x1B9BE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B9BE0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B9BE8u;
    // 0x1b9be8: 0x0  nop
    ctx->pc = 0x1b9be8u;
    // NOP
    // 0x1b9bec: 0x0  nop
    ctx->pc = 0x1b9becu;
    // NOP
    // 0x1b9bf0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1b9bf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1b9bf4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1b9bf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1b9bf8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x1b9bf8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x1b9bfc: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x1b9bfcu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
    // 0x1b9c00: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1b9c00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b9c04: 0x1040002f  beqz        $v0, . + 4 + (0x2F << 2)
    ctx->pc = 0x1B9C04u;
    {
        const bool branch_taken_0x1b9c04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b9c04) {
            ctx->pc = 0x1B9CC4u;
            goto label_1b9cc4;
        }
    }
    ctx->pc = 0x1B9C0Cu;
    // 0x1b9c0c: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x1b9c0cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x1b9c10: 0x24634870  addiu       $v1, $v1, 0x4870
    ctx->pc = 0x1b9c10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 18544));
    // 0x1b9c14: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1b9c14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b9c18: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1b9c18u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x1b9c1c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1b9c1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b9c20: 0x244400f4  addiu       $a0, $v0, 0xF4
    ctx->pc = 0x1b9c20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 244));
    // 0x1b9c24: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x1b9c24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1b9c28: 0xc06e3cc  jal         func_1B8F30
    ctx->pc = 0x1B9C28u;
    SET_GPR_U32(ctx, 31, 0x1B9C30u);
    ctx->pc = 0x1B8F30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B8F30u, 0x1B9C28u, 0x1B9C30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B9C30u;
label_1b9c30:
    // 0x1b9c30: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1b9c30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b9c34: 0x244400e8  addiu       $a0, $v0, 0xE8
    ctx->pc = 0x1b9c34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 232));
    // 0x1b9c38: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x1b9c38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1b9c3c: 0xc06e468  jal         func_1B91A0
    ctx->pc = 0x1B9C3Cu;
    SET_GPR_U32(ctx, 31, 0x1B9C44u);
    ctx->pc = 0x1B91A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B91A0u, 0x1B9C3Cu, 0x1B9C44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B9C44u;
label_1b9c44:
    // 0x1b9c44: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1b9c44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b9c48: 0x244400dc  addiu       $a0, $v0, 0xDC
    ctx->pc = 0x1b9c48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 220));
    // 0x1b9c4c: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x1b9c4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1b9c50: 0xc0439c4  jal         func_10E710
    ctx->pc = 0x1B9C50u;
    SET_GPR_U32(ctx, 31, 0x1B9C58u);
    ctx->pc = 0x10E710u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10E710u, 0x1B9C50u, 0x1B9C58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B9C58u;
label_1b9c58:
    // 0x1b9c58: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1b9c58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b9c5c: 0x244400d0  addiu       $a0, $v0, 0xD0
    ctx->pc = 0x1b9c5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 208));
    // 0x1b9c60: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x1b9c60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1b9c64: 0xc06e504  jal         func_1B9410
    ctx->pc = 0x1B9C64u;
    SET_GPR_U32(ctx, 31, 0x1B9C6Cu);
    ctx->pc = 0x1B9410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B9410u, 0x1B9C64u, 0x1B9C6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B9C6Cu;
label_1b9c6c:
    // 0x1b9c6c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1b9c6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b9c70: 0x244400c4  addiu       $a0, $v0, 0xC4
    ctx->pc = 0x1b9c70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 196));
    // 0x1b9c74: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x1b9c74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1b9c78: 0xc0439c4  jal         func_10E710
    ctx->pc = 0x1B9C78u;
    SET_GPR_U32(ctx, 31, 0x1B9C80u);
    ctx->pc = 0x10E710u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10E710u, 0x1B9C78u, 0x1B9C80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B9C80u;
label_1b9c80:
    // 0x1b9c80: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1b9c80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b9c84: 0x244400b8  addiu       $a0, $v0, 0xB8
    ctx->pc = 0x1b9c84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 184));
    // 0x1b9c88: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x1b9c88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1b9c8c: 0xc0439c4  jal         func_10E710
    ctx->pc = 0x1B9C8Cu;
    SET_GPR_U32(ctx, 31, 0x1B9C94u);
    ctx->pc = 0x10E710u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10E710u, 0x1B9C8Cu, 0x1B9C94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B9C94u;
label_1b9c94:
    // 0x1b9c94: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1b9c94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b9c98: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1b9c98u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b9c9c: 0xc064970  jal         func_1925C0
    ctx->pc = 0x1B9C9Cu;
    SET_GPR_U32(ctx, 31, 0x1B9CA4u);
    ctx->pc = 0x1925C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1925C0u, 0x1B9C9Cu, 0x1B9CA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B9CA4u;
label_1b9ca4:
    // 0x1b9ca4: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x1b9ca4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b9ca8: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x1b9ca8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1b9cac: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x1b9cacu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x1b9cb0: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B9CB0u;
    {
        const bool branch_taken_0x1b9cb0 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x1b9cb0) {
            ctx->pc = 0x1B9CC4u;
            goto label_1b9cc4;
        }
    }
    ctx->pc = 0x1B9CB8u;
    // 0x1b9cb8: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1b9cb8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b9cbc: 0xc0ba070  jal         func_2E81C0
    ctx->pc = 0x1B9CBCu;
    SET_GPR_U32(ctx, 31, 0x1B9CC4u);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x1B9CBCu, 0x1B9CC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B9CC4u;
label_1b9cc4:
    // 0x1b9cc4: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1b9cc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b9cc8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1b9cc8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b9ccc: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x1b9cccu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1b9cd0: 0x3e00008  jr          $ra
    ctx->pc = 0x1B9CD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B9CD0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B9CD8u;
    // 0x1b9cd8: 0x0  nop
    ctx->pc = 0x1b9cd8u;
    // NOP
    // 0x1b9cdc: 0x0  nop
    ctx->pc = 0x1b9cdcu;
    // NOP
    // 0x1b9ce0: 0x27bdfe80  addiu       $sp, $sp, -0x180
    ctx->pc = 0x1b9ce0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966912));
    // 0x1b9ce4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1b9ce4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1b9ce8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1b9ce8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1b9cec: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1b9cecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1b9cf0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1b9cf0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1b9cf4: 0xafa40150  sw          $a0, 0x150($sp)
    ctx->pc = 0x1b9cf4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 336), GPR_U32(ctx, 4));
    // 0x1b9cf8: 0xa3a50160  sb          $a1, 0x160($sp)
    ctx->pc = 0x1b9cf8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 352), (uint8_t)GPR_U32(ctx, 5));
    // 0x1b9cfc: 0xafa60170  sw          $a2, 0x170($sp)
    ctx->pc = 0x1b9cfcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 368), GPR_U32(ctx, 6));
    // 0x1b9d00: 0x8fa40150  lw          $a0, 0x150($sp)
    ctx->pc = 0x1b9d00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x1b9d04: 0x93a50160  lbu         $a1, 0x160($sp)
    ctx->pc = 0x1b9d04u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x1b9d08: 0x8fa60170  lw          $a2, 0x170($sp)
    ctx->pc = 0x1b9d08u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x1b9d0c: 0xc064a4c  jal         func_192930
    ctx->pc = 0x1B9D0Cu;
    SET_GPR_U32(ctx, 31, 0x1B9D14u);
    ctx->pc = 0x192930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x192930u, 0x1B9D0Cu, 0x1B9D14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B9D14u;
label_1b9d14:
    // 0x1b9d14: 0x93a30160  lbu         $v1, 0x160($sp)
    ctx->pc = 0x1b9d14u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x1b9d18: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x1b9d18u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1b9d1c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1b9d1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b9d20: 0x14830077  bne         $a0, $v1, . + 4 + (0x77 << 2)
    ctx->pc = 0x1B9D20u;
    {
        const bool branch_taken_0x1b9d20 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x1b9d20) {
            ctx->pc = 0x1B9F00u;
            goto label_1b9f00;
        }
    }
    ctx->pc = 0x1B9D28u;
    // 0x1b9d28: 0x8fa40150  lw          $a0, 0x150($sp)
    ctx->pc = 0x1b9d28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x1b9d2c: 0xc06ec84  jal         func_1BB210
    ctx->pc = 0x1B9D2Cu;
    SET_GPR_U32(ctx, 31, 0x1B9D34u);
    ctx->pc = 0x1BB210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BB210u, 0x1B9D2Cu, 0x1B9D34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B9D34u;
label_1b9d34:
    // 0x1b9d34: 0x8fa40150  lw          $a0, 0x150($sp)
    ctx->pc = 0x1b9d34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x1b9d38: 0xc06f084  jal         func_1BC210
    ctx->pc = 0x1B9D38u;
    SET_GPR_U32(ctx, 31, 0x1B9D40u);
    ctx->pc = 0x1BC210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BC210u, 0x1B9D38u, 0x1B9D40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B9D40u;
label_1b9d40:
    // 0x1b9d40: 0x8fa40150  lw          $a0, 0x150($sp)
    ctx->pc = 0x1b9d40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x1b9d44: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x1b9d44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
    // 0x1b9d48: 0xc44cbe50  lwc1        $f12, -0x41B0($v0)
    ctx->pc = 0x1b9d48u;
    { uint32_t bits = FAST_READ32(0x60BE50u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1b9d4c: 0xc064de4  jal         func_193790
    ctx->pc = 0x1B9D4Cu;
    SET_GPR_U32(ctx, 31, 0x1B9D54u);
    ctx->pc = 0x193790u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x193790u, 0x1B9D4Cu, 0x1B9D54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B9D54u;
label_1b9d54:
    // 0x1b9d54: 0x8fa40150  lw          $a0, 0x150($sp)
    ctx->pc = 0x1b9d54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x1b9d58: 0xc06ed54  jal         func_1BB550
    ctx->pc = 0x1B9D58u;
    SET_GPR_U32(ctx, 31, 0x1B9D60u);
    ctx->pc = 0x1BB550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BB550u, 0x1B9D58u, 0x1B9D60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B9D60u;
label_1b9d60:
    // 0x1b9d60: 0x8fa40150  lw          $a0, 0x150($sp)
    ctx->pc = 0x1b9d60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x1b9d64: 0xc06ed7c  jal         func_1BB5F0
    ctx->pc = 0x1B9D64u;
    SET_GPR_U32(ctx, 31, 0x1B9D6Cu);
    ctx->pc = 0x1BB5F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BB5F0u, 0x1B9D64u, 0x1B9D6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B9D6Cu;
label_1b9d6c:
    // 0x1b9d6c: 0x8fa20150  lw          $v0, 0x150($sp)
    ctx->pc = 0x1b9d6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x1b9d70: 0x244400c4  addiu       $a0, $v0, 0xC4
    ctx->pc = 0x1b9d70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 196));
    // 0x1b9d74: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x1b9d74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
    // 0x1b9d78: 0x8c45be74  lw          $a1, -0x418C($v0)
    ctx->pc = 0x1b9d78u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x60BE74u));
    // 0x1b9d7c: 0xc0647b8  jal         func_191EE0
    ctx->pc = 0x1B9D7Cu;
    SET_GPR_U32(ctx, 31, 0x1B9D84u);
    ctx->pc = 0x191EE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191EE0u, 0x1B9D7Cu, 0x1B9D84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B9D84u;
label_1b9d84:
    // 0x1b9d84: 0x8fa20150  lw          $v0, 0x150($sp)
    ctx->pc = 0x1b9d84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x1b9d88: 0x244400d0  addiu       $a0, $v0, 0xD0
    ctx->pc = 0x1b9d88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 208));
    // 0x1b9d8c: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x1b9d8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
    // 0x1b9d90: 0x8c45be74  lw          $a1, -0x418C($v0)
    ctx->pc = 0x1b9d90u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x60BE74u));
    // 0x1b9d94: 0xc06e800  jal         func_1BA000
    ctx->pc = 0x1B9D94u;
    SET_GPR_U32(ctx, 31, 0x1B9D9Cu);
    ctx->pc = 0x1BA000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BA000u, 0x1B9D94u, 0x1B9D9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B9D9Cu;
label_1b9d9c:
    // 0x1b9d9c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1b9d9cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b9da0: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x1B9DA0u;
    {
        const bool branch_taken_0x1b9da0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b9da0) {
            ctx->pc = 0x1B9E04u;
            goto label_1b9e04;
        }
    }
    ctx->pc = 0x1B9DA8u;
label_1b9da8:
    // 0x1b9da8: 0x27a40130  addiu       $a0, $sp, 0x130
    ctx->pc = 0x1b9da8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    // 0x1b9dac: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x1b9dacu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
    // 0x1b9db0: 0x24a57448  addiu       $a1, $a1, 0x7448
    ctx->pc = 0x1b9db0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 29768));
    // 0x1b9db4: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1b9db4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b9db8: 0xc0bc3e2  jal         func_2F0F88
    ctx->pc = 0x1B9DB8u;
    SET_GPR_U32(ctx, 31, 0x1B9DC0u);
    ctx->pc = 0x2F0F88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F0F88u, 0x1B9DB8u, 0x1B9DC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B9DC0u;
label_1b9dc0:
    // 0x1b9dc0: 0x8fa20150  lw          $v0, 0x150($sp)
    ctx->pc = 0x1b9dc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x1b9dc4: 0x8c440030  lw          $a0, 0x30($v0)
    ctx->pc = 0x1b9dc4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x1b9dc8: 0x27a50130  addiu       $a1, $sp, 0x130
    ctx->pc = 0x1b9dc8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    // 0x1b9dcc: 0xc064ad0  jal         func_192B40
    ctx->pc = 0x1B9DCCu;
    SET_GPR_U32(ctx, 31, 0x1B9DD4u);
    ctx->pc = 0x192B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x192B40u, 0x1B9DCCu, 0x1B9DD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B9DD4u;
label_1b9dd4:
    // 0x1b9dd4: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1b9dd4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b9dd8: 0x8fa20150  lw          $v0, 0x150($sp)
    ctx->pc = 0x1b9dd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x1b9ddc: 0x244400c4  addiu       $a0, $v0, 0xC4
    ctx->pc = 0x1b9ddcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 196));
    // 0x1b9de0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1b9de0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b9de4: 0xc04a9c0  jal         func_12A700
    ctx->pc = 0x1B9DE4u;
    SET_GPR_U32(ctx, 31, 0x1B9DECu);
    ctx->pc = 0x12A700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12A700u, 0x1B9DE4u, 0x1B9DECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B9DECu;
label_1b9dec:
    // 0x1b9dec: 0xac520000  sw          $s2, 0x0($v0)
    ctx->pc = 0x1b9decu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 18));
    // 0x1b9df0: 0x8fa40150  lw          $a0, 0x150($sp)
    ctx->pc = 0x1b9df0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x1b9df4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1b9df4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b9df8: 0xc06f2e8  jal         func_1BCBA0
    ctx->pc = 0x1B9DF8u;
    SET_GPR_U32(ctx, 31, 0x1B9E00u);
    ctx->pc = 0x1BCBA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BCBA0u, 0x1B9DF8u, 0x1B9E00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B9E00u;
label_1b9e00:
    // 0x1b9e00: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1b9e00u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_1b9e04:
    // 0x1b9e04: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x1b9e04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
    // 0x1b9e08: 0x8c42be74  lw          $v0, -0x418C($v0)
    ctx->pc = 0x1b9e08u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x60BE74u));
    // 0x1b9e0c: 0x202102b  sltu        $v0, $s0, $v0
    ctx->pc = 0x1b9e0cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1b9e10: 0x1440ffe5  bnez        $v0, . + 4 + (-0x1B << 2)
    ctx->pc = 0x1B9E10u;
    {
        const bool branch_taken_0x1b9e10 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b9e10) {
            ctx->pc = 0x1B9DA8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b9da8;
        }
    }
    ctx->pc = 0x1B9E18u;
    // 0x1b9e18: 0x8fa20150  lw          $v0, 0x150($sp)
    ctx->pc = 0x1b9e18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x1b9e1c: 0x244400dc  addiu       $a0, $v0, 0xDC
    ctx->pc = 0x1b9e1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 220));
    // 0x1b9e20: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x1b9e20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1b9e24: 0xc0647b8  jal         func_191EE0
    ctx->pc = 0x1B9E24u;
    SET_GPR_U32(ctx, 31, 0x1B9E2Cu);
    ctx->pc = 0x191EE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191EE0u, 0x1B9E24u, 0x1B9E2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B9E2Cu;
label_1b9e2c:
    // 0x1b9e2c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1b9e2cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b9e30: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x1B9E30u;
    {
        const bool branch_taken_0x1b9e30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b9e30) {
            ctx->pc = 0x1B9E84u;
            goto label_1b9e84;
        }
    }
    ctx->pc = 0x1B9E38u;
label_1b9e38:
    // 0x1b9e38: 0x26260001  addiu       $a2, $s1, 0x1
    ctx->pc = 0x1b9e38u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1b9e3c: 0x27a40110  addiu       $a0, $sp, 0x110
    ctx->pc = 0x1b9e3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x1b9e40: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x1b9e40u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
    // 0x1b9e44: 0x24a57458  addiu       $a1, $a1, 0x7458
    ctx->pc = 0x1b9e44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 29784));
    // 0x1b9e48: 0xc0bc3e2  jal         func_2F0F88
    ctx->pc = 0x1B9E48u;
    SET_GPR_U32(ctx, 31, 0x1B9E50u);
    ctx->pc = 0x2F0F88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F0F88u, 0x1B9E48u, 0x1B9E50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B9E50u;
label_1b9e50:
    // 0x1b9e50: 0x8fa20150  lw          $v0, 0x150($sp)
    ctx->pc = 0x1b9e50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x1b9e54: 0x8c440030  lw          $a0, 0x30($v0)
    ctx->pc = 0x1b9e54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x1b9e58: 0x27a50110  addiu       $a1, $sp, 0x110
    ctx->pc = 0x1b9e58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x1b9e5c: 0xc064ad0  jal         func_192B40
    ctx->pc = 0x1B9E5Cu;
    SET_GPR_U32(ctx, 31, 0x1B9E64u);
    ctx->pc = 0x192B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x192B40u, 0x1B9E5Cu, 0x1B9E64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B9E64u;
label_1b9e64:
    // 0x1b9e64: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1b9e64u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b9e68: 0x8fa20150  lw          $v0, 0x150($sp)
    ctx->pc = 0x1b9e68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x1b9e6c: 0x244400dc  addiu       $a0, $v0, 0xDC
    ctx->pc = 0x1b9e6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 220));
    // 0x1b9e70: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1b9e70u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b9e74: 0xc04a9c0  jal         func_12A700
    ctx->pc = 0x1B9E74u;
    SET_GPR_U32(ctx, 31, 0x1B9E7Cu);
    ctx->pc = 0x12A700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12A700u, 0x1B9E74u, 0x1B9E7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B9E7Cu;
label_1b9e7c:
    // 0x1b9e7c: 0xac520000  sw          $s2, 0x0($v0)
    ctx->pc = 0x1b9e7cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 18));
    // 0x1b9e80: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1b9e80u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_1b9e84:
    // 0x1b9e84: 0x2e220004  sltiu       $v0, $s1, 0x4
    ctx->pc = 0x1b9e84u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x1b9e88: 0x1440ffeb  bnez        $v0, . + 4 + (-0x15 << 2)
    ctx->pc = 0x1B9E88u;
    {
        const bool branch_taken_0x1b9e88 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b9e88) {
            ctx->pc = 0x1B9E38u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b9e38;
        }
    }
    ctx->pc = 0x1B9E90u;
    // 0x1b9e90: 0x8fa20150  lw          $v0, 0x150($sp)
    ctx->pc = 0x1b9e90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x1b9e94: 0xc440004c  lwc1        $f0, 0x4C($v0)
    ctx->pc = 0x1b9e94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b9e98: 0x8fa20150  lw          $v0, 0x150($sp)
    ctx->pc = 0x1b9e98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x1b9e9c: 0xe44008d8  swc1        $f0, 0x8D8($v0)
    ctx->pc = 0x1b9e9cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 2264), bits); }
    // 0x1b9ea0: 0x8fa20150  lw          $v0, 0x150($sp)
    ctx->pc = 0x1b9ea0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x1b9ea4: 0xe44008dc  swc1        $f0, 0x8DC($v0)
    ctx->pc = 0x1b9ea4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 2268), bits); }
    // 0x1b9ea8: 0x8fa20150  lw          $v0, 0x150($sp)
    ctx->pc = 0x1b9ea8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x1b9eac: 0xe44008d4  swc1        $f0, 0x8D4($v0)
    ctx->pc = 0x1b9eacu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 2260), bits); }
    // 0x1b9eb0: 0x8fa20150  lw          $v0, 0x150($sp)
    ctx->pc = 0x1b9eb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x1b9eb4: 0xe44008d0  swc1        $f0, 0x8D0($v0)
    ctx->pc = 0x1b9eb4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 2256), bits); }
    // 0x1b9eb8: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x1b9eb8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
    // 0x1b9ebc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1b9ebcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b9ec0: 0x8fa20150  lw          $v0, 0x150($sp)
    ctx->pc = 0x1b9ec0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x1b9ec4: 0xe44000ac  swc1        $f0, 0xAC($v0)
    ctx->pc = 0x1b9ec4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 172), bits); }
    // 0x1b9ec8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1b9ec8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b9ecc: 0x8fa20150  lw          $v0, 0x150($sp)
    ctx->pc = 0x1b9eccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x1b9ed0: 0xa04300a8  sb          $v1, 0xA8($v0)
    ctx->pc = 0x1b9ed0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 168), (uint8_t)GPR_U32(ctx, 3));
    // 0x1b9ed4: 0x8fa20150  lw          $v0, 0x150($sp)
    ctx->pc = 0x1b9ed4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x1b9ed8: 0xac4000a4  sw          $zero, 0xA4($v0)
    ctx->pc = 0x1b9ed8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 164), GPR_U32(ctx, 0));
    // 0x1b9edc: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x1b9edcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1b9ee0: 0x8fa50150  lw          $a1, 0x150($sp)
    ctx->pc = 0x1b9ee0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x1b9ee4: 0xc06f568  jal         func_1BD5A0
    ctx->pc = 0x1B9EE4u;
    SET_GPR_U32(ctx, 31, 0x1B9EECu);
    ctx->pc = 0x1BD5A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BD5A0u, 0x1B9EE4u, 0x1B9EECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B9EECu;
label_1b9eec:
    // 0x1b9eec: 0x8fa20150  lw          $v0, 0x150($sp)
    ctx->pc = 0x1b9eecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x1b9ef0: 0x244408f0  addiu       $a0, $v0, 0x8F0
    ctx->pc = 0x1b9ef0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 2288));
    // 0x1b9ef4: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x1b9ef4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1b9ef8: 0xc06e7c8  jal         func_1B9F20
    ctx->pc = 0x1B9EF8u;
    SET_GPR_U32(ctx, 31, 0x1B9F00u);
    ctx->pc = 0x1B9F20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B9F20u, 0x1B9EF8u, 0x1B9F00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B9F00u;
label_1b9f00:
    // 0x1b9f00: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1b9f00u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1b9f04: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1b9f04u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b9f08: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1b9f08u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b9f0c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1b9f0cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b9f10: 0x27bd0180  addiu       $sp, $sp, 0x180
    ctx->pc = 0x1b9f10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
    // 0x1b9f14: 0x3e00008  jr          $ra
    ctx->pc = 0x1B9F14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B9F14u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B9F1Cu;
    // 0x1b9f1c: 0x0  nop
    ctx->pc = 0x1b9f1cu;
    // NOP
    ctx->pc = 0x1b9f20u;
}
