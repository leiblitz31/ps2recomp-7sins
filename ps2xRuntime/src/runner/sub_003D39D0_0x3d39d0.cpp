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

// Function: sub_003D39D0
// Address: 0x3d39d0 - 0x3d3c20
void sub_003D39D0_0x3d39d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003D39D0_0x3d39d0");
#endif

    switch (ctx->pc) {
        case 0x3d39d0u: goto label_3d39d0;
        case 0x3d39d4u: goto label_3d39d4;
        case 0x3d39d8u: goto label_3d39d8;
        case 0x3d39dcu: goto label_3d39dc;
        case 0x3d39e0u: goto label_3d39e0;
        case 0x3d39e4u: goto label_3d39e4;
        case 0x3d39e8u: goto label_3d39e8;
        case 0x3d39ecu: goto label_3d39ec;
        case 0x3d39f0u: goto label_3d39f0;
        case 0x3d39f4u: goto label_3d39f4;
        case 0x3d39f8u: goto label_3d39f8;
        case 0x3d39fcu: goto label_3d39fc;
        case 0x3d3a00u: goto label_3d3a00;
        case 0x3d3a04u: goto label_3d3a04;
        case 0x3d3a08u: goto label_3d3a08;
        case 0x3d3a0cu: goto label_3d3a0c;
        case 0x3d3a10u: goto label_3d3a10;
        case 0x3d3a14u: goto label_3d3a14;
        case 0x3d3a18u: goto label_3d3a18;
        case 0x3d3a1cu: goto label_3d3a1c;
        case 0x3d3a20u: goto label_3d3a20;
        case 0x3d3a24u: goto label_3d3a24;
        case 0x3d3a28u: goto label_3d3a28;
        case 0x3d3a2cu: goto label_3d3a2c;
        case 0x3d3a30u: goto label_3d3a30;
        case 0x3d3a34u: goto label_3d3a34;
        case 0x3d3a38u: goto label_3d3a38;
        case 0x3d3a3cu: goto label_3d3a3c;
        case 0x3d3a40u: goto label_3d3a40;
        case 0x3d3a44u: goto label_3d3a44;
        case 0x3d3a48u: goto label_3d3a48;
        case 0x3d3a4cu: goto label_3d3a4c;
        case 0x3d3a50u: goto label_3d3a50;
        case 0x3d3a54u: goto label_3d3a54;
        case 0x3d3a58u: goto label_3d3a58;
        case 0x3d3a5cu: goto label_3d3a5c;
        case 0x3d3a60u: goto label_3d3a60;
        case 0x3d3a64u: goto label_3d3a64;
        case 0x3d3a68u: goto label_3d3a68;
        case 0x3d3a6cu: goto label_3d3a6c;
        case 0x3d3a70u: goto label_3d3a70;
        case 0x3d3a74u: goto label_3d3a74;
        case 0x3d3a78u: goto label_3d3a78;
        case 0x3d3a7cu: goto label_3d3a7c;
        case 0x3d3a80u: goto label_3d3a80;
        case 0x3d3a84u: goto label_3d3a84;
        case 0x3d3a88u: goto label_3d3a88;
        case 0x3d3a8cu: goto label_3d3a8c;
        case 0x3d3a90u: goto label_3d3a90;
        case 0x3d3a94u: goto label_3d3a94;
        case 0x3d3a98u: goto label_3d3a98;
        case 0x3d3a9cu: goto label_3d3a9c;
        case 0x3d3aa0u: goto label_3d3aa0;
        case 0x3d3aa4u: goto label_3d3aa4;
        case 0x3d3aa8u: goto label_3d3aa8;
        case 0x3d3aacu: goto label_3d3aac;
        case 0x3d3ab0u: goto label_3d3ab0;
        case 0x3d3ab4u: goto label_3d3ab4;
        case 0x3d3ab8u: goto label_3d3ab8;
        case 0x3d3abcu: goto label_3d3abc;
        case 0x3d3ac0u: goto label_3d3ac0;
        case 0x3d3ac4u: goto label_3d3ac4;
        case 0x3d3ac8u: goto label_3d3ac8;
        case 0x3d3accu: goto label_3d3acc;
        case 0x3d3ad0u: goto label_3d3ad0;
        case 0x3d3ad4u: goto label_3d3ad4;
        case 0x3d3ad8u: goto label_3d3ad8;
        case 0x3d3adcu: goto label_3d3adc;
        case 0x3d3ae0u: goto label_3d3ae0;
        case 0x3d3ae4u: goto label_3d3ae4;
        case 0x3d3ae8u: goto label_3d3ae8;
        case 0x3d3aecu: goto label_3d3aec;
        case 0x3d3af0u: goto label_3d3af0;
        case 0x3d3af4u: goto label_3d3af4;
        case 0x3d3af8u: goto label_3d3af8;
        case 0x3d3afcu: goto label_3d3afc;
        case 0x3d3b00u: goto label_3d3b00;
        case 0x3d3b04u: goto label_3d3b04;
        case 0x3d3b08u: goto label_3d3b08;
        case 0x3d3b0cu: goto label_3d3b0c;
        case 0x3d3b10u: goto label_3d3b10;
        case 0x3d3b14u: goto label_3d3b14;
        case 0x3d3b18u: goto label_3d3b18;
        case 0x3d3b1cu: goto label_3d3b1c;
        case 0x3d3b20u: goto label_3d3b20;
        case 0x3d3b24u: goto label_3d3b24;
        case 0x3d3b28u: goto label_3d3b28;
        case 0x3d3b2cu: goto label_3d3b2c;
        case 0x3d3b30u: goto label_3d3b30;
        case 0x3d3b34u: goto label_3d3b34;
        case 0x3d3b38u: goto label_3d3b38;
        case 0x3d3b3cu: goto label_3d3b3c;
        case 0x3d3b40u: goto label_3d3b40;
        case 0x3d3b44u: goto label_3d3b44;
        case 0x3d3b48u: goto label_3d3b48;
        case 0x3d3b4cu: goto label_3d3b4c;
        case 0x3d3b50u: goto label_3d3b50;
        case 0x3d3b54u: goto label_3d3b54;
        case 0x3d3b58u: goto label_3d3b58;
        case 0x3d3b5cu: goto label_3d3b5c;
        case 0x3d3b60u: goto label_3d3b60;
        case 0x3d3b64u: goto label_3d3b64;
        case 0x3d3b68u: goto label_3d3b68;
        case 0x3d3b6cu: goto label_3d3b6c;
        case 0x3d3b70u: goto label_3d3b70;
        case 0x3d3b74u: goto label_3d3b74;
        case 0x3d3b78u: goto label_3d3b78;
        case 0x3d3b7cu: goto label_3d3b7c;
        case 0x3d3b80u: goto label_3d3b80;
        case 0x3d3b84u: goto label_3d3b84;
        case 0x3d3b88u: goto label_3d3b88;
        case 0x3d3b8cu: goto label_3d3b8c;
        case 0x3d3b90u: goto label_3d3b90;
        case 0x3d3b94u: goto label_3d3b94;
        case 0x3d3b98u: goto label_3d3b98;
        case 0x3d3b9cu: goto label_3d3b9c;
        case 0x3d3ba0u: goto label_3d3ba0;
        case 0x3d3ba4u: goto label_3d3ba4;
        case 0x3d3ba8u: goto label_3d3ba8;
        case 0x3d3bacu: goto label_3d3bac;
        case 0x3d3bb0u: goto label_3d3bb0;
        case 0x3d3bb4u: goto label_3d3bb4;
        case 0x3d3bb8u: goto label_3d3bb8;
        case 0x3d3bbcu: goto label_3d3bbc;
        case 0x3d3bc0u: goto label_3d3bc0;
        case 0x3d3bc4u: goto label_3d3bc4;
        case 0x3d3bc8u: goto label_3d3bc8;
        case 0x3d3bccu: goto label_3d3bcc;
        case 0x3d3bd0u: goto label_3d3bd0;
        case 0x3d3bd4u: goto label_3d3bd4;
        case 0x3d3bd8u: goto label_3d3bd8;
        case 0x3d3bdcu: goto label_3d3bdc;
        case 0x3d3be0u: goto label_3d3be0;
        case 0x3d3be4u: goto label_3d3be4;
        case 0x3d3be8u: goto label_3d3be8;
        case 0x3d3becu: goto label_3d3bec;
        case 0x3d3bf0u: goto label_3d3bf0;
        case 0x3d3bf4u: goto label_3d3bf4;
        case 0x3d3bf8u: goto label_3d3bf8;
        case 0x3d3bfcu: goto label_3d3bfc;
        case 0x3d3c00u: goto label_3d3c00;
        case 0x3d3c04u: goto label_3d3c04;
        case 0x3d3c08u: goto label_3d3c08;
        case 0x3d3c0cu: goto label_3d3c0c;
        case 0x3d3c10u: goto label_3d3c10;
        case 0x3d3c14u: goto label_3d3c14;
        case 0x3d3c18u: goto label_3d3c18;
        case 0x3d3c1cu: goto label_3d3c1c;
        default: break;
    }

    ctx->pc = 0x3d39d0u;

label_3d39d0:
    // 0x3d39d0: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x3d39d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
label_3d39d4:
    // 0x3d39d4: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x3d39d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
label_3d39d8:
    // 0x3d39d8: 0x7fbe0020  sq          $fp, 0x20($sp)
    ctx->pc = 0x3d39d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 30));
label_3d39dc:
    // 0x3d39dc: 0x7fb000a0  sq          $s0, 0xA0($sp)
    ctx->pc = 0x3d39dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 16));
label_3d39e0:
    // 0x3d39e0: 0x60f02d  daddu       $fp, $v1, $zero
    ctx->pc = 0x3d39e0u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_3d39e4:
    // 0x3d39e4: 0x7fb10090  sq          $s1, 0x90($sp)
    ctx->pc = 0x3d39e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 17));
label_3d39e8:
    // 0x3d39e8: 0x2463e880  addiu       $v1, $v1, -0x1780
    ctx->pc = 0x3d39e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294961280));
label_3d39ec:
    // 0x3d39ec: 0x7fb20080  sq          $s2, 0x80($sp)
    ctx->pc = 0x3d39ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 18));
label_3d39f0:
    // 0x3d39f0: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x3d39f0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3d39f4:
    // 0x3d39f4: 0x7fb30070  sq          $s3, 0x70($sp)
    ctx->pc = 0x3d39f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 19));
label_3d39f8:
    // 0x3d39f8: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x3d39f8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3d39fc:
    // 0x3d39fc: 0x7fb70030  sq          $s7, 0x30($sp)
    ctx->pc = 0x3d39fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 23));
label_3d3a00:
    // 0x3d3a00: 0x3c040062  lui         $a0, 0x62
    ctx->pc = 0x3d3a00u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)98 << 16));
label_3d3a04:
    // 0x3d3a04: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x3d3a04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
label_3d3a08:
    // 0x3d3a08: 0xa0b82d  daddu       $s7, $a1, $zero
    ctx->pc = 0x3d3a08u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3d3a0c:
    // 0x3d3a0c: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x3d3a0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_3d3a10:
    // 0x3d3a10: 0x2484b20c  addiu       $a0, $a0, -0x4DF4
    ctx->pc = 0x3d3a10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294947340));
label_3d3a14:
    // 0x3d3a14: 0x7fb60040  sq          $s6, 0x40($sp)
    ctx->pc = 0x3d3a14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 22));
label_3d3a18:
    // 0x3d3a18: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3d3a18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_3d3a1c:
    // 0x3d3a1c: 0x8c6200f4  lw          $v0, 0xF4($v1)
    ctx->pc = 0x3d3a1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 244)));
label_3d3a20:
    // 0x3d3a20: 0x40f809  jalr        $v0
label_3d3a24:
    if (ctx->pc == 0x3D3A24u) {
        ctx->pc = 0x3D3A24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D3A20u;
        // 0x3d3a24: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D3A28u;
        goto label_3d3a28;
    }
    ctx->pc = 0x3D3A20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3D3A28u);
        ctx->pc = 0x3D3A24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D3A20u;
        // 0x3d3a24: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D3A20u, 0x3D3A28u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3D3A28u;
label_3d3a28:
    // 0x3d3a28: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x3d3a28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_3d3a2c:
    // 0x3d3a2c: 0x629823  subu        $s3, $v1, $v0
    ctx->pc = 0x3d3a2cu;
    SET_GPR_S32(ctx, 19, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_3d3a30:
    // 0x3d3a30: 0x1260001a  beqz        $s3, . + 4 + (0x1A << 2)
label_3d3a34:
    if (ctx->pc == 0x3D3A34u) {
        ctx->pc = 0x3D3A34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D3A30u;
        // 0x3d3a34: 0x2404000a  addiu       $a0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D3A38u;
        goto label_3d3a38;
    }
    ctx->pc = 0x3D3A30u;
    {
        const bool branch_taken_0x3d3a30 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D3A34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D3A30u;
        // 0x3d3a34: 0x2404000a  addiu       $a0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d3a30) {
            ctx->pc = 0x3D3A9Cu;
            goto label_3d3a9c;
        }
    }
    ctx->pc = 0x3D3A38u;
label_3d3a38:
    // 0x3d3a38: 0x1a60000d  blez        $s3, . + 4 + (0xD << 2)
label_3d3a3c:
    if (ctx->pc == 0x3D3A3Cu) {
        ctx->pc = 0x3D3A3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D3A38u;
        // 0x3d3a3c: 0x32630003  andi        $v1, $s3, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D3A40u;
        goto label_3d3a40;
    }
    ctx->pc = 0x3D3A38u;
    {
        const bool branch_taken_0x3d3a38 = (GPR_S32(ctx, 19) <= 0);
        ctx->pc = 0x3D3A3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D3A38u;
        // 0x3d3a3c: 0x32630003  andi        $v1, $s3, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d3a38) {
            ctx->pc = 0x3D3A70u;
            goto label_3d3a70;
        }
    }
    ctx->pc = 0x3D3A40u;
label_3d3a40:
    // 0x3d3a40: 0x50600010  beql        $v1, $zero, . + 4 + (0x10 << 2)
label_3d3a44:
    if (ctx->pc == 0x3D3A44u) {
        ctx->pc = 0x3D3A44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D3A40u;
        // 0x3d3a44: 0x2248818  mult        $s1, $s1, $a0 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 17, (int32_t)result); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D3A48u;
        goto label_3d3a48;
    }
    ctx->pc = 0x3D3A40u;
    {
        const bool branch_taken_0x3d3a40 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d3a40) {
            ctx->pc = 0x3D3A44u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3D3A40u;
            // 0x3d3a44: 0x2248818  mult        $s1, $s1, $a0 (Delay Slot)
            { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 17, (int32_t)result); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x3D3A84u;
            goto label_3d3a84;
        }
    }
    ctx->pc = 0x3D3A48u;
label_3d3a48:
    // 0x3d3a48: 0x28620002  slti        $v0, $v1, 0x2
    ctx->pc = 0x3d3a48u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
label_3d3a4c:
    // 0x3d3a4c: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
label_3d3a50:
    if (ctx->pc == 0x3D3A50u) {
        ctx->pc = 0x3D3A50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D3A4Cu;
        // 0x3d3a50: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D3A54u;
        goto label_3d3a54;
    }
    ctx->pc = 0x3D3A4Cu;
    {
        const bool branch_taken_0x3d3a4c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3d3a4c) {
            ctx->pc = 0x3D3A50u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3D3A4Cu;
            // 0x3d3a50: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3D3A74u;
            goto label_3d3a74;
        }
    }
    ctx->pc = 0x3D3A54u;
label_3d3a54:
    // 0x3d3a54: 0x28620003  slti        $v0, $v1, 0x3
    ctx->pc = 0x3d3a54u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
label_3d3a58:
    // 0x3d3a58: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
label_3d3a5c:
    if (ctx->pc == 0x3D3A5Cu) {
        ctx->pc = 0x3D3A5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D3A58u;
        // 0x3d3a5c: 0x2248818  mult        $s1, $s1, $a0 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 17, (int32_t)result); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D3A60u;
        goto label_3d3a60;
    }
    ctx->pc = 0x3D3A58u;
    {
        const bool branch_taken_0x3d3a58 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3d3a58) {
            ctx->pc = 0x3D3A5Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3D3A58u;
            // 0x3d3a5c: 0x2248818  mult        $s1, $s1, $a0 (Delay Slot)
            { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 17, (int32_t)result); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x3D3A6Cu;
            goto label_3d3a6c;
        }
    }
    ctx->pc = 0x3D3A60u;
label_3d3a60:
    // 0x3d3a60: 0x2411000a  addiu       $s1, $zero, 0xA
    ctx->pc = 0x3d3a60u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_3d3a64:
    // 0x3d3a64: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x3d3a64u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3d3a68:
    // 0x3d3a68: 0x2248818  mult        $s1, $s1, $a0
    ctx->pc = 0x3d3a68u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 17, (int32_t)result); }
label_3d3a6c:
    // 0x3d3a6c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x3d3a6cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_3d3a70:
    // 0x3d3a70: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x3d3a70u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_3d3a74:
    // 0x3d3a74: 0x213102b  sltu        $v0, $s0, $s3
    ctx->pc = 0x3d3a74u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
label_3d3a78:
    // 0x3d3a78: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_3d3a7c:
    if (ctx->pc == 0x3D3A7Cu) {
        ctx->pc = 0x3D3A7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D3A78u;
        // 0x3d3a7c: 0x2248818  mult        $s1, $s1, $a0 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 17, (int32_t)result); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D3A80u;
        goto label_3d3a80;
    }
    ctx->pc = 0x3D3A78u;
    {
        const bool branch_taken_0x3d3a78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D3A7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D3A78u;
        // 0x3d3a7c: 0x2248818  mult        $s1, $s1, $a0 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 17, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d3a78) {
            ctx->pc = 0x3D3A9Cu;
            goto label_3d3a9c;
        }
    }
    ctx->pc = 0x3D3A80u;
label_3d3a80:
    // 0x3d3a80: 0x2248818  mult        $s1, $s1, $a0
    ctx->pc = 0x3d3a80u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 17, (int32_t)result); }
label_3d3a84:
    // 0x3d3a84: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x3d3a84u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_3d3a88:
    // 0x3d3a88: 0x213102b  sltu        $v0, $s0, $s3
    ctx->pc = 0x3d3a88u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
label_3d3a8c:
    // 0x3d3a8c: 0x2248818  mult        $s1, $s1, $a0
    ctx->pc = 0x3d3a8cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 17, (int32_t)result); }
label_3d3a90:
    // 0x3d3a90: 0x2248818  mult        $s1, $s1, $a0
    ctx->pc = 0x3d3a90u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 17, (int32_t)result); }
label_3d3a94:
    // 0x3d3a94: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
label_3d3a98:
    if (ctx->pc == 0x3D3A98u) {
        ctx->pc = 0x3D3A98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D3A94u;
        // 0x3d3a98: 0x2248818  mult        $s1, $s1, $a0 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 17, (int32_t)result); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D3A9Cu;
        goto label_3d3a9c;
    }
    ctx->pc = 0x3D3A94u;
    {
        const bool branch_taken_0x3d3a94 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3D3A98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D3A94u;
        // 0x3d3a98: 0x2248818  mult        $s1, $s1, $a0 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 17, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d3a94) {
            ctx->pc = 0x3D3A80u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3d3a80;
        }
    }
    ctx->pc = 0x3D3A9Cu;
label_3d3a9c:
    // 0x3d3a9c: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x3d3a9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_3d3aa0:
    // 0x3d3aa0: 0x2445b1e0  addiu       $a1, $v0, -0x4E20
    ctx->pc = 0x3d3aa0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294947296));
label_3d3aa4:
    // 0x3d3aa4: 0x8cb50034  lw          $s5, 0x34($a1)
    ctx->pc = 0x3d3aa4u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 52)));
label_3d3aa8:
    // 0x3d3aa8: 0x26a20001  addiu       $v0, $s5, 0x1
    ctx->pc = 0x3d3aa8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
label_3d3aac:
    // 0x3d3aac: 0x2b1182b  sltu        $v1, $s5, $s1
    ctx->pc = 0x3d3aacu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 21) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
label_3d3ab0:
    // 0x3d3ab0: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
label_3d3ab4:
    if (ctx->pc == 0x3D3AB4u) {
        ctx->pc = 0x3D3AB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D3AB0u;
        // 0x3d3ab4: 0xaca20034  sw          $v0, 0x34($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 52), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D3AB8u;
        goto label_3d3ab8;
    }
    ctx->pc = 0x3D3AB0u;
    {
        const bool branch_taken_0x3d3ab0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3D3AB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D3AB0u;
        // 0x3d3ab4: 0xaca20034  sw          $v0, 0x34($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 52), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d3ab0) {
            ctx->pc = 0x3D3AC0u;
            goto label_3d3ac0;
        }
    }
    ctx->pc = 0x3D3AB8u;
label_3d3ab8:
    // 0x3d3ab8: 0xaca00034  sw          $zero, 0x34($a1)
    ctx->pc = 0x3d3ab8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 52), GPR_U32(ctx, 0));
label_3d3abc:
    // 0x3d3abc: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x3d3abcu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3d3ac0:
    // 0x3d3ac0: 0x27d1e880  addiu       $s1, $fp, -0x1780
    ctx->pc = 0x3d3ac0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 30), 4294961280));
label_3d3ac4:
    // 0x3d3ac4: 0x24a5002c  addiu       $a1, $a1, 0x2C
    ctx->pc = 0x3d3ac4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 44));
label_3d3ac8:
    // 0x3d3ac8: 0x8e2200cc  lw          $v0, 0xCC($s1)
    ctx->pc = 0x3d3ac8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 204)));
label_3d3acc:
    // 0x3d3acc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3d3accu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3d3ad0:
    // 0x3d3ad0: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x3d3ad0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3d3ad4:
    // 0x3d3ad4: 0x40f809  jalr        $v0
label_3d3ad8:
    if (ctx->pc == 0x3D3AD8u) {
        ctx->pc = 0x3D3AD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D3AD4u;
        // 0x3d3ad8: 0x26560008  addiu       $s6, $s2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 18), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D3ADCu;
        goto label_3d3adc;
    }
    ctx->pc = 0x3D3AD4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3D3ADCu);
        ctx->pc = 0x3D3AD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D3AD4u;
        // 0x3d3ad8: 0x26560008  addiu       $s6, $s2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 18), 8));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D3AD4u, 0x3D3ADCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3D3ADCu;
label_3d3adc:
    // 0x3d3adc: 0x1260002e  beqz        $s3, . + 4 + (0x2E << 2)
label_3d3ae0:
    if (ctx->pc == 0x3D3AE0u) {
        ctx->pc = 0x3D3AE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D3ADCu;
        // 0x3d3ae0: 0x220a02d  daddu       $s4, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D3AE4u;
        goto label_3d3ae4;
    }
    ctx->pc = 0x3D3ADCu;
    {
        const bool branch_taken_0x3d3adc = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D3AE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D3ADCu;
        // 0x3d3ae0: 0x220a02d  daddu       $s4, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d3adc) {
            ctx->pc = 0x3D3B98u;
            goto label_3d3b98;
        }
    }
    ctx->pc = 0x3D3AE4u;
label_3d3ae4:
    // 0x3d3ae4: 0x32630003  andi        $v1, $s3, 0x3
    ctx->pc = 0x3d3ae4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)3);
label_3d3ae8:
    // 0x3d3ae8: 0x1a600012  blez        $s3, . + 4 + (0x12 << 2)
label_3d3aec:
    if (ctx->pc == 0x3D3AECu) {
        ctx->pc = 0x3D3AECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D3AE8u;
        // 0x3d3aec: 0x3c110061  lui         $s1, 0x61 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)97 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D3AF0u;
        goto label_3d3af0;
    }
    ctx->pc = 0x3D3AE8u;
    {
        const bool branch_taken_0x3d3ae8 = (GPR_S32(ctx, 19) <= 0);
        ctx->pc = 0x3D3AECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D3AE8u;
        // 0x3d3aec: 0x3c110061  lui         $s1, 0x61 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)97 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d3ae8) {
            ctx->pc = 0x3D3B34u;
            goto label_3d3b34;
        }
    }
    ctx->pc = 0x3D3AF0u;
label_3d3af0:
    // 0x3d3af0: 0x50600015  beql        $v1, $zero, . + 4 + (0x15 << 2)
label_3d3af4:
    if (ctx->pc == 0x3D3AF4u) {
        ctx->pc = 0x3D3AF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D3AF0u;
        // 0x3d3af4: 0x8e8200d4  lw          $v0, 0xD4($s4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 212)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D3AF8u;
        goto label_3d3af8;
    }
    ctx->pc = 0x3D3AF0u;
    {
        const bool branch_taken_0x3d3af0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d3af0) {
            ctx->pc = 0x3D3AF4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3D3AF0u;
            // 0x3d3af4: 0x8e8200d4  lw          $v0, 0xD4($s4) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 212)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3D3B48u;
            goto label_3d3b48;
        }
    }
    ctx->pc = 0x3D3AF8u;
label_3d3af8:
    // 0x3d3af8: 0x28620002  slti        $v0, $v1, 0x2
    ctx->pc = 0x3d3af8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
label_3d3afc:
    // 0x3d3afc: 0x5440000e  bnel        $v0, $zero, . + 4 + (0xE << 2)
label_3d3b00:
    if (ctx->pc == 0x3D3B00u) {
        ctx->pc = 0x3D3B00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D3AFCu;
        // 0x3d3b00: 0x8e8200d4  lw          $v0, 0xD4($s4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 212)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D3B04u;
        goto label_3d3b04;
    }
    ctx->pc = 0x3D3AFCu;
    {
        const bool branch_taken_0x3d3afc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3d3afc) {
            ctx->pc = 0x3D3B00u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3D3AFCu;
            // 0x3d3b00: 0x8e8200d4  lw          $v0, 0xD4($s4) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 212)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3D3B38u;
            goto label_3d3b38;
        }
    }
    ctx->pc = 0x3D3B04u;
label_3d3b04:
    // 0x3d3b04: 0x28620003  slti        $v0, $v1, 0x3
    ctx->pc = 0x3d3b04u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
label_3d3b08:
    // 0x3d3b08: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
label_3d3b0c:
    if (ctx->pc == 0x3D3B0Cu) {
        ctx->pc = 0x3D3B0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D3B08u;
        // 0x3d3b0c: 0x8e8200d4  lw          $v0, 0xD4($s4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 212)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D3B10u;
        goto label_3d3b10;
    }
    ctx->pc = 0x3D3B08u;
    {
        const bool branch_taken_0x3d3b08 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3D3B0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D3B08u;
        // 0x3d3b0c: 0x8e8200d4  lw          $v0, 0xD4($s4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 212)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d3b08) {
            ctx->pc = 0x3D3B24u;
            goto label_3d3b24;
        }
    }
    ctx->pc = 0x3D3B10u;
label_3d3b10:
    // 0x3d3b10: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3d3b10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3d3b14:
    // 0x3d3b14: 0x26259b60  addiu       $a1, $s1, -0x64A0
    ctx->pc = 0x3d3b14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 4294941536));
label_3d3b18:
    // 0x3d3b18: 0x40f809  jalr        $v0
label_3d3b1c:
    if (ctx->pc == 0x3D3B1Cu) {
        ctx->pc = 0x3D3B1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D3B18u;
        // 0x3d3b1c: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D3B20u;
        goto label_3d3b20;
    }
    ctx->pc = 0x3D3B18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3D3B20u);
        ctx->pc = 0x3D3B1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D3B18u;
        // 0x3d3b1c: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D3B18u, 0x3D3B20u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3D3B20u;
label_3d3b20:
    // 0x3d3b20: 0x8e8200d4  lw          $v0, 0xD4($s4)
    ctx->pc = 0x3d3b20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 212)));
label_3d3b24:
    // 0x3d3b24: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3d3b24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3d3b28:
    // 0x3d3b28: 0x26259b60  addiu       $a1, $s1, -0x64A0
    ctx->pc = 0x3d3b28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 4294941536));
label_3d3b2c:
    // 0x3d3b2c: 0x40f809  jalr        $v0
label_3d3b30:
    if (ctx->pc == 0x3D3B30u) {
        ctx->pc = 0x3D3B30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D3B2Cu;
        // 0x3d3b30: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D3B34u;
        goto label_3d3b34;
    }
    ctx->pc = 0x3D3B2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3D3B34u);
        ctx->pc = 0x3D3B30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D3B2Cu;
        // 0x3d3b30: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D3B2Cu, 0x3D3B34u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3D3B34u;
label_3d3b34:
    // 0x3d3b34: 0x8e8200d4  lw          $v0, 0xD4($s4)
    ctx->pc = 0x3d3b34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 212)));
label_3d3b38:
    // 0x3d3b38: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3d3b38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3d3b3c:
    // 0x3d3b3c: 0x26259b60  addiu       $a1, $s1, -0x64A0
    ctx->pc = 0x3d3b3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 4294941536));
label_3d3b40:
    // 0x3d3b40: 0x10000010  b           . + 4 + (0x10 << 2)
label_3d3b44:
    if (ctx->pc == 0x3D3B44u) {
        ctx->pc = 0x3D3B44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D3B40u;
        // 0x3d3b44: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D3B48u;
        goto label_3d3b48;
    }
    ctx->pc = 0x3D3B40u;
    {
        const bool branch_taken_0x3d3b40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D3B44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D3B40u;
        // 0x3d3b44: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d3b40) {
            ctx->pc = 0x3D3B84u;
            goto label_3d3b84;
        }
    }
    ctx->pc = 0x3D3B48u;
label_3d3b48:
    // 0x3d3b48: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3d3b48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3d3b4c:
    // 0x3d3b4c: 0x26259b60  addiu       $a1, $s1, -0x64A0
    ctx->pc = 0x3d3b4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 4294941536));
label_3d3b50:
    // 0x3d3b50: 0x40f809  jalr        $v0
label_3d3b54:
    if (ctx->pc == 0x3D3B54u) {
        ctx->pc = 0x3D3B54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D3B50u;
        // 0x3d3b54: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D3B58u;
        goto label_3d3b58;
    }
    ctx->pc = 0x3D3B50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3D3B58u);
        ctx->pc = 0x3D3B54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D3B50u;
        // 0x3d3b54: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D3B50u, 0x3D3B58u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3D3B58u;
label_3d3b58:
    // 0x3d3b58: 0x8e8200d4  lw          $v0, 0xD4($s4)
    ctx->pc = 0x3d3b58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 212)));
label_3d3b5c:
    // 0x3d3b5c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3d3b5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3d3b60:
    // 0x3d3b60: 0x40f809  jalr        $v0
label_3d3b64:
    if (ctx->pc == 0x3D3B64u) {
        ctx->pc = 0x3D3B64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D3B60u;
        // 0x3d3b64: 0x26259b60  addiu       $a1, $s1, -0x64A0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 4294941536));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D3B68u;
        goto label_3d3b68;
    }
    ctx->pc = 0x3D3B60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3D3B68u);
        ctx->pc = 0x3D3B64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D3B60u;
        // 0x3d3b64: 0x26259b60  addiu       $a1, $s1, -0x64A0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 4294941536));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D3B60u, 0x3D3B68u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3D3B68u;
label_3d3b68:
    // 0x3d3b68: 0x8e8200d4  lw          $v0, 0xD4($s4)
    ctx->pc = 0x3d3b68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 212)));
label_3d3b6c:
    // 0x3d3b6c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3d3b6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3d3b70:
    // 0x3d3b70: 0x40f809  jalr        $v0
label_3d3b74:
    if (ctx->pc == 0x3D3B74u) {
        ctx->pc = 0x3D3B74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D3B70u;
        // 0x3d3b74: 0x26259b60  addiu       $a1, $s1, -0x64A0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 4294941536));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D3B78u;
        goto label_3d3b78;
    }
    ctx->pc = 0x3D3B70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3D3B78u);
        ctx->pc = 0x3D3B74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D3B70u;
        // 0x3d3b74: 0x26259b60  addiu       $a1, $s1, -0x64A0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 4294941536));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D3B70u, 0x3D3B78u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3D3B78u;
label_3d3b78:
    // 0x3d3b78: 0x8e8200d4  lw          $v0, 0xD4($s4)
    ctx->pc = 0x3d3b78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 212)));
label_3d3b7c:
    // 0x3d3b7c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3d3b7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3d3b80:
    // 0x3d3b80: 0x26259b60  addiu       $a1, $s1, -0x64A0
    ctx->pc = 0x3d3b80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 4294941536));
label_3d3b84:
    // 0x3d3b84: 0x40f809  jalr        $v0
label_3d3b88:
    if (ctx->pc == 0x3D3B88u) {
        ctx->pc = 0x3D3B8Cu;
        goto label_3d3b8c;
    }
    ctx->pc = 0x3D3B84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3D3B8Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D3B84u, 0x3D3B8Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3D3B8Cu;
label_3d3b8c:
    // 0x3d3b8c: 0x213102b  sltu        $v0, $s0, $s3
    ctx->pc = 0x3d3b8cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
label_3d3b90:
    // 0x3d3b90: 0x5440ffed  bnel        $v0, $zero, . + 4 + (-0x13 << 2)
label_3d3b94:
    if (ctx->pc == 0x3D3B94u) {
        ctx->pc = 0x3D3B94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D3B90u;
        // 0x3d3b94: 0x8e8200d4  lw          $v0, 0xD4($s4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 212)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D3B98u;
        goto label_3d3b98;
    }
    ctx->pc = 0x3D3B90u;
    {
        const bool branch_taken_0x3d3b90 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3d3b90) {
            ctx->pc = 0x3D3B94u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3D3B90u;
            // 0x3d3b94: 0x8e8200d4  lw          $v0, 0xD4($s4) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 212)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3D3B48u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3d3b48;
        }
    }
    ctx->pc = 0x3D3B98u;
label_3d3b98:
    // 0x3d3b98: 0x27d0e880  addiu       $s0, $fp, -0x1780
    ctx->pc = 0x3d3b98u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 30), 4294961280));
label_3d3b9c:
    // 0x3d3b9c: 0x3c050061  lui         $a1, 0x61
    ctx->pc = 0x3d3b9cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)97 << 16));
label_3d3ba0:
    // 0x3d3ba0: 0x8e0200c4  lw          $v0, 0xC4($s0)
    ctx->pc = 0x3d3ba0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 196)));
label_3d3ba4:
    // 0x3d3ba4: 0x24a59b68  addiu       $a1, $a1, -0x6498
    ctx->pc = 0x3d3ba4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294941544));
label_3d3ba8:
    // 0x3d3ba8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x3d3ba8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3d3bac:
    // 0x3d3bac: 0x40f809  jalr        $v0
label_3d3bb0:
    if (ctx->pc == 0x3D3BB0u) {
        ctx->pc = 0x3D3BB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D3BACu;
        // 0x3d3bb0: 0x2a0302d  daddu       $a2, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D3BB4u;
        goto label_3d3bb4;
    }
    ctx->pc = 0x3D3BACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3D3BB4u);
        ctx->pc = 0x3D3BB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D3BACu;
        // 0x3d3bb0: 0x2a0302d  daddu       $a2, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D3BACu, 0x3D3BB4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3D3BB4u;
label_3d3bb4:
    // 0x3d3bb4: 0x8e0200f4  lw          $v0, 0xF4($s0)
    ctx->pc = 0x3d3bb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 244)));
label_3d3bb8:
    // 0x3d3bb8: 0x40f809  jalr        $v0
label_3d3bbc:
    if (ctx->pc == 0x3D3BBCu) {
        ctx->pc = 0x3D3BBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D3BB8u;
        // 0x3d3bbc: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D3BC0u;
        goto label_3d3bc0;
    }
    ctx->pc = 0x3D3BB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3D3BC0u);
        ctx->pc = 0x3D3BBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D3BB8u;
        // 0x3d3bbc: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D3BB8u, 0x3D3BC0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3D3BC0u;
label_3d3bc0:
    // 0x3d3bc0: 0x8e0300cc  lw          $v1, 0xCC($s0)
    ctx->pc = 0x3d3bc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 204)));
label_3d3bc4:
    // 0x3d3bc4: 0x2c22023  subu        $a0, $s6, $v0
    ctx->pc = 0x3d3bc4u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 22), GPR_U32(ctx, 2)));
label_3d3bc8:
    // 0x3d3bc8: 0x60f809  jalr        $v1
label_3d3bcc:
    if (ctx->pc == 0x3D3BCCu) {
        ctx->pc = 0x3D3BCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D3BC8u;
        // 0x3d3bcc: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D3BD0u;
        goto label_3d3bd0;
    }
    ctx->pc = 0x3D3BC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x3D3BD0u);
        ctx->pc = 0x3D3BCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D3BC8u;
        // 0x3d3bcc: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D3BC8u, 0x3D3BD0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3D3BD0u;
label_3d3bd0:
    // 0x3d3bd0: 0x12e00005  beqz        $s7, . + 4 + (0x5 << 2)
label_3d3bd4:
    if (ctx->pc == 0x3D3BD4u) {
        ctx->pc = 0x3D3BD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D3BD0u;
        // 0x3d3bd4: 0x3c050061  lui         $a1, 0x61 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)97 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D3BD8u;
        goto label_3d3bd8;
    }
    ctx->pc = 0x3D3BD0u;
    {
        const bool branch_taken_0x3d3bd0 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D3BD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D3BD0u;
        // 0x3d3bd4: 0x3c050061  lui         $a1, 0x61 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)97 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d3bd0) {
            ctx->pc = 0x3D3BE8u;
            goto label_3d3be8;
        }
    }
    ctx->pc = 0x3D3BD8u;
label_3d3bd8:
    // 0x3d3bd8: 0x8e0200d4  lw          $v0, 0xD4($s0)
    ctx->pc = 0x3d3bd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 212)));
label_3d3bdc:
    // 0x3d3bdc: 0x24a59580  addiu       $a1, $a1, -0x6A80
    ctx->pc = 0x3d3bdcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294940032));
label_3d3be0:
    // 0x3d3be0: 0x40f809  jalr        $v0
label_3d3be4:
    if (ctx->pc == 0x3D3BE4u) {
        ctx->pc = 0x3D3BE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D3BE0u;
        // 0x3d3be4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D3BE8u;
        goto label_3d3be8;
    }
    ctx->pc = 0x3D3BE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3D3BE8u);
        ctx->pc = 0x3D3BE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D3BE0u;
        // 0x3d3be4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D3BE0u, 0x3D3BE8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3D3BE8u;
label_3d3be8:
    // 0x3d3be8: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x3d3be8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3d3bec:
    // 0x3d3bec: 0x7bb000a0  lq          $s0, 0xA0($sp)
    ctx->pc = 0x3d3becu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_3d3bf0:
    // 0x3d3bf0: 0x7bb10090  lq          $s1, 0x90($sp)
    ctx->pc = 0x3d3bf0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_3d3bf4:
    // 0x3d3bf4: 0x7bb20080  lq          $s2, 0x80($sp)
    ctx->pc = 0x3d3bf4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_3d3bf8:
    // 0x3d3bf8: 0x7bb30070  lq          $s3, 0x70($sp)
    ctx->pc = 0x3d3bf8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_3d3bfc:
    // 0x3d3bfc: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x3d3bfcu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_3d3c00:
    // 0x3d3c00: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x3d3c00u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_3d3c04:
    // 0x3d3c04: 0x7bb60040  lq          $s6, 0x40($sp)
    ctx->pc = 0x3d3c04u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_3d3c08:
    // 0x3d3c08: 0x7bb70030  lq          $s7, 0x30($sp)
    ctx->pc = 0x3d3c08u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3d3c0c:
    // 0x3d3c0c: 0x7bbe0020  lq          $fp, 0x20($sp)
    ctx->pc = 0x3d3c0cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3d3c10:
    // 0x3d3c10: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3d3c10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_3d3c14:
    // 0x3d3c14: 0x3e00008  jr          $ra
label_3d3c18:
    if (ctx->pc == 0x3D3C18u) {
        ctx->pc = 0x3D3C18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D3C14u;
        // 0x3d3c18: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D3C1Cu;
        goto label_3d3c1c;
    }
    ctx->pc = 0x3D3C14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3D3C18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D3C14u;
        // 0x3d3c18: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D3C14u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3D3C1Cu;
label_3d3c1c:
    // 0x3d3c1c: 0x0  nop
    ctx->pc = 0x3d3c1cu;
    // NOP
    ctx->pc = 0x3d3c20u;
}
