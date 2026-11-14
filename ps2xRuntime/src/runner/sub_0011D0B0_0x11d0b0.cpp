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

// Function: sub_0011D0B0
// Address: 0x11d0b0 - 0x11d370
void sub_0011D0B0_0x11d0b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0011D0B0_0x11d0b0");
#endif

    switch (ctx->pc) {
        case 0x11d0ccu: goto label_11d0cc;
        case 0x11d0f0u: goto label_11d0f0;
        case 0x11d14cu: goto label_11d14c;
        case 0x11d16cu: goto label_11d16c;
        case 0x11d1a8u: goto label_11d1a8;
        case 0x11d1d4u: goto label_11d1d4;
        case 0x11d210u: goto label_11d210;
        case 0x11d230u: goto label_11d230;
        case 0x11d248u: goto label_11d248;
        case 0x11d250u: goto label_11d250;
        case 0x11d25cu: goto label_11d25c;
        case 0x11d268u: goto label_11d268;
        case 0x11d27cu: goto label_11d27c;
        case 0x11d288u: goto label_11d288;
        case 0x11d29cu: goto label_11d29c;
        case 0x11d2b8u: goto label_11d2b8;
        case 0x11d2c8u: goto label_11d2c8;
        case 0x11d2d8u: goto label_11d2d8;
        case 0x11d2e4u: goto label_11d2e4;
        case 0x11d2f8u: goto label_11d2f8;
        case 0x11d30cu: goto label_11d30c;
        case 0x11d31cu: goto label_11d31c;
        case 0x11d32cu: goto label_11d32c;
        case 0x11d338u: goto label_11d338;
        case 0x11d350u: goto label_11d350;
        default: break;
    }

    ctx->pc = 0x11d0b0u;

    // 0x11d0b0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x11d0b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x11d0b4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x11d0b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x11d0b8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x11d0b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x11d0bc: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x11d0bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11d0c0: 0x24050014  addiu       $a1, $zero, 0x14
    ctx->pc = 0x11d0c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x11d0c4: 0xc047074  jal         func_11C1D0
    ctx->pc = 0x11D0C4u;
    SET_GPR_U32(ctx, 31, 0x11D0CCu);
    ctx->pc = 0x11C1D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11C1D0u, 0x11D0C4u, 0x11D0CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11D0CCu;
label_11d0cc:
    // 0x11d0cc: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x11d0ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x11d0d0: 0x24633470  addiu       $v1, $v1, 0x3470
    ctx->pc = 0x11d0d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 13424));
    // 0x11d0d4: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x11d0d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11d0d8: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x11d0d8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x11d0dc: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x11d0dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11d0e0: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x11d0e0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
    // 0x11d0e4: 0x24a51ce8  addiu       $a1, $a1, 0x1CE8
    ctx->pc = 0x11d0e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 7400));
    // 0x11d0e8: 0xc04322c  jal         func_10C8B0
    ctx->pc = 0x11D0E8u;
    SET_GPR_U32(ctx, 31, 0x11D0F0u);
    ctx->pc = 0x10C8B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10C8B0u, 0x11D0E8u, 0x11D0F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11D0F0u;
label_11d0f0:
    // 0x11d0f0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x11d0f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11d0f4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x11d0f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11d0f8: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x11d0f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x11d0fc: 0x3e00008  jr          $ra
    ctx->pc = 0x11D0FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11D0FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11D104u;
    // 0x11d104: 0x0  nop
    ctx->pc = 0x11d104u;
    // NOP
    // 0x11d108: 0x0  nop
    ctx->pc = 0x11d108u;
    // NOP
    // 0x11d10c: 0x0  nop
    ctx->pc = 0x11d10cu;
    // NOP
    // 0x11d110: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x11d110u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x11d114: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x11d114u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x11d118: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x11d118u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x11d11c: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x11d11cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
    // 0x11d120: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x11d120u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11d124: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x11D124u;
    {
        const bool branch_taken_0x11d124 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x11d124) {
            ctx->pc = 0x11D16Cu;
            goto label_11d16c;
        }
    }
    ctx->pc = 0x11D12Cu;
    // 0x11d12c: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x11d12cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x11d130: 0x24633470  addiu       $v1, $v1, 0x3470
    ctx->pc = 0x11d130u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 13424));
    // 0x11d134: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x11d134u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11d138: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x11d138u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x11d13c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x11d13cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11d140: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x11d140u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11d144: 0xc047088  jal         func_11C220
    ctx->pc = 0x11D144u;
    SET_GPR_U32(ctx, 31, 0x11D14Cu);
    ctx->pc = 0x11C220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11C220u, 0x11D144u, 0x11D14Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11D14Cu;
label_11d14c:
    // 0x11d14c: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x11d14cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x11d150: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x11d150u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x11d154: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x11d154u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x11d158: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x11D158u;
    {
        const bool branch_taken_0x11d158 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x11d158) {
            ctx->pc = 0x11D16Cu;
            goto label_11d16c;
        }
    }
    ctx->pc = 0x11D160u;
    // 0x11d160: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x11d160u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11d164: 0xc0ba070  jal         func_2E81C0
    ctx->pc = 0x11D164u;
    SET_GPR_U32(ctx, 31, 0x11D16Cu);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x11D164u, 0x11D16Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11D16Cu;
label_11d16c:
    // 0x11d16c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x11d16cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11d170: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x11d170u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11d174: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x11d174u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x11d178: 0x3e00008  jr          $ra
    ctx->pc = 0x11D178u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11D178u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11D180u;
    // 0x11d180: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x11d180u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x11d184: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x11d184u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x11d188: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x11d188u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x11d18c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x11d18cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x11d190: 0xafa40050  sw          $a0, 0x50($sp)
    ctx->pc = 0x11d190u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 4));
    // 0x11d194: 0xa3a50060  sb          $a1, 0x60($sp)
    ctx->pc = 0x11d194u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 96), (uint8_t)GPR_U32(ctx, 5));
    // 0x11d198: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x11d198u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x11d19c: 0x93a50060  lbu         $a1, 0x60($sp)
    ctx->pc = 0x11d19cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x11d1a0: 0xc08edb0  jal         func_23B6C0
    ctx->pc = 0x11D1A0u;
    SET_GPR_U32(ctx, 31, 0x11D1A8u);
    ctx->pc = 0x23B6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23B6C0u, 0x11D1A0u, 0x11D1A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11D1A8u;
label_11d1a8:
    // 0x11d1a8: 0x93a30060  lbu         $v1, 0x60($sp)
    ctx->pc = 0x11d1a8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x11d1ac: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x11d1acu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x11d1b0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x11d1b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11d1b4: 0x14830066  bne         $a0, $v1, . + 4 + (0x66 << 2)
    ctx->pc = 0x11D1B4u;
    {
        const bool branch_taken_0x11d1b4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x11d1b4) {
            ctx->pc = 0x11D350u;
            goto label_11d350;
        }
    }
    ctx->pc = 0x11D1BCu;
    // 0x11d1bc: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x11d1bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x11d1c0: 0x24440028  addiu       $a0, $v0, 0x28
    ctx->pc = 0x11d1c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 40));
    // 0x11d1c4: 0x2405054c  addiu       $a1, $zero, 0x54C
    ctx->pc = 0x11d1c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1356));
    // 0x11d1c8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x11d1c8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11d1cc: 0xc040ab0  jal         func_102AC0
    ctx->pc = 0x11D1CCu;
    SET_GPR_U32(ctx, 31, 0x11D1D4u);
    ctx->pc = 0x102AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102AC0u, 0x11D1CCu, 0x11D1D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11D1D4u;
label_11d1d4:
    // 0x11d1d4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x11d1d4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11d1d8: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x11d1d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x11d1dc: 0x12220043  beq         $s1, $v0, . + 4 + (0x43 << 2)
    ctx->pc = 0x11D1DCu;
    {
        const bool branch_taken_0x11d1dc = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        if (branch_taken_0x11d1dc) {
            ctx->pc = 0x11D2ECu;
            goto label_11d2ec;
        }
    }
    ctx->pc = 0x11D1E4u;
    // 0x11d1e4: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x11d1e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x11d1e8: 0x12220003  beq         $s1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x11D1E8u;
    {
        const bool branch_taken_0x11d1e8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        if (branch_taken_0x11d1e8) {
            ctx->pc = 0x11D1F8u;
            goto label_11d1f8;
        }
    }
    ctx->pc = 0x11D1F0u;
    // 0x11d1f0: 0x10000053  b           . + 4 + (0x53 << 2)
    ctx->pc = 0x11D1F0u;
    {
        const bool branch_taken_0x11d1f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x11d1f0) {
            ctx->pc = 0x11D340u;
            goto label_11d340;
        }
    }
    ctx->pc = 0x11D1F8u;
label_11d1f8:
    // 0x11d1f8: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x11d1f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x11d1fc: 0x24440028  addiu       $a0, $v0, 0x28
    ctx->pc = 0x11d1fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 40));
    // 0x11d200: 0x2405054a  addiu       $a1, $zero, 0x54A
    ctx->pc = 0x11d200u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1354));
    // 0x11d204: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x11d204u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11d208: 0xc04146c  jal         func_1051B0
    ctx->pc = 0x11D208u;
    SET_GPR_U32(ctx, 31, 0x11D210u);
    ctx->pc = 0x1051B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1051B0u, 0x11D208u, 0x11D210u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11D210u;
label_11d210:
    // 0x11d210: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x11d210u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x11d214: 0x320300ff  andi        $v1, $s0, 0xFF
    ctx->pc = 0x11d214u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
    // 0x11d218: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x11d218u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11d21c: 0x14620012  bne         $v1, $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x11D21Cu;
    {
        const bool branch_taken_0x11d21c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x11d21c) {
            ctx->pc = 0x11D268u;
            goto label_11d268;
        }
    }
    ctx->pc = 0x11D224u;
    // 0x11d224: 0x8f84bbb4  lw          $a0, -0x444C($gp)
    ctx->pc = 0x11d224u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949812)));
    // 0x11d228: 0xc08d920  jal         func_236480
    ctx->pc = 0x11D228u;
    SET_GPR_U32(ctx, 31, 0x11D230u);
    ctx->pc = 0x236480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x236480u, 0x11D228u, 0x11D230u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11D230u;
label_11d230:
    // 0x11d230: 0x8f82bbb4  lw          $v0, -0x444C($gp)
    ctx->pc = 0x11d230u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949812)));
    // 0x11d234: 0x8c44002c  lw          $a0, 0x2C($v0)
    ctx->pc = 0x11d234u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
    // 0x11d238: 0x2405054a  addiu       $a1, $zero, 0x54A
    ctx->pc = 0x11d238u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1354));
    // 0x11d23c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x11d23cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11d240: 0xc041b54  jal         func_106D50
    ctx->pc = 0x11D240u;
    SET_GPR_U32(ctx, 31, 0x11D248u);
    ctx->pc = 0x106D50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106D50u, 0x11D240u, 0x11D248u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11D248u;
label_11d248:
    // 0x11d248: 0xc090864  jal         func_242190
    ctx->pc = 0x11D248u;
    SET_GPR_U32(ctx, 31, 0x11D250u);
    ctx->pc = 0x242190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x242190u, 0x11D248u, 0x11D250u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11D250u;
label_11d250:
    // 0x11d250: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x11d250u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11d254: 0xc090598  jal         func_241660
    ctx->pc = 0x11D254u;
    SET_GPR_U32(ctx, 31, 0x11D25Cu);
    ctx->pc = 0x241660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x241660u, 0x11D254u, 0x11D25Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11D25Cu;
label_11d25c:
    // 0x11d25c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x11d25cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11d260: 0xc095bec  jal         func_256FB0
    ctx->pc = 0x11D260u;
    SET_GPR_U32(ctx, 31, 0x11D268u);
    ctx->pc = 0x256FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x256FB0u, 0x11D260u, 0x11D268u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11D268u;
label_11d268:
    // 0x11d268: 0x24040009  addiu       $a0, $zero, 0x9
    ctx->pc = 0x11d268u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x11d26c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x11d26cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11d270: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x11d270u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11d274: 0xc08d4a4  jal         func_235290
    ctx->pc = 0x11D274u;
    SET_GPR_U32(ctx, 31, 0x11D27Cu);
    ctx->pc = 0x235290u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x235290u, 0x11D274u, 0x11D27Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11D27Cu;
label_11d27c:
    // 0x11d27c: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x11d27cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x11d280: 0xc088560  jal         func_221580
    ctx->pc = 0x11D280u;
    SET_GPR_U32(ctx, 31, 0x11D288u);
    ctx->pc = 0x221580u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x221580u, 0x11D280u, 0x11D288u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11D288u;
label_11d288:
    // 0x11d288: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x11d288u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x11d28c: 0x2405054c  addiu       $a1, $zero, 0x54C
    ctx->pc = 0x11d28cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1356));
    // 0x11d290: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x11d290u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x11d294: 0xc040924  jal         func_102490
    ctx->pc = 0x11D294u;
    SET_GPR_U32(ctx, 31, 0x11D29Cu);
    ctx->pc = 0x102490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102490u, 0x11D294u, 0x11D29Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11D29Cu;
label_11d29c:
    // 0x11d29c: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x11d29cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x11d2a0: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x11d2a0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
    // 0x11d2a4: 0x24a51cf8  addiu       $a1, $a1, 0x1CF8
    ctx->pc = 0x11d2a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 7416));
    // 0x11d2a8: 0x3c06004e  lui         $a2, 0x4E
    ctx->pc = 0x11d2a8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)78 << 16));
    // 0x11d2ac: 0x24c61d10  addiu       $a2, $a2, 0x1D10
    ctx->pc = 0x11d2acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 7440));
    // 0x11d2b0: 0xc041b90  jal         func_106E40
    ctx->pc = 0x11D2B0u;
    SET_GPR_U32(ctx, 31, 0x11D2B8u);
    ctx->pc = 0x106E40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106E40u, 0x11D2B0u, 0x11D2B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11D2B8u;
label_11d2b8:
    // 0x11d2b8: 0x2404000b  addiu       $a0, $zero, 0xB
    ctx->pc = 0x11d2b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x11d2bc: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x11d2bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x11d2c0: 0xc08ef28  jal         func_23BCA0
    ctx->pc = 0x11D2C0u;
    SET_GPR_U32(ctx, 31, 0x11D2C8u);
    ctx->pc = 0x23BCA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23BCA0u, 0x11D2C0u, 0x11D2C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11D2C8u;
label_11d2c8:
    // 0x11d2c8: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x11d2c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x11d2cc: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x11d2ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x11d2d0: 0xc0887b4  jal         func_221ED0
    ctx->pc = 0x11D2D0u;
    SET_GPR_U32(ctx, 31, 0x11D2D8u);
    ctx->pc = 0x221ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x221ED0u, 0x11D2D0u, 0x11D2D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11D2D8u;
label_11d2d8:
    // 0x11d2d8: 0x8f84b9d8  lw          $a0, -0x4628($gp)
    ctx->pc = 0x11d2d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949336)));
    // 0x11d2dc: 0xc050b40  jal         func_142D00
    ctx->pc = 0x11D2DCu;
    SET_GPR_U32(ctx, 31, 0x11D2E4u);
    ctx->pc = 0x142D00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x142D00u, 0x11D2DCu, 0x11D2E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11D2E4u;
label_11d2e4:
    // 0x11d2e4: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x11D2E4u;
    {
        const bool branch_taken_0x11d2e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x11d2e4) {
            ctx->pc = 0x11D350u;
            goto label_11d350;
        }
    }
    ctx->pc = 0x11D2ECu;
label_11d2ec:
    // 0x11d2ec: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x11d2ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x11d2f0: 0xc088560  jal         func_221580
    ctx->pc = 0x11D2F0u;
    SET_GPR_U32(ctx, 31, 0x11D2F8u);
    ctx->pc = 0x221580u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x221580u, 0x11D2F0u, 0x11D2F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11D2F8u;
label_11d2f8:
    // 0x11d2f8: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x11d2f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x11d2fc: 0x2405054c  addiu       $a1, $zero, 0x54C
    ctx->pc = 0x11d2fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1356));
    // 0x11d300: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x11d300u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11d304: 0xc040924  jal         func_102490
    ctx->pc = 0x11D304u;
    SET_GPR_U32(ctx, 31, 0x11D30Cu);
    ctx->pc = 0x102490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102490u, 0x11D304u, 0x11D30Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11D30Cu;
label_11d30c:
    // 0x11d30c: 0x24040012  addiu       $a0, $zero, 0x12
    ctx->pc = 0x11d30cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x11d310: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x11d310u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x11d314: 0xc08ef28  jal         func_23BCA0
    ctx->pc = 0x11D314u;
    SET_GPR_U32(ctx, 31, 0x11D31Cu);
    ctx->pc = 0x23BCA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23BCA0u, 0x11D314u, 0x11D31Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11D31Cu;
label_11d31c:
    // 0x11d31c: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x11d31cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x11d320: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x11d320u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x11d324: 0xc0887b4  jal         func_221ED0
    ctx->pc = 0x11D324u;
    SET_GPR_U32(ctx, 31, 0x11D32Cu);
    ctx->pc = 0x221ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x221ED0u, 0x11D324u, 0x11D32Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11D32Cu;
label_11d32c:
    // 0x11d32c: 0x8f84b9d8  lw          $a0, -0x4628($gp)
    ctx->pc = 0x11d32cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949336)));
    // 0x11d330: 0xc050c2c  jal         func_1430B0
    ctx->pc = 0x11D330u;
    SET_GPR_U32(ctx, 31, 0x11D338u);
    ctx->pc = 0x1430B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1430B0u, 0x11D330u, 0x11D338u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11D338u;
label_11d338:
    // 0x11d338: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x11D338u;
    {
        const bool branch_taken_0x11d338 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x11d338) {
            ctx->pc = 0x11D350u;
            goto label_11d350;
        }
    }
    ctx->pc = 0x11D340u;
label_11d340:
    // 0x11d340: 0x24040017  addiu       $a0, $zero, 0x17
    ctx->pc = 0x11d340u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
    // 0x11d344: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x11d344u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11d348: 0xc08ef28  jal         func_23BCA0
    ctx->pc = 0x11D348u;
    SET_GPR_U32(ctx, 31, 0x11D350u);
    ctx->pc = 0x23BCA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23BCA0u, 0x11D348u, 0x11D350u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11D350u;
label_11d350:
    // 0x11d350: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x11d350u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x11d354: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x11d354u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11d358: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x11d358u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11d35c: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x11d35cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x11d360: 0x3e00008  jr          $ra
    ctx->pc = 0x11D360u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11D360u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11D368u;
    // 0x11d368: 0x0  nop
    ctx->pc = 0x11d368u;
    // NOP
    // 0x11d36c: 0x0  nop
    ctx->pc = 0x11d36cu;
    // NOP
    ctx->pc = 0x11d370u;
}
