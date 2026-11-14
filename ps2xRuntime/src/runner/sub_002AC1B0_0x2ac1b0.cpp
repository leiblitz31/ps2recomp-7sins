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

// Function: sub_002AC1B0
// Address: 0x2ac1b0 - 0x2ac280
void sub_002AC1B0_0x2ac1b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002AC1B0_0x2ac1b0");
#endif

    switch (ctx->pc) {
        case 0x2ac1e4u: goto label_2ac1e4;
        case 0x2ac218u: goto label_2ac218;
        case 0x2ac224u: goto label_2ac224;
        case 0x2ac22cu: goto label_2ac22c;
        case 0x2ac23cu: goto label_2ac23c;
        case 0x2ac250u: goto label_2ac250;
        case 0x2ac260u: goto label_2ac260;
        case 0x2ac268u: goto label_2ac268;
        default: break;
    }

    ctx->pc = 0x2ac1b0u;

    // 0x2ac1b0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2ac1b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2ac1b4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2ac1b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2ac1b8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2ac1b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2ac1bc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2ac1bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2ac1c0: 0x8f83bc54  lw          $v1, -0x43AC($gp)
    ctx->pc = 0x2ac1c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949972)));
    // 0x2ac1c4: 0x10600028  beqz        $v1, . + 4 + (0x28 << 2)
    ctx->pc = 0x2AC1C4u;
    {
        const bool branch_taken_0x2ac1c4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ac1c4) {
            ctx->pc = 0x2AC268u;
            goto label_2ac268;
        }
    }
    ctx->pc = 0x2AC1CCu;
    // 0x2ac1cc: 0x8f83bc58  lw          $v1, -0x43A8($gp)
    ctx->pc = 0x2ac1ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949976)));
    // 0x2ac1d0: 0x10600025  beqz        $v1, . + 4 + (0x25 << 2)
    ctx->pc = 0x2AC1D0u;
    {
        const bool branch_taken_0x2ac1d0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ac1d0) {
            ctx->pc = 0x2AC268u;
            goto label_2ac268;
        }
    }
    ctx->pc = 0x2AC1D8u;
    // 0x2ac1d8: 0x8f84bc54  lw          $a0, -0x43AC($gp)
    ctx->pc = 0x2ac1d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949972)));
    // 0x2ac1dc: 0xc107538  jal         func_41D4E0
    ctx->pc = 0x2AC1DCu;
    SET_GPR_U32(ctx, 31, 0x2AC1E4u);
    ctx->pc = 0x41D4E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41D4E0u, 0x2AC1DCu, 0x2AC1E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AC1E4u;
label_2ac1e4:
    // 0x2ac1e4: 0x10020020  beq         $zero, $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x2AC1E4u;
    {
        const bool branch_taken_0x2ac1e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 2));
        if (branch_taken_0x2ac1e4) {
            ctx->pc = 0x2AC268u;
            goto label_2ac268;
        }
    }
    ctx->pc = 0x2AC1ECu;
    // 0x2ac1ec: 0x27a2003c  addiu       $v0, $sp, 0x3C
    ctx->pc = 0x2ac1ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 60));
    // 0x2ac1f0: 0xc780a478  lwc1        $f0, -0x5B88($gp)
    ctx->pc = 0x2ac1f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294943864)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ac1f4: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x2ac1f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x2ac1f8: 0x8f82bc54  lw          $v0, -0x43AC($gp)
    ctx->pc = 0x2ac1f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949972)));
    // 0x2ac1fc: 0x90420023  lbu         $v0, 0x23($v0)
    ctx->pc = 0x2ac1fcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 35)));
    // 0x2ac200: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2ac200u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2ac204: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2ac204u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2ac208: 0x22a00  sll         $a1, $v0, 8
    ctx->pc = 0x2ac208u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x2ac20c: 0x27a4003c  addiu       $a0, $sp, 0x3C
    ctx->pc = 0x2ac20cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 60));
    // 0x2ac210: 0xc10719c  jal         func_41C670
    ctx->pc = 0x2AC210u;
    SET_GPR_U32(ctx, 31, 0x2AC218u);
    ctx->pc = 0x41C670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41C670u, 0x2AC210u, 0x2AC218u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AC218u;
label_2ac218:
    // 0x2ac218: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2ac218u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ac21c: 0xc10757c  jal         func_41D5F0
    ctx->pc = 0x2AC21Cu;
    SET_GPR_U32(ctx, 31, 0x2AC224u);
    ctx->pc = 0x41D5F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41D5F0u, 0x2AC21Cu, 0x2AC224u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AC224u;
label_2ac224:
    // 0x2ac224: 0xc12242c  jal         func_4890B0
    ctx->pc = 0x2AC224u;
    SET_GPR_U32(ctx, 31, 0x2AC22Cu);
    ctx->pc = 0x4890B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4890B0u, 0x2AC224u, 0x2AC22Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AC22Cu;
label_2ac22c:
    // 0x2ac22c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2ac22cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ac230: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2ac230u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ac234: 0xc105f96  jal         func_417E58
    ctx->pc = 0x2AC234u;
    SET_GPR_U32(ctx, 31, 0x2AC23Cu);
    ctx->pc = 0x417E58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x417E58u, 0x2AC234u, 0x2AC23Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AC23Cu;
label_2ac23c:
    // 0x2ac23c: 0x8f84bc58  lw          $a0, -0x43A8($gp)
    ctx->pc = 0x2ac23cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949976)));
    // 0x2ac240: 0x3c05004f  lui         $a1, 0x4F
    ctx->pc = 0x2ac240u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)79 << 16));
    // 0x2ac244: 0x24a5ddf0  addiu       $a1, $a1, -0x2210
    ctx->pc = 0x2ac244u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294958576));
    // 0x2ac248: 0xc10752a  jal         func_41D4A8
    ctx->pc = 0x2AC248u;
    SET_GPR_U32(ctx, 31, 0x2AC250u);
    ctx->pc = 0x41D4A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41D4A8u, 0x2AC248u, 0x2AC250u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AC250u;
label_2ac250:
    // 0x2ac250: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2ac250u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ac254: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2ac254u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ac258: 0xc105f9e  jal         func_417E78
    ctx->pc = 0x2AC258u;
    SET_GPR_U32(ctx, 31, 0x2AC260u);
    ctx->pc = 0x417E78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x417E78u, 0x2AC258u, 0x2AC260u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AC260u;
label_2ac260:
    // 0x2ac260: 0xc107556  jal         func_41D558
    ctx->pc = 0x2AC260u;
    SET_GPR_U32(ctx, 31, 0x2AC268u);
    ctx->pc = 0x41D558u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41D558u, 0x2AC260u, 0x2AC268u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AC268u;
label_2ac268:
    // 0x2ac268: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2ac268u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2ac26c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2ac26cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ac270: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2ac270u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ac274: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x2ac274u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2ac278: 0x3e00008  jr          $ra
    ctx->pc = 0x2AC278u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AC278u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2AC280u;
}
