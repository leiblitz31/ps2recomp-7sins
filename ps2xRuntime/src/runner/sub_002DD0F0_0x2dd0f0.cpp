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

// Function: sub_002DD0F0
// Address: 0x2dd0f0 - 0x2dd240
void sub_002DD0F0_0x2dd0f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DD0F0_0x2dd0f0");
#endif

    switch (ctx->pc) {
        case 0x2dd134u: goto label_2dd134;
        case 0x2dd148u: goto label_2dd148;
        case 0x2dd15cu: goto label_2dd15c;
        case 0x2dd190u: goto label_2dd190;
        case 0x2dd1a0u: goto label_2dd1a0;
        case 0x2dd1b8u: goto label_2dd1b8;
        case 0x2dd1d0u: goto label_2dd1d0;
        case 0x2dd1f0u: goto label_2dd1f0;
        case 0x2dd204u: goto label_2dd204;
        default: break;
    }

    ctx->pc = 0x2dd0f0u;

    // 0x2dd0f0: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x2dd0f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x2dd0f4: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x2dd0f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x2dd0f8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x2dd0f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x2dd0fc: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2dd0fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2dd100: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2dd100u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2dd104: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2dd104u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2dd108: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2dd108u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2dd10c: 0xafa40070  sw          $a0, 0x70($sp)
    ctx->pc = 0x2dd10cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 4));
    // 0x2dd110: 0xafa50080  sw          $a1, 0x80($sp)
    ctx->pc = 0x2dd110u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 5));
    // 0x2dd114: 0xafa60090  sw          $a2, 0x90($sp)
    ctx->pc = 0x2dd114u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 6));
    // 0x2dd118: 0xafa700a0  sw          $a3, 0xA0($sp)
    ctx->pc = 0x2dd118u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 7));
    // 0x2dd11c: 0xafa800b0  sw          $t0, 0xB0($sp)
    ctx->pc = 0x2dd11cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 8));
    // 0x2dd120: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x2dd120u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2dd124: 0x8c44002c  lw          $a0, 0x2C($v0)
    ctx->pc = 0x2dd124u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
    // 0x2dd128: 0x2405000d  addiu       $a1, $zero, 0xD
    ctx->pc = 0x2dd128u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x2dd12c: 0xc085538  jal         func_2154E0
    ctx->pc = 0x2DD12Cu;
    SET_GPR_U32(ctx, 31, 0x2DD134u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x2DD12Cu, 0x2DD134u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DD134u;
label_2dd134:
    // 0x2dd134: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x2dd134u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dd138: 0x8fa40070  lw          $a0, 0x70($sp)
    ctx->pc = 0x2dd138u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2dd13c: 0x8fa500a0  lw          $a1, 0xA0($sp)
    ctx->pc = 0x2dd13cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2dd140: 0xc0b74ec  jal         func_2DD3B0
    ctx->pc = 0x2DD140u;
    SET_GPR_U32(ctx, 31, 0x2DD148u);
    ctx->pc = 0x2DD3B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DD3B0u, 0x2DD140u, 0x2DD148u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DD148u;
label_2dd148:
    // 0x2dd148: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2dd148u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dd14c: 0x8fa40070  lw          $a0, 0x70($sp)
    ctx->pc = 0x2dd14cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2dd150: 0x8fa500b0  lw          $a1, 0xB0($sp)
    ctx->pc = 0x2dd150u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x2dd154: 0xc0b74ec  jal         func_2DD3B0
    ctx->pc = 0x2DD154u;
    SET_GPR_U32(ctx, 31, 0x2DD15Cu);
    ctx->pc = 0x2DD3B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DD3B0u, 0x2DD154u, 0x2DD15Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DD15Cu;
label_2dd15c:
    // 0x2dd15c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2dd15cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dd160: 0x12400003  beqz        $s2, . + 4 + (0x3 << 2)
    ctx->pc = 0x2DD160u;
    {
        const bool branch_taken_0x2dd160 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x2dd160) {
            ctx->pc = 0x2DD170u;
            goto label_2dd170;
        }
    }
    ctx->pc = 0x2DD168u;
    // 0x2dd168: 0x16200004  bnez        $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2DD168u;
    {
        const bool branch_taken_0x2dd168 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x2dd168) {
            ctx->pc = 0x2DD17Cu;
            goto label_2dd17c;
        }
    }
    ctx->pc = 0x2DD170u;
label_2dd170:
    // 0x2dd170: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2dd170u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dd174: 0x10000027  b           . + 4 + (0x27 << 2)
    ctx->pc = 0x2DD174u;
    {
        const bool branch_taken_0x2dd174 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2dd174) {
            ctx->pc = 0x2DD214u;
            goto label_2dd214;
        }
    }
    ctx->pc = 0x2DD17Cu;
label_2dd17c:
    // 0x2dd17c: 0x16320024  bne         $s1, $s2, . + 4 + (0x24 << 2)
    ctx->pc = 0x2DD17Cu;
    {
        const bool branch_taken_0x2dd17c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 18));
        if (branch_taken_0x2dd17c) {
            ctx->pc = 0x2DD210u;
            goto label_2dd210;
        }
    }
    ctx->pc = 0x2DD184u;
    // 0x2dd184: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x2dd184u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x2dd188: 0xc119b68  jal         func_466DA0
    ctx->pc = 0x2DD188u;
    SET_GPR_U32(ctx, 31, 0x2DD190u);
    ctx->pc = 0x466DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x466DA0u, 0x2DD188u, 0x2DD190u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DD190u;
label_2dd190:
    // 0x2dd190: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x2dd190u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x2dd194: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2dd194u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dd198: 0xc0400e0  jal         func_100380
    ctx->pc = 0x2DD198u;
    SET_GPR_U32(ctx, 31, 0x2DD1A0u);
    ctx->pc = 0x100380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100380u, 0x2DD198u, 0x2DD1A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DD1A0u;
label_2dd1a0:
    // 0x2dd1a0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2dd1a0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dd1a4: 0x12000005  beqz        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2DD1A4u;
    {
        const bool branch_taken_0x2dd1a4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2dd1a4) {
            ctx->pc = 0x2DD1BCu;
            goto label_2dd1bc;
        }
    }
    ctx->pc = 0x2DD1ACu;
    // 0x2dd1ac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2dd1acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dd1b0: 0xc0b9f78  jal         func_2E7DE0
    ctx->pc = 0x2DD1B0u;
    SET_GPR_U32(ctx, 31, 0x2DD1B8u);
    ctx->pc = 0x2E7DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E7DE0u, 0x2DD1B0u, 0x2DD1B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DD1B8u;
label_2dd1b8:
    // 0x2dd1b8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2dd1b8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2dd1bc:
    // 0x2dd1bc: 0xafb0006c  sw          $s0, 0x6C($sp)
    ctx->pc = 0x2dd1bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 108), GPR_U32(ctx, 16));
    // 0x2dd1c0: 0x8e24002c  lw          $a0, 0x2C($s1)
    ctx->pc = 0x2dd1c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
    // 0x2dd1c4: 0x24050017  addiu       $a1, $zero, 0x17
    ctx->pc = 0x2dd1c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
    // 0x2dd1c8: 0xc085538  jal         func_2154E0
    ctx->pc = 0x2DD1C8u;
    SET_GPR_U32(ctx, 31, 0x2DD1D0u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x2DD1C8u, 0x2DD1D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DD1D0u;
label_2dd1d0:
    // 0x2dd1d0: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x2dd1d0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dd1d4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2dd1d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dd1d8: 0x8fa50080  lw          $a1, 0x80($sp)
    ctx->pc = 0x2dd1d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2dd1dc: 0x8fa6006c  lw          $a2, 0x6C($sp)
    ctx->pc = 0x2dd1dcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
    // 0x2dd1e0: 0x8fa700a0  lw          $a3, 0xA0($sp)
    ctx->pc = 0x2dd1e0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2dd1e4: 0x8fa800b0  lw          $t0, 0xB0($sp)
    ctx->pc = 0x2dd1e4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x2dd1e8: 0xc0b7f68  jal         func_2DFDA0
    ctx->pc = 0x2DD1E8u;
    SET_GPR_U32(ctx, 31, 0x2DD1F0u);
    ctx->pc = 0x2DFDA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DFDA0u, 0x2DD1E8u, 0x2DD1F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DD1F0u;
label_2dd1f0:
    // 0x2dd1f0: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x2dd1f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2dd1f4: 0x24440004  addiu       $a0, $v0, 0x4
    ctx->pc = 0x2dd1f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x2dd1f8: 0x27a5006c  addiu       $a1, $sp, 0x6C
    ctx->pc = 0x2dd1f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 108));
    // 0x2dd1fc: 0xc0b48a4  jal         func_2D2290
    ctx->pc = 0x2DD1FCu;
    SET_GPR_U32(ctx, 31, 0x2DD204u);
    ctx->pc = 0x2D2290u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D2290u, 0x2DD1FCu, 0x2DD204u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DD204u;
label_2dd204:
    // 0x2dd204: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2dd204u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2dd208: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2DD208u;
    {
        const bool branch_taken_0x2dd208 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2dd208) {
            ctx->pc = 0x2DD214u;
            goto label_2dd214;
        }
    }
    ctx->pc = 0x2DD210u;
label_2dd210:
    // 0x2dd210: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2dd210u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2dd214:
    // 0x2dd214: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x2dd214u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2dd218: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x2dd218u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2dd21c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2dd21cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2dd220: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2dd220u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2dd224: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2dd224u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2dd228: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2dd228u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2dd22c: 0x27bd00c0  addiu       $sp, $sp, 0xC0
    ctx->pc = 0x2dd22cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x2dd230: 0x3e00008  jr          $ra
    ctx->pc = 0x2DD230u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DD230u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DD238u;
    // 0x2dd238: 0x0  nop
    ctx->pc = 0x2dd238u;
    // NOP
    // 0x2dd23c: 0x0  nop
    ctx->pc = 0x2dd23cu;
    // NOP
    ctx->pc = 0x2dd240u;
}
