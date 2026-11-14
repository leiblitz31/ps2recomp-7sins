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

// Function: sub_002DC3C0
// Address: 0x2dc3c0 - 0x2dc570
void sub_002DC3C0_0x2dc3c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DC3C0_0x2dc3c0");
#endif

    switch (ctx->pc) {
        case 0x2dc3d8u: goto label_2dc3d8;
        case 0x2dc418u: goto label_2dc418;
        case 0x2dc460u: goto label_2dc460;
        case 0x2dc490u: goto label_2dc490;
        case 0x2dc4bcu: goto label_2dc4bc;
        case 0x2dc4ccu: goto label_2dc4cc;
        case 0x2dc4e4u: goto label_2dc4e4;
        case 0x2dc53cu: goto label_2dc53c;
        case 0x2dc55cu: goto label_2dc55c;
        default: break;
    }

    ctx->pc = 0x2dc3c0u;

    // 0x2dc3c0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2dc3c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2dc3c4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2dc3c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2dc3c8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x2dc3c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x2dc3cc: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x2dc3ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2dc3d0: 0xc09d130  jal         func_2744C0
    ctx->pc = 0x2DC3D0u;
    SET_GPR_U32(ctx, 31, 0x2DC3D8u);
    ctx->pc = 0x2744C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2744C0u, 0x2DC3D0u, 0x2DC3D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DC3D8u;
label_2dc3d8:
    // 0x2dc3d8: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x2dc3d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x2dc3dc: 0x24636950  addiu       $v1, $v1, 0x6950
    ctx->pc = 0x2dc3dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 26960));
    // 0x2dc3e0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2dc3e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2dc3e4: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x2dc3e4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x2dc3e8: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2dc3e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2dc3ec: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2dc3ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2dc3f0: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2dc3f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2dc3f4: 0x3e00008  jr          $ra
    ctx->pc = 0x2DC3F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DC3F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DC3FCu;
    // 0x2dc3fc: 0x0  nop
    ctx->pc = 0x2dc3fcu;
    // NOP
    // 0x2dc400: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2dc400u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2dc404: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2dc404u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2dc408: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x2dc408u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x2dc40c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x2dc40cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2dc410: 0xc09d248  jal         func_274920
    ctx->pc = 0x2DC410u;
    SET_GPR_U32(ctx, 31, 0x2DC418u);
    ctx->pc = 0x274920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x274920u, 0x2DC410u, 0x2DC418u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DC418u;
label_2dc418:
    // 0x2dc418: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x2dc418u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2dc41c: 0x1043002d  beq         $v0, $v1, . + 4 + (0x2D << 2)
    ctx->pc = 0x2DC41Cu;
    {
        const bool branch_taken_0x2dc41c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x2dc41c) {
            ctx->pc = 0x2DC4D4u;
            goto label_2dc4d4;
        }
    }
    ctx->pc = 0x2DC424u;
    // 0x2dc424: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2dc424u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2dc428: 0x1043002e  beq         $v0, $v1, . + 4 + (0x2E << 2)
    ctx->pc = 0x2DC428u;
    {
        const bool branch_taken_0x2dc428 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x2dc428) {
            ctx->pc = 0x2DC4E4u;
            goto label_2dc4e4;
        }
    }
    ctx->pc = 0x2DC430u;
    // 0x2dc430: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2dc430u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2dc434: 0x10430003  beq         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2DC434u;
    {
        const bool branch_taken_0x2dc434 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x2dc434) {
            ctx->pc = 0x2DC444u;
            goto label_2dc444;
        }
    }
    ctx->pc = 0x2DC43Cu;
    // 0x2dc43c: 0x10000029  b           . + 4 + (0x29 << 2)
    ctx->pc = 0x2DC43Cu;
    {
        const bool branch_taken_0x2dc43c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2dc43c) {
            ctx->pc = 0x2DC4E4u;
            goto label_2dc4e4;
        }
    }
    ctx->pc = 0x2DC444u;
label_2dc444:
    // 0x2dc444: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2dc444u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2dc448: 0x8c440030  lw          $a0, 0x30($v0)
    ctx->pc = 0x2dc448u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x2dc44c: 0x3c05004f  lui         $a1, 0x4F
    ctx->pc = 0x2dc44cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)79 << 16));
    // 0x2dc450: 0x24a5e618  addiu       $a1, $a1, -0x19E8
    ctx->pc = 0x2dc450u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294960664));
    // 0x2dc454: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2dc454u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dc458: 0xc047328  jal         func_11CCA0
    ctx->pc = 0x2DC458u;
    SET_GPR_U32(ctx, 31, 0x2DC460u);
    ctx->pc = 0x11CCA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11CCA0u, 0x2DC458u, 0x2DC460u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DC460u;
label_2dc460:
    // 0x2dc460: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2dc460u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2dc464: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x2DC464u;
    {
        const bool branch_taken_0x2dc464 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2dc464) {
            ctx->pc = 0x2DC498u;
            goto label_2dc498;
        }
    }
    ctx->pc = 0x2DC46Cu;
    // 0x2dc46c: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x2dc46cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2dc470: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2dc470u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2dc474: 0x8f84bbf0  lw          $a0, -0x4410($gp)
    ctx->pc = 0x2dc474u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949872)));
    // 0x2dc478: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x2dc478u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2dc47c: 0x8c660030  lw          $a2, 0x30($v1)
    ctx->pc = 0x2dc47cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 48)));
    // 0x2dc480: 0x8c47003c  lw          $a3, 0x3C($v0)
    ctx->pc = 0x2dc480u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
    // 0x2dc484: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x2dc484u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2dc488: 0xc08febc  jal         func_23FAF0
    ctx->pc = 0x2DC488u;
    SET_GPR_U32(ctx, 31, 0x2DC490u);
    ctx->pc = 0x23FAF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23FAF0u, 0x2DC488u, 0x2DC490u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DC490u;
label_2dc490:
    // 0x2dc490: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x2DC490u;
    {
        const bool branch_taken_0x2dc490 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2dc490) {
            ctx->pc = 0x2DC4BCu;
            goto label_2dc4bc;
        }
    }
    ctx->pc = 0x2DC498u;
label_2dc498:
    // 0x2dc498: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x2dc498u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2dc49c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2dc49cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2dc4a0: 0x8f84bbf0  lw          $a0, -0x4410($gp)
    ctx->pc = 0x2dc4a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949872)));
    // 0x2dc4a4: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x2dc4a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x2dc4a8: 0x8c660030  lw          $a2, 0x30($v1)
    ctx->pc = 0x2dc4a8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 48)));
    // 0x2dc4ac: 0x8c47003c  lw          $a3, 0x3C($v0)
    ctx->pc = 0x2dc4acu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
    // 0x2dc4b0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2dc4b0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dc4b4: 0xc08febc  jal         func_23FAF0
    ctx->pc = 0x2DC4B4u;
    SET_GPR_U32(ctx, 31, 0x2DC4BCu);
    ctx->pc = 0x23FAF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23FAF0u, 0x2DC4B4u, 0x2DC4BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DC4BCu;
label_2dc4bc:
    // 0x2dc4bc: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x2dc4bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2dc4c0: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x2dc4c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2dc4c4: 0xc09d250  jal         func_274940
    ctx->pc = 0x2DC4C4u;
    SET_GPR_U32(ctx, 31, 0x2DC4CCu);
    ctx->pc = 0x274940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x274940u, 0x2DC4C4u, 0x2DC4CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DC4CCu;
label_2dc4cc:
    // 0x2dc4cc: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2DC4CCu;
    {
        const bool branch_taken_0x2dc4cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2dc4cc) {
            ctx->pc = 0x2DC4E4u;
            goto label_2dc4e4;
        }
    }
    ctx->pc = 0x2DC4D4u;
label_2dc4d4:
    // 0x2dc4d4: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x2dc4d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2dc4d8: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x2dc4d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2dc4dc: 0xc09d250  jal         func_274940
    ctx->pc = 0x2DC4DCu;
    SET_GPR_U32(ctx, 31, 0x2DC4E4u);
    ctx->pc = 0x274940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x274940u, 0x2DC4DCu, 0x2DC4E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DC4E4u;
label_2dc4e4:
    // 0x2dc4e4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2dc4e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2dc4e8: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2dc4e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2dc4ec: 0x3e00008  jr          $ra
    ctx->pc = 0x2DC4ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DC4ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DC4F4u;
    // 0x2dc4f4: 0x0  nop
    ctx->pc = 0x2dc4f4u;
    // NOP
    // 0x2dc4f8: 0x0  nop
    ctx->pc = 0x2dc4f8u;
    // NOP
    // 0x2dc4fc: 0x0  nop
    ctx->pc = 0x2dc4fcu;
    // NOP
    // 0x2dc500: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2dc500u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2dc504: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2dc504u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2dc508: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x2dc508u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x2dc50c: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x2dc50cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
    // 0x2dc510: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2dc510u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2dc514: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x2DC514u;
    {
        const bool branch_taken_0x2dc514 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2dc514) {
            ctx->pc = 0x2DC55Cu;
            goto label_2dc55c;
        }
    }
    ctx->pc = 0x2DC51Cu;
    // 0x2dc51c: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x2dc51cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x2dc520: 0x24636950  addiu       $v1, $v1, 0x6950
    ctx->pc = 0x2dc520u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 26960));
    // 0x2dc524: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2dc524u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2dc528: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x2dc528u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x2dc52c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x2dc52cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2dc530: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2dc530u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dc534: 0xc09d150  jal         func_274540
    ctx->pc = 0x2DC534u;
    SET_GPR_U32(ctx, 31, 0x2DC53Cu);
    ctx->pc = 0x274540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x274540u, 0x2DC534u, 0x2DC53Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DC53Cu;
label_2dc53c:
    // 0x2dc53c: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x2dc53cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2dc540: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x2dc540u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x2dc544: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2dc544u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x2dc548: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2DC548u;
    {
        const bool branch_taken_0x2dc548 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x2dc548) {
            ctx->pc = 0x2DC55Cu;
            goto label_2dc55c;
        }
    }
    ctx->pc = 0x2DC550u;
    // 0x2dc550: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x2dc550u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2dc554: 0xc0ba070  jal         func_2E81C0
    ctx->pc = 0x2DC554u;
    SET_GPR_U32(ctx, 31, 0x2DC55Cu);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x2DC554u, 0x2DC55Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DC55Cu;
label_2dc55c:
    // 0x2dc55c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2dc55cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2dc560: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2dc560u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2dc564: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x2dc564u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2dc568: 0x3e00008  jr          $ra
    ctx->pc = 0x2DC568u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DC568u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DC570u;
}
